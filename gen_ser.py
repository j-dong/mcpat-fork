from clang.cindex import *
import clang.cindex
import sys
import functools
import contextlib
import collections
import sys

includes = [
    'cacti/arbiter.h',
    'cacti/area.h',
    'cacti/bank.h',
    'cacti/basic_circuit.h',
    'cacti/cacti_interface.h',
    'cacti/component.h',
    'cacti/const.h',
    'cacti/crossbar.h',
    'cacti/decoder.h',
    'cacti/htree2.h',
    'cacti/io.h',
    'cacti/mat.h',
    'cacti/nuca.h',
    'cacti/parameter.h',
    'cacti/powergating.h',
    'cacti/router.h',
    'cacti/subarray.h',
    'cacti/Ucache.h',
    'cacti/uca.h',
    # 'cacti/version_cacti.h',
    'cacti/wire.h',

    'arch_const.h',
    'array.h',
    'basic_components.h',
    'core.h',
    'globalvar.h',
    'interconnect.h',
    'iocontrollers.h',
    'logic.h',
    'memoryctrl.h',
    'noc.h',
    'processor.h',
    # 'serialize.h',
    'sharedcache.h',
    # 'version.h',
    'XML_Parse.h',
    # 'xmlParser.h',
]

ignore = (
    'solution',
    'calc_time_mt_wrapper_struct',
    'Wire',
    'Nuca',
    'nuca_org_t',
    'Mat',
    'Bank',
    'UCA',
)

def type_kind_is_primitive(kind):
    return TypeKind.VOID.value <= kind.value <= TypeKind.NULLPTR.value

hack_counter = 0
forward_decls = []
parents = []

classes = dict()
req_graph = collections.defaultdict(list)
indeg = collections.defaultdict(int)

def add_to_graph(node):
    parent = node.type.get_canonical().spelling
    req_graph[parent]
    for c in node.get_children():
        if c.kind == CursorKind.CXX_BASE_SPECIFIER:
            ty = c.type.get_canonical()
        elif c.kind == CursorKind.FIELD_DECL:
            ty = c.type.get_canonical()
            while ty.kind == TypeKind.CONSTANTARRAY:
                ty = ty.element_type.get_canonical()
            if (type_kind_is_primitive(ty.kind)
                    or ty.kind == TypeKind.POINTER
                    or ty.kind == TypeKind.LVALUEREFERENCE
                    or ty.kind == TypeKind.ENUM):
                continue
            assert ty.kind == TypeKind.RECORD
            if ty.spelling.startswith('std::'):
                continue
        else:
            continue
        a = ty.spelling
        b = parent
        req_graph[a].append(b)
        indeg[b] += 1

@contextlib.contextmanager
def block(cls):
    import io
    assert cls not in classes
    with io.StringIO() as io:
        with contextlib.redirect_stdout(io):
            yield io
        assert cls not in classes
        classes[cls] = io.getvalue()

# header = open('serialize.gen.h.inc', 'w')
impl = open('serialize.gen.cpp.inc', 'w')

print('''// vim: set ft=cpp:

#ifndef FORWARD_DECLS
''', file=impl)

def fix_long(ty):
    # change long to long long because Windows is stupid
    if ty in ('long', 'unsigned long'):
        ty += ' long'
    return ty

def split_type(ty):
    if (type_kind_is_primitive(ty.kind)
            or ty.kind == TypeKind.RECORD
            or ty.kind == TypeKind.ENUM):
        return (fix_long(ty.spelling) + ' ', '', False)
    elif ty.kind == TypeKind.CONSTANTARRAY:
        l, r, ref = split_type(ty.element_type)
        if ref: raise Exception('cannot have array of reference')
        return (l + '(', '[' + str(ty.element_count) + '])' + r, False)
    elif ty.kind == TypeKind.POINTER:
        pp = ty.get_pointee()
        l, r, ref = split_type(pp)
        if ref: raise Exception('cannot have pointer to reference')
        return (l + '(*', ')' + r, False)
    elif ty.kind == TypeKind.LVALUEREFERENCE:
        l, r, ref = split_type(ty.get_pointee())
        if ref: raise Exception('cannot have reference to reference')
        return (l + '(&', ')' + r, True)
    else:
        raise Exception('unhandled type kind ' + str(ty.kind))

def resolve_field(node, parent, is_public):
    if node.kind == CursorKind.CXX_BASE_SPECIFIER:
        if not is_public:
            print('oh no we are screwed by a private base', node.type.spelling)
        f_ty = node.type.get_canonical().spelling
        return (
            f_ty,
            f'serdes<{f_ty}>::ser(*static_cast<const {f_ty} *>(&x), p = ::align<{f_ty}>(p), reg); p = add<{f_ty}>(p);',
            f'serdes<{f_ty}>::des(*static_cast<{f_ty} *>(&x), p = ::align<{f_ty}>(p), reg); p = add<{f_ty}>(p);'
        )
    elif node.kind != CursorKind.FIELD_DECL:
        return None
    ty = node.type.get_canonical()
    try:
        ty_l, ty_r, ref = split_type(ty)
    except:
        sys.stdout = sys.stderr
        print(node.spelling, parent)
        print(node.location.file, node.location.line, node.location.column)
        for p in parents:
            print(p.spelling)
        raise

    field_access = 'x.' + node.spelling
    if ref:
        # not even bothering with better syntax
        # reference types in structs are the worst
        full_ty = ty_l + ty_r
        ty_l = f'std::remove_reference<{full_ty}>::type *'
        ty_r = ''
        field_access = f'*({ty_l}*) ((uint8_t *) &x + offsetof({parent}, {node.spelling}))'
    if not is_public:
        assert not ref
        # dirty hacks lmao
        # taken from https://stackoverflow.com/a/41416529
        # idea: explicit template specialization bypasses access checks
        # construct a template which produces a friend (non-member)
        # function that provides a pointer-to-member giving us access
        global hack_counter
        hack_counter += 1
        print(f'''
namespace {{
template<class Token, {ty_l}({parent}::*Member){ty_r}>
struct hack_Accessor_{hack_counter} {{
    friend constexpr {ty_l}({parent}::*hack_Access_{hack_counter
            }(Token *)){ty_r} {{
        return Member;
    }}
}};
struct hack_Token_{hack_counter} {{
    friend constexpr {ty_l}({parent}::*hack_Access_{hack_counter
            }(hack_Token_{hack_counter}*)){ty_r};
}};
template struct hack_Accessor_{hack_counter}<
    hack_Token_{hack_counter}, &{parent}::{node.spelling}
>;
}}
''')
        field_access = f'x.*hack_Access_{hack_counter}(static_cast<hack_Token_{hack_counter} *>(nullptr))'

    f_ty = (ty_l + ty_r).strip()

    if ty.kind == TypeKind.ENUM:
        ref, = filter(lambda x: x.kind == CursorKind.TYPE_REF,
                      node.get_children())
        inner = ref.referenced.enum_type
        inner_t = fix_long(inner.get_canonical().spelling)
        outer_t = ty.spelling
        return (
            inner_t,
            f'*reinterpret_cast<{inner_t} *>(reg.data.data() + (p = ::align<{inner_t}>(p))) = static_cast<{inner_t}>({field_access}); p = add<{inner_t}>(p);',
            f'{field_access} = static_cast<{outer_t}>(*reinterpret_cast<const {inner_t} *>(p = ::align<{inner_t}>(p))); p = add<{inner_t}>(p);'
        )
    else:
        return (
            f_ty,
            f'serdes<{f_ty}>::ser({field_access}, p = ::align<{f_ty}>(p), reg); p = add<{f_ty}>(p);',
            f'serdes<{f_ty}>::des({field_access}, p = ::align<{f_ty}>(p), reg); p = add<{f_ty}>(p);'
        )

class TypeInfo:
    def __init__(self, node):
        self.name = fix_long(node.type.get_canonical().spelling)
        self.debug_info = f'''
location: {node.location.file}:{node.location.line}|{node.location.column}
parents: {' -> '.join(n.spelling for n in parents)}
'''
        self.fields = []
        for c in node.get_children():
            field = resolve_field(c, self.name, c.access_specifier == clang.cindex.AccessSpecifier.PUBLIC)
            if field != None:
                self.fields.append(field)

    def __str__(self):
        return self.name

def gen_serdes(T):
    size_expr = '0'
    align_expr = '(size_t) 1'
    for f_ty, ser, des in T.fields:
        size_expr = f'alignadd<{f_ty}>({size_expr})'
        align_expr = f'std::max({align_expr}, serdes<{f_ty}>::align)'

    forward_decls.append(T)

    print(f'''
/*{T.debug_info}*/
template<>
struct serdes<{T}> {{
    static constexpr size_t size = {size_expr};
    static constexpr size_t align = {align_expr};
''')

    print(f'    static void ser(const {T} &x, size_t p, ser_reg &reg) {{')
    for f_ty, ser, des in T.fields:
        print(f'        {ser}')
    print(f'    }}')

    print(f'    static void des({T} &x, const uint8_t *p, des_reg &reg) {{')
    for f_ty, ser, des in T.fields:
        print(f'        {des}')
    print(f'    }}')

    print(f'}};')

def walk(node, fn):
    if not node.location.file:
        # doesn't actually happen but just in case, print an error
        print(node, node.location, node.kind, node.spelling)
        print('|-', ' || '.join(p.spelling for p in parents))
        raise Exception('we are screwed once again')

    if node.location.file.name != fn:
        return

    ty = node.type.get_canonical()
    # print('| ' * depth, node.kind, node.spelling, ty.spelling, ty.kind)
    # # print('| ' * depth, '- ', *ty.argument_types())
    # if node.type.get_num_template_arguments() > 0:
    #     print('| ' * depth, '- has', node.type.get_num_template_arguments(), 'template arguments')

    if node.kind == CursorKind.CLASS_DECL or node.kind == CursorKind.STRUCT_DECL:
        if node.type.get_canonical().spelling in ignore:
            return
        defn = node.get_definition()
        if defn is not None and defn == node:
            add_to_graph(node)
            with block(node.type.get_canonical().spelling):
                T = TypeInfo(node)
                gen_serdes(T)
    elif node.kind == CursorKind.TYPEDEF_DECL:
        # prevent duplicates
        return

    parents.append(node)
    for c in node.get_children():
        walk(c, fn)
    parents.pop()

index = clang.cindex.Index.create()
for fn in includes:
    root = index.parse(fn, ['-x', 'c++', '-std=c++11', '-Icacti']).cursor
    parents.append(root)
    for c in root.get_children():
        walk(c, fn)
    parents.pop()

# serialize graph
indeg_0 = []
for k in req_graph:
    if indeg[k] == 0:
        indeg_0.append(k)
unvisited = set(req_graph)
while indeg_0:
    c = indeg_0.pop()
    if c not in unvisited:
        raise Exception(f'visited {c} multiple times???')
    unvisited.remove(c)
    impl.write(classes[c])
    for n in req_graph[c]:
        indeg[n] -= 1
        assert indeg[n] >= 0
        if indeg[n] == 0:
            indeg_0.append(n)
if len(unvisited) > 0:
    print('cycle in type graph!!!')

print('''
#else
''', file=impl)

for T in forward_decls:
    print(f'template<> struct serdes<{T}>;', file=impl)

print('''
#endif
''', file=impl)
