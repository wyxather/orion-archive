#pragma once

#include <array>
#include <cassert>
#include <cstddef>
#include <type_traits>

namespace orion::utility {

    template<typename T>
    class Option final {
    private:
        alignas(alignof(T)) std::array<std::byte, sizeof(T)> value {};
#ifndef NDEBUG
        bool has_value = false;
#endif

    public:
        consteval Option() noexcept = default;

        Option(Option &&) = delete;
        Option &operator=(Option &&) = delete;

        Option(const Option &) = delete;
        Option &operator=(const Option &) = delete;

        template<typename... Args>
        constexpr auto emplace(Args &&...args) noexcept -> void {
            assert(!has_value);
            new (&value) T(std::forward<Args>(args)...);
#ifndef NDEBUG
            has_value = true;
#endif
        }

        constexpr auto reset() noexcept -> void {
            assert(has_value);
            if constexpr ( !std::is_trivially_destructible_v<T> ) {
                ((T *)(value.data()))->~T();
            }
#ifndef NDEBUG
            has_value = false;
#endif
        }

        [[nodiscard]] constexpr auto operator*() & noexcept -> T & {
            assert(has_value);
            return *(T *)(value.data());
        }

        [[nodiscard]] constexpr auto operator*() const & noexcept -> const T & {
            assert(has_value);
            return *(const T *)(value.data());
        }

        [[nodiscard]] constexpr auto operator->() noexcept -> T * {
            assert(has_value);
            return (T *)(value.data());
        }

        [[nodiscard]] constexpr auto operator->() const noexcept -> const T * {
            assert(has_value);
            return (const T *)(value.data());
        }
    };

}  // namespace orion::utility
