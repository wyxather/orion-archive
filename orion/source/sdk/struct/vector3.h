#pragma once

#include "Utils/Math.hpp"

namespace orion {
    struct Matrix3x4;

    struct Vector3 final {
        float x = 0.0f;
        float y = 0.0f;
        float z = 0.0f;

        constexpr Vector3() noexcept = default;

        constexpr explicit Vector3(float x, float y, float z) noexcept :
            x(x),
            y(y),
            z(z) {}

        constexpr Vector3(Vector3&&) noexcept = default;
        constexpr Vector3& operator=(Vector3&&) noexcept = default;

        constexpr Vector3(const Vector3&) noexcept = default;
        constexpr Vector3& operator=(const Vector3&) noexcept = default;

        [[nodiscard]] static auto from_angle(const Vector3& angle) noexcept {
            return Vector3(
                ::std::cos(utils::Math::deg_to_rad(angle.x))
                    * ::std::cos(utils::Math::deg_to_rad(angle.y)),
                ::std::cos(utils::Math::deg_to_rad(angle.x))
                    * ::std::sin(utils::Math::deg_to_rad(angle.y)),
                -::std::sin(utils::Math::deg_to_rad(angle.x))
            );
        }

        [[nodiscard]] friend constexpr auto
        operator+(const Vector3& a, const Vector3& b) noexcept {
            return Vector3(a.x + b.x, a.y + b.y, a.z + b.z);
        }

        [[nodiscard]] friend constexpr auto
        operator-(const Vector3& a, const Vector3& b) noexcept {
            return Vector3(a.x - b.x, a.y - b.y, a.z - b.z);
        }

        [[nodiscard]] friend constexpr auto
        operator*(const Vector3& a, const Vector3& b) noexcept {
            return Vector3(a.x * b.x, a.y * b.y, a.z * b.z);
        }

        [[nodiscard]] friend constexpr auto
        operator/(const Vector3& a, const Vector3& b) noexcept {
            return Vector3(a.x / b.x, a.y / b.y, a.z / b.z);
        }

        [[nodiscard]] friend constexpr auto
        operator+(float f, const Vector3& v) noexcept {
            return Vector3(f + v.x, f + v.y, f + v.z);
        }

        [[nodiscard]] friend constexpr auto
        operator-(float f, const Vector3& v) noexcept {
            return Vector3(f - v.x, f - v.y, f - v.z);
        }

        [[nodiscard]] friend constexpr auto
        operator*(float f, const Vector3& v) noexcept {
            return Vector3(f * v.x, f * v.y, f * v.z);
        }

        [[nodiscard]] friend constexpr auto
        operator/(float f, const Vector3& v) noexcept {
            return Vector3(f / v.x, f / v.y, f / v.z);
        }

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return Vector3::x != 0.0f || Vector3::y != 0.0f
                || Vector3::z != 0.0f;
        }

        [[nodiscard]] constexpr auto operator==(const Vector3& o
        ) const noexcept {
            return Vector3::x == o.x && Vector3::y == o.y && Vector3::z == o.z;
        }

        [[nodiscard]] constexpr auto operator!=(const Vector3& o
        ) const noexcept {
            return Vector3::x != o.x || Vector3::y != o.y || Vector3::z != o.z;
        }

        constexpr auto&& operator+=(const Vector3& o) noexcept {
            Vector3::x += o.x;
            Vector3::y += o.y;
            Vector3::z += o.z;
            return *this;
        }

        constexpr auto&& operator-=(const Vector3& o) noexcept {
            Vector3::x -= o.x;
            Vector3::y -= o.y;
            Vector3::z -= o.z;
            return *this;
        }

        constexpr auto&& operator*=(const Vector3& o) noexcept {
            Vector3::x *= o.x;
            Vector3::y *= o.y;
            Vector3::z *= o.z;
            return *this;
        }

        constexpr auto&& operator/=(const Vector3& o) noexcept {
            Vector3::x /= o.x;
            Vector3::y /= o.y;
            Vector3::z /= o.z;
            return *this;
        }

        constexpr auto&& operator+=(float f) noexcept {
            Vector3::x += f;
            Vector3::y += f;
            Vector3::z += f;
            return *this;
        }

        constexpr auto&& operator-=(float f) noexcept {
            Vector3::x -= f;
            Vector3::y -= f;
            Vector3::z -= f;
            return *this;
        }

        constexpr auto&& operator*=(float f) noexcept {
            Vector3::x *= f;
            Vector3::y *= f;
            Vector3::z *= f;
            return *this;
        }

        constexpr auto&& operator/=(float f) noexcept {
            Vector3::x /= f;
            Vector3::y /= f;
            Vector3::z /= f;
            return *this;
        }

        [[nodiscard]] constexpr auto operator+(float f) const noexcept {
            return Vector3(Vector3::x + f, Vector3::y + f, Vector3::z + f);
        }

        [[nodiscard]] constexpr auto operator-(float f) const noexcept {
            return Vector3(Vector3::x - f, Vector3::y - f, Vector3::z - f);
        }

        [[nodiscard]] constexpr auto operator*(float f) const noexcept {
            return Vector3(Vector3::x * f, Vector3::y * f, Vector3::z * f);
        }

        [[nodiscard]] constexpr auto operator/(float f) const noexcept {
            return Vector3(Vector3::x / f, Vector3::y / f, Vector3::z / f);
        }

        constexpr auto&& normalize() noexcept {
            Vector3::x = ::std::isfinite(Vector3::x)
                ? ::std::remainder(Vector3::x, 360.0f)
                : 0.0f;
            Vector3::y = ::std::isfinite(Vector3::y)
                ? ::std::remainder(Vector3::y, 360.0f)
                : 0.0f;
            Vector3::z = 0.0f;
            return *this;
        }

        [[nodiscard]] constexpr auto square_length() const noexcept {
            return Vector3::x * Vector3::x + Vector3::y * Vector3::y
                + Vector3::z * Vector3::z;
        }

        [[nodiscard]] constexpr auto dot_product(const Vector3& o
        ) const noexcept {
            return Vector3::x * o.x + Vector3::y * o.y + Vector3::z * o.z;
        }

        [[nodiscard]] auto length() const noexcept {
            return ::std::sqrt(
                Vector3::x * Vector3::x + Vector3::y * Vector3::y
                + Vector3::z * Vector3::z
            );
        }

        [[nodiscard]] auto length_2d() const noexcept {
            return ::std::sqrt(
                Vector3::x * Vector3::x + Vector3::y * Vector3::y
            );
        }

        [[nodiscard]] auto dist_to(const Vector3& o) const noexcept {
            return (*this - o).length();
        }

        [[nodiscard]] auto transform(const Matrix3x4& m) const noexcept
            -> Vector3;
    };
}  // namespace orion
