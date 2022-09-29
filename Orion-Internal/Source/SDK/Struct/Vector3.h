#pragma once

struct Vector3
{
	constexpr Vector3() noexcept :
		x{ 0 },
		y{ 0 },
		z{ 0 } {}

	constexpr Vector3(float x, float y, float z) noexcept :
		x{ x },
		y{ y },
		z{ z } {}

	[[nodiscard]] constexpr operator bool() const noexcept
	{
		return x || y || z;
	}

	constexpr auto operator=(const Vector3& o) noexcept -> Vector3&
	{
		x = o.x;
		y = o.y;
		z = o.z;
		return *this;
	}

	[[nodiscard]] constexpr auto operator==(const Vector3& o) const noexcept
	{
		return x == o.x && y == o.y && z == o.z;
	}

	[[nodiscard]] constexpr auto operator!=(const Vector3& o) const noexcept
	{
		return x != o.x || y != o.y || z != o.z;
	}

	[[nodiscard]] friend constexpr auto operator+(const Vector3& a, const Vector3& b) noexcept
	{
		return Vector3{
			a.x + b.x,
			a.y + b.y,
			a.z + b.z
		};
	}

	[[nodiscard]] friend constexpr auto operator-(const Vector3& a, const Vector3& b) noexcept
	{
		return Vector3{
			a.x - b.x,
			a.y - b.y,
			a.z - b.z
		};
	}

	[[nodiscard]] friend constexpr auto operator*(const Vector3& a, const Vector3& b) noexcept
	{
		return Vector3{
			a.x * b.x,
			a.y * b.y,
			a.z * b.z
		};
	}

	[[nodiscard]] friend constexpr auto operator/(const Vector3& a, const Vector3& b) noexcept
	{
		return Vector3{
			a.x / b.x,
			a.y / b.y,
			a.z / b.z
		};
	}

	constexpr auto operator+=(const Vector3& o) noexcept -> Vector3&
	{
		x += o.x;
		y += o.y;
		z += o.z;
		return *this;
	}

	constexpr auto operator-=(const Vector3& o) noexcept -> Vector3&
	{
		x -= o.x;
		y -= o.y;
		z -= o.z;
		return *this;
	}

	constexpr auto operator*=(const Vector3& o) noexcept -> Vector3&
	{
		x *= o.x;
		y *= o.y;
		z *= o.z;
		return *this;
	}

	constexpr auto operator/=(const Vector3& o) noexcept -> Vector3&
	{
		x /= o.x;
		y /= o.y;
		z /= o.z;
		return *this;
	}

	constexpr auto operator+=(float f) noexcept -> Vector3&
	{
		x += f;
		y += f;
		z += f;
		return *this;
	}

	constexpr auto operator-=(float f) noexcept -> Vector3&
	{
		x -= f;
		y -= f;
		z -= f;
		return *this;
	}

	constexpr auto operator*=(float f) noexcept -> Vector3&
	{
		x *= f;
		y *= f;
		z *= f;
		return *this;
	}

	constexpr auto operator/=(float f) noexcept -> Vector3&
	{
		x /= f;
		y /= f;
		z /= f;
		return *this;
	}

	[[nodiscard]] constexpr auto operator+(float f) const noexcept
	{
		return Vector3{ x + f, y + f, z + f };
	}

	[[nodiscard]] constexpr auto operator-(float f) const noexcept
	{
		return Vector3{ x - f, y - f, z - f };
	}

	[[nodiscard]] constexpr auto operator*(float f) const noexcept
	{
		return Vector3{ x * f, y * f, z * f };
	}

	[[nodiscard]] constexpr auto operator/(float f) const noexcept
	{
		return Vector3{ x / f, y / f, z / f };
	}

	[[nodiscard]] friend constexpr auto operator+(float f, const Vector3& v) noexcept
	{
		return Vector3{ f + v.x, f + v.y, f + v.z };
	}

	[[nodiscard]] friend constexpr auto operator-(float f, const Vector3& v) noexcept
	{
		return Vector3{ f - v.x, f - v.y, f - v.z };
	}

	[[nodiscard]] friend constexpr auto operator*(float f, const Vector3& v) noexcept
	{
		return Vector3{ f * v.x, f * v.y, f * v.z };
	}

	[[nodiscard]] friend constexpr auto operator/(float f, const Vector3& v) noexcept
	{
		return Vector3{ f / v.x, f / v.y, f / v.z };
	}

	constexpr auto normalize() noexcept -> Vector3&
	{
		x = std::isfinite(x) ? std::remainder(x, 360.f) : 0;
		y = std::isfinite(y) ? std::remainder(y, 360.f) : 0;
		z = 0;
		return *this;
	}

	[[nodiscard]] auto length() const noexcept
	{
		return std::sqrt(x * x + y * y + z * z);
	}

	[[nodiscard]] auto length2D() const noexcept
	{
		return std::sqrt(x * x + y * y);
	}

	[[nodiscard]] auto distTo(const Vector3& o) const noexcept
	{
		return (*this - o).length();
	}

	[[nodiscard]] constexpr auto squareLength() const noexcept
	{
		return x * x + y * y + z * z;
	}

	[[nodiscard]] constexpr auto dotProduct(const Vector3& o) const noexcept
	{
		return x * o.x + y * o.y + z * o.z;
	}

	[[nodiscard]] static auto fromAngle(const Vector3& angle) noexcept -> Vector3;

	float x, y, z;
};

#include "SDK/Math.h"

inline auto Vector3::fromAngle(const Vector3& angle) noexcept -> Vector3
{
	return {
		std::cos(math::deg2rad(angle.x)) * std::cos(math::deg2rad(angle.y)),
		std::cos(math::deg2rad(angle.x)) * std::sin(math::deg2rad(angle.y)),
		-std::sin(math::deg2rad(angle.x))
	};
}