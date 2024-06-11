#pragma once

#ifdef __clang__

    #include <cassert>
    #include <memory>
    #include <type_traits>
    #include <utility>

template<typename T>
class ManuallyConstructDestruct final {
private:
    class None final {};

    union {
        None none;
        T value;
    };

    #ifndef NDEBUG
    bool has_value = false;
    #endif

public:
    consteval ManuallyConstructDestruct() noexcept {}

    ManuallyConstructDestruct(ManuallyConstructDestruct &&) = delete;

    ManuallyConstructDestruct(const ManuallyConstructDestruct &) = delete;

    constexpr ~ManuallyConstructDestruct() noexcept {
        assert(!has_value);
    }

    ManuallyConstructDestruct &operator=(ManuallyConstructDestruct &&) = delete;

    ManuallyConstructDestruct &operator=(const ManuallyConstructDestruct &) = delete;

    [[nodiscard]] constexpr auto operator->() const noexcept -> const T * {
        assert(has_value);
        return std::addressof(value);
    }

    template<typename... Args>
    constexpr auto init(Args &&...args) noexcept -> void {
        assert(!has_value);
        std::construct_at(std::addressof(value), std::forward<Args>(args)...);
    #ifndef NDEBUG
        has_value = true;
    #endif
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

#else

    #include <array>
    #include <bit>
    #include <cassert>
    #include <cstddef>
    #include <memory>
    #include <utility>

template<typename T>
class ManuallyConstructDestruct final {
private:
    alignas(T) std::array<std::byte, sizeof(T)> bytes;

    #ifndef NDEBUG
    bool has_value = false;
    #endif

public:
    consteval ManuallyConstructDestruct() noexcept : bytes {} {}

    ManuallyConstructDestruct(ManuallyConstructDestruct &&) = delete;

    ManuallyConstructDestruct(const ManuallyConstructDestruct &) = delete;

    constexpr ~ManuallyConstructDestruct() noexcept = default;

    ManuallyConstructDestruct &operator=(ManuallyConstructDestruct &&) = delete;

    ManuallyConstructDestruct &operator=(const ManuallyConstructDestruct &) = delete;

    [[nodiscard]] constexpr auto operator->() const noexcept -> const T * {
        assert(has_value);
        return std::bit_cast<const T *>(bytes.data());
    }

    template<typename... Args>
    constexpr auto init(Args &&...args) noexcept -> void {
        assert(!has_value);
        std::construct_at(std::bit_cast<T *>(bytes.data()), std::forward<Args>(args)...);
    #ifndef NDEBUG
        has_value = true;
    #endif
    }

    constexpr auto destroy() noexcept -> void {
        assert(has_value);
        std::destroy_at(std::bit_cast<T *>(bytes.data()));
    #ifndef NDEBUG
        has_value = false;
    #endif
    }

    [[nodiscard]] constexpr auto as_ref() const noexcept -> const T & {
        assert(has_value);
        return *std::bit_cast<const T *>(bytes.data());
    }

    [[nodiscard]] constexpr auto as_mut() noexcept -> T & {
        assert(has_value);
        return *std::bit_cast<T *>(bytes.data());
    }
};

#endif
