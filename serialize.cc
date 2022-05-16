#include "cacti/arbiter.h"
#include "cacti/area.h"
#include "cacti/bank.h"
#include "cacti/basic_circuit.h"
#include "cacti/cacti_interface.h"
#include "cacti/component.h"
#include "cacti/const.h"
#include "cacti/crossbar.h"
#include "cacti/decoder.h"
#include "cacti/htree2.h"
#include "cacti/io.h"
#include "cacti/mat.h"
#include "cacti/nuca.h"
#include "cacti/parameter.h"
#include "cacti/powergating.h"
#include "cacti/router.h"
#include "cacti/subarray.h"
#include "cacti/Ucache.h"
#include "cacti/uca.h"
// #include "cacti/version_cacti.h"
#include "cacti/wire.h"

#include "arch_const.h"
#include "array.h"
#include "basic_components.h"
#include "core.h"
#include "globalvar.h"
#include "interconnect.h"
#include "iocontrollers.h"
#include "logic.h"
#include "memoryctrl.h"
#include "noc.h"
#include "processor.h"
// #include "serialize.h"
#include "sharedcache.h"
// #include "version.h"
#include "XML_Parse.h"
// #include "xmlParser.h"

#include "serialize.h"

#include <type_traits>
#include <algorithm>
#include <cstdint>
#include <vector>
#include <unordered_map>

#include <fcntl.h>
#include <sys/io.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>

struct ser_reg {
    std::vector<uint8_t> data;
    std::unordered_map<void *, size_t> pointer_map;

    inline void reserve(size_t size) {
        if (data.size() >= size) return;
        data.resize(size);
    }
};

struct des_reg {
    uint8_t *data;
    std::unordered_map<size_t, void *> pointer_map;
};

namespace {
template<class T>
uint8_t *add(uint8_t *p);
template<class T>
uint8_t *align(uint8_t *p);
template<class T>
const uint8_t *add(const uint8_t *p);
template<class T>
constexpr size_t add(size_t p);
template<class T>
constexpr size_t align(size_t p);
template<class T>
const uint8_t *align(const uint8_t *p);
template<class T>
constexpr size_t alignadd(size_t p);
}

template<class T>
struct serdes {
    static constexpr size_t size = sizeof(T);
    static constexpr size_t align = alignof(T);

    static void ser(const T &x, size_t p, ser_reg &reg) {
        static_assert(std::is_pod<T>::value,
                      "non-specialized serialization"
                      " for non-POD type");
        memcpy((void *) (reg.data.data() + p), (const void *) &x, size);
    }

    static void des(T &x, const uint8_t *p, des_reg &reg) {
        static_assert(std::is_pod<T>::value,
                      "non-specialized deserialization"
                      " for non-POD type");
        memcpy((void *) &x, (const void *) p, size);
    }
};

template<class U, class Alloc>
struct serdes<std::vector<U, Alloc>> {
    static constexpr size_t size = 2 * sizeof(size_t);
    static constexpr size_t align = alignof(size_t);

    static void ser(const std::vector<U, Alloc> &x, size_t p, ser_reg &reg);

    static void des(std::vector<U, Alloc> &x, const uint8_t *p, des_reg &reg);
};

template<class CharT, class Traits, class Alloc>
struct serdes<std::basic_string<CharT, Traits, Alloc>> {
    using T = std::basic_string<CharT, Traits, Alloc>;

    static constexpr size_t size = 2 * sizeof(size_t);
    static constexpr size_t align = alignof(size_t);

    static void ser(const T &x, size_t p, ser_reg &reg) {
        static_assert(std::is_trivial<CharT>::value, "why");
        p = ::align<size_t>(p);
        *(size_t *) (reg.data.data() + p) = x.size(); p = add<size_t>(p);
        size_t b = reg.data.size();
        *(size_t *) (reg.data.data() + p) = b;
        reg.reserve(b + x.size() * sizeof(CharT));
        memcpy((void *) (reg.data.data() + b), x.data(), x.size() * sizeof(CharT));
    }

    static void des(T &x, const uint8_t *p, des_reg &reg) {
        static_assert(std::is_trivial<CharT>::value, "why");
        new((void *) &x) T;
        p = ::align<size_t>(p);
        size_t size = *(const size_t *) p; p = add<size_t>(p);
        x.resize(size);
        const CharT *arr = (const CharT *) (reg.data + *(const size_t *) p);
        memcpy(x.data(), arr, size * sizeof(CharT));
    }
};

template<class U>
struct serdes<const U *> {
    using T = const U *;
    static constexpr size_t size = sizeof(T);
    static constexpr size_t align = alignof(T);
    static void ser(const T &x, size_t p, ser_reg &reg);
    static void des(T &x, const uint8_t *p, des_reg &reg);
};

template<class U>
struct serdes<U *> {
    using T = U *;
    static constexpr size_t size = sizeof(T);
    static constexpr size_t align = alignof(T);
    static void ser(const T &x, size_t p, ser_reg &reg) {
        serdes<const U *>::ser((const U *) x, p, reg);
    }
    static void des(T &x, const uint8_t *p, des_reg &reg) {
        serdes<const U *>::des(*(const U **) &x, p, reg);
    }
};

namespace {
template<class T>
uint8_t *add(uint8_t *p);

template<class T>
uint8_t *align(uint8_t *p);

template<class T>
constexpr size_t alignadd(size_t p);
}

#pragma GCC diagnostic ignored "-Winvalid-offsetof"
#define FORWARD_DECLS
#include "serialize.gen.cpp.inc"
#undef FORWARD_DECLS

namespace {
template<class T>
uint8_t *add(uint8_t *p) { return p + serdes<T>::size; }

template<class T>
uint8_t *align(uint8_t *p) {
    return reinterpret_cast<uint8_t *>(
        (reinterpret_cast<size_t>(p) + (serdes<T>::align - 1))
        / serdes<T>::align * serdes<T>::align
    );
}

template<class T>
const uint8_t *add(const uint8_t *p) { return p + serdes<T>::size; }

template<class T>
constexpr size_t add(size_t p) { return p + serdes<T>::size; }

template<class T>
constexpr size_t align(size_t p) {
    return (p + serdes<T>::align - 1)
            / serdes<T>::align * serdes<T>::align;
}

template<class T>
const uint8_t *align(const uint8_t *p) {
    return reinterpret_cast<const uint8_t *>(
        ::align<T>(reinterpret_cast<size_t>(p))
    );
}

template<class T>
constexpr size_t alignadd(size_t p) {
    return (p + serdes<T>::align - 1)
        / serdes<T>::align * serdes<T>::align
        + serdes<T>::size;
}
}

#include "serialize.gen.cpp.inc"

namespace {
    template<bool B>
    struct StaticWarning {};
    template<>
    struct StaticWarning<true> {
        [[deprecated]]
        StaticWarning() {}
    };
}

template<class U, class Alloc>
void serdes<std::vector<U, Alloc>>::ser(const std::vector<U, Alloc> &x, size_t p, ser_reg &reg) {
    p = ::align<size_t>(p);
    *(size_t *) (reg.data.data() + p) = x.size(); p = add<size_t>(p);
    size_t b = ::align<U>(reg.data.size());
    size_t start = b;
    *(size_t *) (reg.data.data() + p) = b;
    b += serdes<U>::size * x.size();
    reg.reserve(b);
    for (size_t i = 0; i < x.size(); i++) {
        serdes<U>::ser(x[i], start + i * serdes<U>::size, reg);
    }
}

template<class U, class Alloc>
void serdes<std::vector<U, Alloc>>::des(std::vector<U, Alloc> &x, const uint8_t *p, des_reg &reg) {
    // cursed
    new((void *) &x) std::vector<U>;
    p = ::align<size_t>(p);
    size_t size = *(const size_t *) p; p = add<size_t>(p);
    if constexpr (std::is_trivial<U>::value) {
        x.resize(size);
    } else {
        x.reserve(size);
    }
    const U *arr = (const U *) (reg.data + *(const size_t *) p);
    for (size_t i = 0; i < size; i++) {
        serdes<U>::des(x[i], (const uint8_t *) &arr[i], reg);
    }
    if constexpr (!std::is_trivial<U>::value) {
#ifdef __GLIBCXX__
        // extremely cursed
        auto impl = (std::_Vector_base<U, Alloc> *) &x;
        impl->_M_impl._M_finish = impl->_M_impl._M_start + size;
        StaticWarning<!std::is_trivial<U>::value> a;
#else
        static_assert(sizeof(U) == 0, "non-libstdc++ not supported");
#endif
    }
}

template<class U>
void serdes<const U *>::ser(const U *const &x, size_t p, ser_reg &reg) {
    p = ::align<size_t>(p);
    auto it = reg.pointer_map.find((void *) x);
    if (it != reg.pointer_map.end()) {
        *(size_t *) (reg.data.data() + p) = it->second;
        return;
    }
    size_t b = ::align<U>(reg.data.size());
    size_t start = b;
    *(size_t *) (reg.data.data() + p) = b;
    b += serdes<U>::size;
    reg.reserve(b);
    reg.pointer_map[(void *) x] = start;
    serdes<U>::ser(*x, start, reg);
}

template<class U>
void serdes<const U *>::des(const U *&x, const uint8_t *p, des_reg &reg) {
    p = ::align<size_t>(p);
    size_t start = *(size_t *) p;
    auto it = reg.pointer_map.find(start);
    if (it != reg.pointer_map.end()) {
        x = (const U *) it->second;
        return;
    }
    x = (U *) operator new(sizeof(U));
    reg.pointer_map[start] = (void *) x;
    serdes<U>::des(*const_cast<U *>(x), p, reg);
}

void serialize(const Processor &p, const char *fn) {
    ser_reg reg;
    reg.data.reserve(4096);
    reg.reserve(serdes<Processor>::size);
    serdes<Processor>::ser(p, (size_t) 0, reg);
}

Processor *deserialize(const char *fn) {
    int fd = open(fn, O_RDONLY);
    if (fd < 0) {
        perror("deserialize|open");
        return nullptr;
    }
    struct stat stat_r;
    if (fstat(fd, &stat_r) != 0) {
        perror("deserialize|fstat");
        close(fd);
        return nullptr;
    }
    size_t fsize = stat_r.st_size;
    uint8_t *buf = (uint8_t *) mmap(0, fsize, PROT_READ, MAP_PRIVATE, fd, 0);
    if (!buf) {
        perror("deserialize|mmap");
        close(fd);
        return nullptr;
    }
    des_reg reg;
    reg.data = buf;
    auto ret = (Processor *) operator new(sizeof(Processor));
    serdes<Processor>::des(*ret, buf, reg);
    munmap(buf, fsize);
    close(fd);
    return ret;
}
