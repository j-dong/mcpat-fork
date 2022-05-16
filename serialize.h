#include <vector>
#include <unordered_map>
#include <cstdint>

class Processor;

template<typename T>
struct ser_type_info {
    static constexpr size_t size = sizeof(T);
    static constexpr size_t align = alignof(T);
    static constexpr bool should_memcpy = true;
};
template<typename T, typename A>
struct ser_type_info<std::vector<T, A>> {
    static constexpr size_t size = 2 * sizeof(uint64_t);
    static constexpr size_t align = alignof(uint64_t);
    static constexpr bool should_memcpy = false;
};

// index in data
struct data_ptr {
    uint64_t v;
    data_ptr() = default;
    inline explicit data_ptr(uint64_t v) : v(v) {}
    inline data_ptr operator+(int64_t o) { return data_ptr(v + o); }
};

class Serializer {
    std::vector<uint8_t> data;
    std::unordered_map<const void *, data_ptr> pointer_map;

    friend class Impl;

    void ser_inner(const Component &x, data_ptr p);
    void ser_inner(const Processor &x, data_ptr p);
    void ser_inner(const Core &x, data_ptr p);
    void ser_inner(const SharedCache &x, data_ptr p);
    void ser_inner(const NoC &x, data_ptr p);
    void ser_inner(const MemoryController &x, data_ptr p);
    void ser_inner(const NIUController &x, data_ptr p);
    void ser_inner(const PCIeController &x, data_ptr p);
    void ser_inner(const FlashController &x, data_ptr p);
    void ser_inner(const InputParameter &x, data_ptr p);
    void ser_inner(const ProcParam &x, data_ptr p);

    // core parts
    void ser_inner(const InstFetchU &x, data_ptr p);
    void ser_inner(const LoadStoreU &x, data_ptr p);
    void ser_inner(const MemMenU &x, data_ptr p);

    template<class T>
    void ser_inner(const std::vector<T> &x, data_ptr p) {
        data_ptr obj_p = prepare_array(x.data(), x.size(),
                                       data_ptr(data.size()));
        for (size_t i = 0; i < x.size(); i++) {
            ser_inner(x[i], obj_p + i * ser_type_info<T>::size);
        }
        *reinterpret_cast<uint64_t *>(data.data() + p.v) = x.size();
        *reinterpret_cast<uint64_t *>(data.data() + p.v
                                      + sizeof(uint64_t)) = obj_p.v;
    }

    template<class T>
    data_ptr prepare_array(const T *x, size_t len, data_ptr p) {
        // align
        size_t alignment = ser_type_info<T>::align;
        p.v = (p.v + alignment - 1) / alignment * alignment;
        size_t end = p.v + ser_type_info<T>::size * len;
        if (end > data.size()) data.resize(end);
        if (ser_type_info<T>::should_memcpy) {
            memcpy(data.data() + p.v, x, sizeof(T) * len);
        }
        return p;
    }

    template<class T>
    data_ptr prepare(const T &x, data_ptr p) {
        return prepare_array(&x, 1, p);
    }

    template<class T>
    data_ptr serat(T &&x, data_ptr p) {
        p = prepare(std::forward<T>(x), p);
        ser_inner(std::forward<T>(x), p);
        return p;
    }

    template<class T>
    data_ptr ser_inner(const T *x, data_ptr p) {
        auto it = pointer_map.find((const void *) x);
        data_ptr obj_p;
        if (it != pointer_map.end()) {
            obj_p = it->second;
        } else {
            obj_p = prepare(*x, data_ptr(data.size()));
            pointer_map[(const void *) x] = obj_p;
            ser_inner(*x, obj_p);
        }
        *reinterpret_cast<uint64_t *>(data.data() + p.v)
            = obj_p.v;
        return p;
    }

public:
    void serialize(Processor *p, const char *fname);
};

class Deserializer {
    uint8_t *data;
    std::unordered_map<data_ptr, void *> pointer_map;

    friend class Impl;

public:
    Processor *deserialize(const char *fname);
};
