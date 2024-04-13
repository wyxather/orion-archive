#pragma once

#include <cmath>
#include <concepts>
#include <numbers>

namespace orion::utility::math {

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_sine(const T x) noexcept -> T {
        return static_cast<T>(1)
            - std::cos(x * std::numbers::pi_v<T> * static_cast<T>(0.5));
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_sine(const T x) noexcept -> T {
        return std::sin(x * std::numbers::pi_v<T> * static_cast<T>(0.5));
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_sine(const T x) noexcept -> T {
        return -(std::cos(std::numbers::pi_v<T> * x) - static_cast<T>(1))
            * static_cast<T>(0.5);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_quad(const T x) noexcept -> T {
        return x * x;
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_quad(const T x) noexcept -> T {
        return static_cast<T>(1) - (static_cast<T>(1) - x) * (static_cast<T>(1) - x);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_quad(const T x) noexcept -> T {
        if ( x < static_cast<T>(0.5) ) {
            return static_cast<T>(2) * x * x;
        }
        return static_cast<T>(1)
            - std::pow(static_cast<T>(-2) * x + static_cast<T>(2), static_cast<T>(2))
            * static_cast<T>(0.5);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_cubic(const T x) noexcept -> T {
        return x * x * x;
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_cubic(const T x) noexcept -> T {
        return static_cast<T>(1) - std::pow(static_cast<T>(1) - x, static_cast<T>(3));
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_cubic(const T x) noexcept -> T {
        if ( x < static_cast<T>(0.5) ) {
            return static_cast<T>(4) * x * x * x;
        }
        return static_cast<T>(1)
            - std::pow(static_cast<T>(-2) * x + static_cast<T>(2), static_cast<T>(3))
            * static_cast<T>(0.5);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_quart(const T x) noexcept -> T {
        return x * x * x * x;
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_quart(const T x) noexcept -> T {
        return static_cast<T>(1) - std::pow(static_cast<T>(1) - x, static_cast<T>(4));
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_quart(const T x) noexcept -> T {
        if ( x < static_cast<T>(0.5) ) {
            return static_cast<T>(8) * x * x * x * x;
        }
        return static_cast<T>(1)
            - std::pow(static_cast<T>(-2) * x + static_cast<T>(2), static_cast<T>(4))
            * static_cast<T>(0.5);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_quint(const T x) noexcept -> T {
        return x * x * x * x * x;
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_quint(const T x) noexcept -> T {
        return static_cast<T>(1) - std::pow(static_cast<T>(1) - x, static_cast<T>(5));
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_quint(const T x) noexcept -> T {
        if ( x < static_cast<T>(0.5) ) {
            return static_cast<T>(16) * x * x * x * x * x;
        }
        return static_cast<T>(1)
            - std::pow(static_cast<T>(-2) * x + static_cast<T>(2), static_cast<T>(5))
            * static_cast<T>(0.5);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_expo(const T x) noexcept -> T {
        if ( x == static_cast<T>(0) ) {
            return static_cast<T>(0);
        }
        return std::pow(static_cast<T>(2), static_cast<T>(10) * x - static_cast<T>(10));
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_expo(const T x) noexcept -> T {
        if ( x == static_cast<T>(1) ) {
            return static_cast<T>(1);
        }
        return static_cast<T>(1) - std::pow(static_cast<T>(2), static_cast<T>(-10) * x);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_expo(const T x) noexcept -> T {
        if ( x == static_cast<T>(0) ) {
            return static_cast<T>(0);
        }
        if ( x == static_cast<T>(1) ) {
            return static_cast<T>(1);
        }
        if ( x < static_cast<T>(0.5) ) {
            return std::pow(static_cast<T>(2), static_cast<T>(20) * x - static_cast<T>(10))
                * static_cast<T>(0.5);
        }
        return (static_cast<T>(2)
                - std::pow(static_cast<T>(2), static_cast<T>(-20) * x + static_cast<T>(10)))
            * static_cast<T>(0.5);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_circ(const T x) noexcept -> T {
        return static_cast<T>(1)
            - std::sqrt(static_cast<T>(1) - std::pow(x, static_cast<T>(2)));
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_circ(const T x) noexcept -> T {
        return std::sqrt(
            static_cast<T>(1) - std::pow(x - static_cast<T>(1), static_cast<T>(2))
        );
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_circ(const T x) noexcept -> T {
        if ( x < static_cast<T>(0.5) ) {
            return (static_cast<T>(1)
                    - std::sqrt(static_cast<T>(1) - std::pow(static_cast<T>(2) * x, static_cast<T>(2))))
                * static_cast<T>(0.5);
        }
        return (std::sqrt(
                    static_cast<T>(1)
                    - std::pow(static_cast<T>(-2) * x + static_cast<T>(2), static_cast<T>(2))
                )
                + static_cast<T>(1))
            * static_cast<T>(0.5);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_back(const T x) noexcept -> T {
        constexpr auto c1 = static_cast<T>(1.70158);
        constexpr auto c3 = c1 + static_cast<T>(1);
        return c3 * x * x * x - c1 * x * x;
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_back(const T x) noexcept -> T {
        constexpr auto c1 = static_cast<T>(1.70158);
        constexpr auto c3 = c1 + static_cast<T>(1);
        return static_cast<T>(1)
            + c3 * std::pow(x - static_cast<T>(1), static_cast<T>(3))
            + c1 * std::pow(x - static_cast<T>(1), static_cast<T>(2));
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_back(const T x) noexcept -> T {
        constexpr auto c1 = static_cast<T>(1.70158);
        constexpr auto c2 = c1 * static_cast<T>(1.525);
        if ( x < static_cast<T>(0.5) ) {
            return (std::pow(static_cast<T>(2) * x, static_cast<T>(2))
                    * ((c2 + static_cast<T>(1)) * static_cast<T>(2) * x - c2))
                * static_cast<T>(0.5);
        }
        return (std::pow(static_cast<T>(2) * x - static_cast<T>(2), static_cast<T>(2))
                    * ((c2 + static_cast<T>(1)) * (x * static_cast<T>(2) - static_cast<T>(2)) + c2)
                + static_cast<T>(2))
            * static_cast<T>(0.5);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_elastic(const T x) noexcept -> T {
        if ( x == static_cast<T>(0) ) {
            return static_cast<T>(0);
        }
        if ( x == static_cast<T>(1) ) {
            return static_cast<T>(1);
        }
        constexpr auto c4 =
            (static_cast<T>(2) * std::numbers::pi_v<T>) / static_cast<T>(3);
        return -std::pow(static_cast<T>(2), static_cast<T>(10) * x - static_cast<T>(10))
            * std::sin((x * static_cast<T>(10) - static_cast<T>(10.75)) * c4);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_elastic(const T x) noexcept -> T {
        if ( x == static_cast<T>(0) ) {
            return static_cast<T>(0);
        }
        if ( x == static_cast<T>(1) ) {
            return static_cast<T>(1);
        }
        constexpr auto c4 =
            (static_cast<T>(2) * std::numbers::pi_v<T>) / static_cast<T>(3);
        return std::pow(static_cast<T>(2), static_cast<T>(-10) * x)
            * std::sin((x * static_cast<T>(10) - static_cast<T>(0.75)) * c4)
            + static_cast<T>(1);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_elastic(const T x) noexcept -> T {
        if ( x == static_cast<T>(0) ) {
            return static_cast<T>(0);
        }
        if ( x == static_cast<T>(1) ) {
            return static_cast<T>(1);
        }
        constexpr auto c5 =
            (static_cast<T>(2) * std::numbers::pi_v<T>) / static_cast<T>(4.5);
        if ( x < static_cast<T>(0.5) ) {
            return -(std::pow(static_cast<T>(2), static_cast<T>(20) * x - static_cast<T>(10))
                     * std::sin((static_cast<T>(20) * x - static_cast<T>(11.125)) * c5))
                * static_cast<T>(0.5);
        }
        return (std::pow(static_cast<T>(2), static_cast<T>(-20) * x + static_cast<T>(10))
                * std::sin((static_cast<T>(20) * x - static_cast<T>(11.125)) * c5))
            * static_cast<T>(0.5)
            + static_cast<T>(1);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_out_bounce(T x) noexcept -> T {
        constexpr auto n1 = static_cast<T>(7.5625);
        constexpr auto d1 = static_cast<T>(2.75);
        if ( x < static_cast<T>(1) / d1 ) {
            return n1 * x * x;
        }
        if ( x < static_cast<T>(2) / d1 ) {
            return n1 * (x -= static_cast<T>(1.5) / d1) * x + static_cast<T>(0.75);
        }
        if ( x < static_cast<T>(2.5) / d1 ) {
            return n1 * (x -= static_cast<T>(2.25) / d1) * x + static_cast<T>(0.9375);
        }
        return n1 * (x -= static_cast<T>(2.625) / d1) * x + static_cast<T>(0.984375);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_bounce(const T x) noexcept -> T {
        return static_cast<T>(1) - ease_out_bounce<T>(static_cast<T>(1) - x);
    }

    template<std::floating_point T>
    [[nodiscard]] constexpr auto ease_in_out_bounce(const T x) noexcept -> T {
        if ( x < static_cast<T>(0.5) ) {
            return (static_cast<T>(1)
                    - ease_out_bounce<T>(static_cast<T>(1) - static_cast<T>(2) * x))
                * static_cast<T>(0.5);
        }
        return (static_cast<T>(1)
                + ease_out_bounce<T>(static_cast<T>(2) * x - static_cast<T>(1)))
            * static_cast<T>(0.5);
    }

}  // namespace orion::utility::math
