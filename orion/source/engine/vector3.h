#pragma once

namespace orion::engine {

    struct Matrix3x4;

    struct Vector3 final {
        constexpr explicit Vector3() noexcept = default;

        constexpr Vector3(const Vector3&) noexcept = default;
        constexpr Vector3& operator=(const Vector3&) noexcept = default;

        constexpr Vector3(Vector3&&) noexcept = default;
        constexpr Vector3& operator=(Vector3&&) noexcept = default;

        float x = 0.0f;
        float y = 0.0f;
        float z = 0.0f;

        constexpr explicit Vector3(
            float x,
            float y = 0.0f,
            float z = 0.0f
        ) noexcept :
            x(x),
            y(y),
            z(z) {}

        NODISCARD static auto from_angle(const Vector3& angle) noexcept
            -> auto {
            return Vector3 {
                std::cos(utilities::math::deg_to_rad(angle.x))
                    * std::cos(utilities::math::deg_to_rad(angle.y)),
                std::cos(utilities::math::deg_to_rad(angle.x))
                    * std::sin(utilities::math::deg_to_rad(angle.y)),
                -std::sin(utilities::math::deg_to_rad(angle.x))
            };
        }

        NODISCARD friend constexpr auto
        operator+(const Vector3& a, const Vector3& b) noexcept -> auto {
            return Vector3 {a.x + b.x, a.y + b.y, a.z + b.z};
        }

        NODISCARD friend constexpr auto
        operator-(const Vector3& a, const Vector3& b) noexcept -> auto {
            return Vector3 {a.x - b.x, a.y - b.y, a.z - b.z};
        }

        NODISCARD friend constexpr auto
        operator*(const Vector3& a, const Vector3& b) noexcept -> auto {
            return Vector3 {a.x * b.x, a.y * b.y, a.z * b.z};
        }

        NODISCARD friend constexpr auto
        operator/(const Vector3& a, const Vector3& b) noexcept -> auto {
            return Vector3 {a.x / b.x, a.y / b.y, a.z / b.z};
        }

        NODISCARD friend constexpr auto
        operator+(float f, const Vector3& v) noexcept -> auto {
            return Vector3 {f + v.x, f + v.y, f + v.z};
        }

        NODISCARD friend constexpr auto
        operator-(float f, const Vector3& v) noexcept -> auto {
            return Vector3 {f - v.x, f - v.y, f - v.z};
        }

        NODISCARD friend constexpr auto
        operator*(float f, const Vector3& v) noexcept -> auto {
            return Vector3 {f * v.x, f * v.y, f * v.z};
        }

        NODISCARD friend constexpr auto
        operator/(float f, const Vector3& v) noexcept -> auto {
            return Vector3 {f / v.x, f / v.y, f / v.z};
        }

        NODISCARD constexpr explicit operator bool() const noexcept {
            return x != 0.0f || y != 0.0f || z != 0.0f;
        }

        NODISCARD constexpr auto operator==(const Vector3& o) const noexcept
            -> bool = default;

        constexpr auto operator+=(const Vector3& o) noexcept -> auto&& {
            x += o.x;
            y += o.y;
            z += o.z;
            return *this;
        }

        constexpr auto operator-=(const Vector3& o) noexcept -> auto&& {
            x -= o.x;
            y -= o.y;
            z -= o.z;
            return *this;
        }

        constexpr auto operator*=(const Vector3& o) noexcept -> auto&& {
            x *= o.x;
            y *= o.y;
            z *= o.z;
            return *this;
        }

        constexpr auto operator/=(const Vector3& o) noexcept -> auto&& {
            x /= o.x;
            y /= o.y;
            z /= o.z;
            return *this;
        }

        constexpr auto operator+=(float f) noexcept -> auto&& {
            x += f;
            y += f;
            z += f;
            return *this;
        }

        constexpr auto operator-=(float f) noexcept -> auto&& {
            x -= f;
            y -= f;
            z -= f;
            return *this;
        }

        constexpr auto operator*=(float f) noexcept -> auto&& {
            x *= f;
            y *= f;
            z *= f;
            return *this;
        }

        constexpr auto operator/=(float f) noexcept -> auto&& {
            x /= f;
            y /= f;
            z /= f;
            return *this;
        }

        NODISCARD constexpr auto operator+(float f) const noexcept -> auto {
            return Vector3 {x + f, y + f, z + f};
        }

        NODISCARD constexpr auto operator-(float f) const noexcept -> auto {
            return Vector3 {x - f, y - f, z - f};
        }

        NODISCARD constexpr auto operator*(float f) const noexcept -> auto {
            return Vector3 {x * f, y * f, z * f};
        }

        NODISCARD constexpr auto operator/(float f) const noexcept -> auto {
            return Vector3 {x / f, y / f, z / f};
        }

        constexpr auto normalize() noexcept -> auto {
            x = std::isfinite(x) ? std::remainderf(x, 360.0f) : 0.0f;
            y = std::isfinite(y) ? std::remainderf(y, 360.0f) : 0.0f;
            z = 0.0f;
        }

        NODISCARD constexpr auto square_length() const noexcept -> auto {
            return x * x + y * y + z * z;
        }

        NODISCARD constexpr auto dot_product(const Vector3& o) const noexcept
            -> auto {
            return x * o.x + y * o.y + z * o.z;
        }

        NODISCARD auto length() const noexcept -> auto {
            return std::sqrtf(x * x + y * y + z * z);
        }

        NODISCARD auto length_2d() const noexcept -> auto {
            return std::sqrtf(x * x + y * y);
        }

        NODISCARD auto distance_to(const Vector3& o) const noexcept -> auto {
            return (*this - o).length();
        }

        NODISCARD auto transform(const Matrix3x4& m) const noexcept -> Vector3;
    };

}  // namespace orion::engine
