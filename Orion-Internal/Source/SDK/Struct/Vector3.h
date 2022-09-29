#pragma once

struct Matrix3x4;

struct Vector3
{
	constexpr Vector3() noexcept :
		x{ 0 },
		y{ 0 },
		z{ 0 } {}

	constexpr explicit Vector3(float x, float y, float z) noexcept :
		x{ x },
		y{ y },
		z{ z } {}

	[[nodiscard]] constexpr explicit operator bool() const noexcept { return x || y || z; }
	[[nodiscard]] constexpr auto operator==(const Vector3& o) const noexcept { return x == o.x && y == o.y && z == o.z; }
	[[nodiscard]] constexpr auto operator!=(const Vector3& o) const noexcept { return x != o.x || y != o.y || z != o.z; }

	constexpr auto& operator=(const Vector3& o) noexcept
	{
		x = o.x;
		y = o.y;
		z = o.z;
		return *this;
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

	constexpr auto& operator+=(const Vector3& o) noexcept
	{
		x += o.x;
		y += o.y;
		z += o.z;
		return *this;
	}

	constexpr auto& operator-=(const Vector3& o) noexcept
	{
		x -= o.x;
		y -= o.y;
		z -= o.z;
		return *this;
	}

	constexpr auto& operator*=(const Vector3& o) noexcept
	{
		x *= o.x;
		y *= o.y;
		z *= o.z;
		return *this;
	}

	constexpr auto& operator/=(const Vector3& o) noexcept
	{
		x /= o.x;
		y /= o.y;
		z /= o.z;
		return *this;
	}

	constexpr auto& operator+=(float f) noexcept
	{
		x += f;
		y += f;
		z += f;
		return *this;
	}

	constexpr auto& operator-=(float f) noexcept
	{
		x -= f;
		y -= f;
		z -= f;
		return *this;
	}

	constexpr auto& operator*=(float f) noexcept
	{
		x *= f;
		y *= f;
		z *= f;
		return *this;
	}

	constexpr auto& operator/=(float f) noexcept
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

	constexpr auto& normalize() noexcept
	{
		x = std::isfinite(x) ? std::remainder(x, 360.f) : 0;
		y = std::isfinite(y) ? std::remainder(y, 360.f) : 0;
		z = 0;
		return *this;
	}

	[[nodiscard]] auto length() const noexcept { return std::sqrt(x * x + y * y + z * z); }
	[[nodiscard]] auto length2D() const noexcept { return std::sqrt(x * x + y * y); }
	[[nodiscard]] auto distTo(const Vector3& o) const noexcept { return (*this - o).length(); }

	[[nodiscard]] constexpr auto transform(const Matrix3x4& m) const noexcept -> Vector3;
	[[nodiscard]] constexpr auto squareLength() const noexcept { return x * x + y * y + z * z; }
	[[nodiscard]] constexpr auto dotProduct(const Vector3& o) const noexcept { return x * o.x + y * o.y + z * o.z; }

	[[nodiscard]] static auto fromAngle(const Vector3& angle) noexcept -> Vector3;

	float x, y, z;
};

#include "SDK/Math.h"

inline auto Vector3::fromAngle(const Vector3& angle) noexcept -> Vector3
{
	return Vector3{
		std::cos(math::deg2rad(angle.x)) * std::cos(math::deg2rad(angle.y)),
		std::cos(math::deg2rad(angle.x)) * std::sin(math::deg2rad(angle.y)),
		-std::sin(math::deg2rad(angle.x))
	};
}

#include "Matrix3x4.h"

inline constexpr auto Vector3::transform(const Matrix3x4& m) const noexcept -> Vector3
{
	return Vector3{
		dotProduct(Vector3{ m[0][0], m[0][1], m[0][2] }) + m[0][3],
		dotProduct(Vector3{ m[1][0], m[1][1], m[1][2] }) + m[1][3],
		dotProduct(Vector3{ m[2][0], m[2][1], m[2][2] }) + m[2][3]
	};
}