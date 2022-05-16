from clang.cindex import *
import clang.cindex
import sys

depth = 0
parents = []

def elaborate_type(ty):
    global depth
    print('| ' * depth, '+ ', ty.spelling, ty.kind)
    if ty.kind == TypeKind.POINTER:
        depth += 1
        elaborate_type(ty.get_pointee())
        depth -= 1
    elif ty.kind == TypeKind.CONSTANTARRAY:
        depth += 1
        elaborate_type(ty.get_array_element_type())
        depth -= 1
    elif ty.kind == TypeKind.FUNCTIONPROTO:
        for arg in ty.argument_types():
            print('| ' * depth, '+ ', '- arg:', arg.spelling, arg.kind)
        depth += 1
        elaborate_type(ty.get_result())
        depth -= 1

def walk(node, fn):
    global depth

    if not node.location.file:
        print(node, node.location, node.kind, node.spelling)
        print('|-', ' || '.join(p.spelling for p in parents))
        return

    if node.location.file.name != fn:
        return

    ty = node.type #.get_canonical()
    print('| ' * depth, node.kind, node.spelling, ty.spelling, ty.kind)
    # print('| ' * depth, '*', node.get_definition(), node.canonical)
    # print('| ' * depth, '- ', *ty.argument_types())
    if node.type.get_num_template_arguments() > 0:
        print('| ' * depth, '- has', node.type.get_num_template_arguments(), 'template arguments')


    if node.kind == CursorKind.TYPE_REF and ty.kind == TypeKind.ENUM:
        print('| ' * depth, '- inner type:', node.referenced.enum_type.spelling)

    if node.kind == CursorKind.TYPEDEF_DECL:
        elaborate_type(node.underlying_typedef_type)

    # if node.kind == CursorKind.CXX_ACCESS_SPEC_DECL or \
    #         node.kind == CursorKind.FIELD_DECL:
    #     print(node.access_specifier)


    for c in node.get_children():
        depth += 1
        parents.append(node)
        walk(c, fn)
        parents.pop()
        depth -= 1

index = clang.cindex.Index.create()
for fn in ['zzz.h' if len(sys.argv) != 2 else sys.argv[1]]:
    root = index.parse(fn, ['-x', 'c++', '-std=c++11', '-Icacti']).cursor
    for c in root.get_children():
        walk(c, fn)
