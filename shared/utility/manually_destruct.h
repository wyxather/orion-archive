#pragma once

#ifdef __clang__

    #include <cassert>
    #include <memory>
    #include <type_traits>

template<typename T>
class ManuallyDestruct final {
private:
    union {
        T value;
    };

    #ifndef NDEBUG
    bool has_value = true;
    #endif

public:
    consteval ManuallyDestruct() noexcept : value {} {}

    ManuallyDestruct(ManuallyDestruct &&) = delete;

    ManuallyDestruct(const ManuallyDestruct &) = delete;

    constexpr ~ManuallyDestruct() noexcept {
        assert(!has_value);
    }

    ManuallyDestruct &operator=(ManuallyDestruct &&) = delete;

    ManuallyDestruct &operator=(const ManuallyDestruct &) = delete;

    [[nodiscard]] constexpr auto operator->() const noexcept -> const T * {
        assert(has_value);
        return std::addressof(value);
    }

    constexpr auto destroy() noexcept -> void {
        assert(has_value);
        std::destroy_at(std::addressof(value));
    #ifndef NDEBUG
        has_value = false;
    #endif
    }

    [[nodiscard]] constexpr auto as_ref() const noexcept -> const T & {
        assert(has_value);
        return value;
    }

    [[nodiscard]] constexpr auto as_mut() noexcept -> T & {
        assert(has_value);
        return value;
    }
};

#endif
