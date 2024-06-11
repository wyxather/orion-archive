#pragma once

#include <cassert>
#include <memory>
#include <utility>

template<typename T>
class ManuallyConstruct final {
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
    constexpr ManuallyConstruct() noexcept : none {} {}

    ManuallyConstruct(ManuallyConstruct &&) = delete;

    ManuallyConstruct(const ManuallyConstruct &) = delete;

    constexpr ~ManuallyConstruct() noexcept {
        assert(has_value);
        std::destroy_at(std::addressof(value));
#ifndef NDEBUG
        has_value = false;
#endif
    }

    ManuallyConstruct &operator=(ManuallyConstruct &&) = delete;

    ManuallyConstruct &operator=(const ManuallyConstruct &) = delete;

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

    [[nodiscard]] constexpr auto as_ref() const noexcept -> const T & {
        assert(has_value);
        return value;
    }

    [[nodiscard]] constexpr auto as_mut() noexcept -> T & {
        assert(has_value);
        return value;
    }
};
