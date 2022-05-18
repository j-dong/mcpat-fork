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
#include <fstream>
#include <cxxabi.h>

#ifdef _WIN32
# define WIN32_LEAN_AND_MEAN
# undef PCH
# include <windows.h>
#elif defined(__unix__)
# include <fcntl.h>
# include <sys/io.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/mman.h>
# include <unistd.h>
#else
# error "unsupported platform"
#endif

constexpr bool SERDES_DEBUG = false;

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

template<typename T>
struct Demangle {
    const char *data;
    char *to_free;

    Demangle() {
        const char *T_name = typeid(T).name();
        int status;
        char *unmangled = abi::__cxa_demangle(T_name, 0, 0, &status);
        if (unmangled) {
            to_free = unmangled;
            data = unmangled;
        } else {
            to_free = nullptr;
            data = T_name;
        }
    }

    ~Demangle() { free(to_free); data = to_free = nullptr; }

    friend std::ostream &operator<<(std::ostream &s, const Demangle &d) {
        return s << d.data;
    }
};

template<class U, class Alloc>
void serdes<std::vector<U, Alloc>>::ser(const std::vector<U, Alloc> &x, size_t p, ser_reg &reg) {
    p = ::align<size_t>(p);
    if (SERDES_DEBUG) {
        std::cout << "-- serializing vector<" << Demangle<U>{} << ">" << std::endl;
        std::cout << "     at location " << p << std::endl;
        std::cout << "     of size " << x.size() << std::endl;
    }
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
    if (SERDES_DEBUG) {
        std::cout << "-- deserializing vector<" << Demangle<U>{} << ">" << std::endl;
        std::cout << "     at location " << (p - reg.data) << std::endl;
        // std::cout << "     of size " << x.size() << std::endl;
    }
    size_t size = *(const size_t *) p; p = add<size_t>(p);
    if (SERDES_DEBUG) {
        std::cout << "     of size " << size << std::endl;
    }
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

static constexpr size_t INVALID_PTR = SIZE_MAX;

template<class U>
void serdes<const U *>::ser(const U *const &x, size_t p, ser_reg &reg) {
    p = ::align<size_t>(p);
    if (SERDES_DEBUG) {
        std::cout << "-- serializing pointer to " << Demangle<U>{} << std::endl;
        std::cout << "     at location " << p << std::endl;
    }
    if (x == nullptr) {
        *(size_t *) (reg.data.data() + p) = INVALID_PTR;
        if (SERDES_DEBUG) std::cout << "     => nullptr" << std::endl;
        return;
    }
    auto it = reg.pointer_map.find((void *) x);
    if (it != reg.pointer_map.end()) {
        *(size_t *) (reg.data.data() + p) = it->second;
        if (SERDES_DEBUG) std::cout << "     => " << it->second << " (looked up)" << std::endl;
        return;
    }
    size_t b = ::align<U>(reg.data.size());
    size_t start = b;
    *(size_t *) (reg.data.data() + p) = b;
    b += serdes<U>::size;
    reg.reserve(b);
    reg.pointer_map[(void *) x] = start;
    if (SERDES_DEBUG) {
        std::cout << "     -> " << start << std::endl;
    }
    serdes<U>::ser(*x, start, reg);
}

template<class U>
void serdes<const U *>::des(const U *&x, const uint8_t *p, des_reg &reg) {
    p = ::align<size_t>(p);
    if (SERDES_DEBUG) {
        std::cout << "-- deserializing pointer to " << Demangle<U>{} << std::endl;
        std::cout << "     at location " << (p - reg.data) << std::endl;
    }
    size_t start = *(size_t *) p;
    if (start == INVALID_PTR) {
        x = nullptr;
        if (SERDES_DEBUG) std::cout << "     => nullptr" << std::endl;
        return;
    }
    auto it = reg.pointer_map.find(start);
    if (it != reg.pointer_map.end()) {
        x = (const U *) it->second;
        if (SERDES_DEBUG) std::cout << "     => " << start << " (looked up)" << std::endl;
        return;
    }
    x = (U *) operator new(sizeof(U));
    reg.pointer_map[start] = (void *) x;
    if (SERDES_DEBUG) {
        std::cout << "     -> " << start << std::endl;
    }
    serdes<U>::des(*const_cast<U *>(x), reg.data + start, reg);
}

void serialize(const Processor &p, const char *fn) {
    ser_reg reg;
    reg.data.reserve(4096);
    reg.reserve(serdes<Processor>::size);
    size_t global_begin = reg.data.size();
    reg.reserve(global_begin + serdes<TechnologyParameter>::size);
    serdes<Processor>::ser(p, (size_t) 0, reg);
    serdes<TechnologyParameter>::ser(g_tp, global_begin, reg);
    fstream file{fn, std::ios::out | std::ios::binary};
    file.write((const char *) reg.data.data(), reg.data.size());
    file.close();
}

Processor *do_des(uint8_t *buf) {
    des_reg reg;
    reg.data = buf;
    auto ret = (Processor *) operator new(sizeof(Processor));
    serdes<Processor>::des(*ret, buf, reg);
    serdes<TechnologyParameter>::des(g_tp, buf + serdes<Processor>::size, reg);
    return ret;
}

#ifdef _WIN32
void win32_perror(const char *s) {
    DWORD dwError = GetLastError();
    LPVOID lpMsgBuf;
    FormatMessageA(
        FORMAT_MESSAGE_ALLOCATE_BUFFER
        | FORMAT_MESSAGE_FROM_SYSTEM
        | FORMAT_MESSAGE_IGNORE_INSERTS, // dwFlags
        NULL, // lpSource
        dwError, // dwMessageId
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // dwLanguageId
        (LPSTR) &lpMsgBuf, // lpBuffer
        0, NULL); // nSize, Arguments
    fprintf(stderr, "%s: %s\n", s, lpMsgBuf);
    LocalFree(lpMsgBuf);
}
#endif

Processor *deserialize(const char *fn) {
#ifdef _WIN32
    HANDLE hFile, hMap;
    LPVOID lpBasePtr;
    LARGE_INTEGER liFileSize;
    hFile = CreateFileA(
        fn,
        GENERIC_READ, // dwDesiredAccess
        0, // dwShareMode
        NULL, // lpSecurityAttributes
        OPEN_EXISTING, // dwCreationDisposition
        FILE_ATTRIBUTE_NORMAL, // dwFlagsAndAttributes
        0); // hTemplateFile
    if (hFile == INVALID_HANDLE_VALUE) {
        win32_perror("deserialize|CreateFileA");
        return nullptr;
    }
    if (!GetFileSizeEx(hFile, &liFileSize)) {
        win32_perror("deserialize|GetFileSizeEx");
        CloseHandle(hFile);
        return nullptr;
    }
    if (liFileSize.QuadPart == 0) {
        fprintf(stderr, "deserialization error: file is empty\n");
        CloseHandle(hFile);
        return nullptr;
    }
    hMap = CreateFileMappingA(
        hFile,
        NULL, // lpFileMappingAttributes
        PAGE_READONLY, // flProtect
        0, 0, // dwMaximumSizeHigh/Low
        NULL); //lpName
    if (hMap == NULL) {
        win32_perror("deserialize|CreateFileMappingA");
        CloseHandle(hFile);
        return nullptr;
    }
    lpBasePtr = MapViewOfFile(
        hMap,
        FILE_MAP_READ, // dwDesiredAccess
        0, 0, // dwFileOffsetHigh/Low
        0); // dwNumberOfBytesToMap
    if (lpBasePtr == NULL) {
        win32_perror("deserialize|MapViewOfFile");
        CloseHandle(hMap);
        CloseHandle(hFile);
        return nullptr;
    }
    Processor *ret = do_des((uint8_t *) lpBasePtr);
    CloseHandle(hMap);
    CloseHandle(hFile);
    return ret;
#elif defined(__unix__)
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
    Processor *ret = do_des(buf);
    munmap(buf, fsize);
    close(fd);
    return ret;
#endif
}

// template<size_t N>
// struct SS {
//     template<bool B>
//     struct SB {
//         static_assert(B, "printed value above");
//     };
// };
//
// namespace {
//     SS<serdes<Processor>::size>::SB<false> dummy() {}
// }
