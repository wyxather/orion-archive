#pragma once

#include "SDK/Math.h"

struct Vector3
{
	constexpr Vector3() noexcept :
		x{ 0 },
		y{ 0 },
		z{ 0 }
	{}

	constexpr Vector3(float x, float y, float z) noexcept :
		x{ x },
		y{ y },
		z{ z }
	{}

	[[nodiscard]] constexpr operator bool() const noexcept
	{
		return x || y || z;
	}

	[[nodiscard]] constexpr bool operator==(const Vector3& o) const noexcept
	{
		return x == o.x && y == o.y && z == o.z;
	}

	[[nodiscard]] constexpr bool operator!=(const Vector3& o) const noexcept
	{
		return x != o.x || y != o.y || z != o.z;
	}

	[[nodiscard]] friend constexpr Vector3 operator+(const Vector3& a, const Vector3& b) noexcept
	{
		return Vector3(
			a.x + b.x,
			a.y + b.y,
			a.z + b.z
		);
	}

	[[nodiscard]] friend constexpr Vector3 operator-(const Vector3& a, const Vector3& b) noexcept
	{
		return Vector3(
			a.x - b.x,
			a.y - b.y,
			a.z - b.z
		);
	}

	[[nodiscard]] friend constexpr Vector3 operator*(const Vector3& a, const Vector3& b) noexcept
	{
		return Vector3(
			a.x * b.x,
			a.y * b.y,
			a.z * b.z
		);
	}

	[[nodiscard]] friend constexpr Vector3 operator/(const Vector3& a, const Vector3& b) noexcept
	{
		return Vector3(
			a.x / b.x,
			a.y / b.y,
			a.z / b.z
		);
	}

	constexpr Vector3& operator+=(const Vector3& o) noexcept
	{
		x += o.x;
		y += o.y;
		z += o.z;
		return *this;
	}

	constexpr Vector3& operator-=(const Vector3& o) noexcept
	{
		x -= o.x;
		y -= o.y;
		z -= o.z;
		return *this;
	}

	constexpr Vector3& operator*=(const Vector3& o) noexcept
	{
		x *= o.x;
		y *= o.y;
		z *= o.z;
		return *this;
	}

	constexpr Vector3& operator/=(const Vector3& o) noexcept
	{
		x /= o.x;
		y /= o.y;
		z /= o.z;
		return *this;
	}

	constexpr Vector3& operator+=(float f) noexcept
	{
		x += f;
		y += f;
		z += f;
		return *this;
	}

	constexpr Vector3& operator-=(float f) noexcept
	{
		x -= f;
		y -= f;
		z -= f;
		return *this;
	}

	constexpr Vector3& operator*=(float f) noexcept
	{
		x *= f;
		y *= f;
		z *= f;
		return *this;
	}

	constexpr Vector3& operator/=(float f) noexcept
	{
		x /= f;
		y /= f;
		z /= f;
		return *this;
	}

	constexpr Vector3 operator+(float f) const noexcept
	{
		return Vector3{ x + f, y + f, z + f };
	}

	constexpr Vector3 operator-(float f) const noexcept
	{
		return Vector3{ x - f, y - f, z - f };
	}

	constexpr Vector3 operator*(float f) const noexcept
	{
		return Vector3{ x * f, y * f, z * f };
	}

	constexpr Vector3 operator/(float f) const noexcept
	{
		return Vector3{ x / f, y / f, z / f };
	}

	constexpr Vector3& normalize() noexcept
	{
		x = std::isfinite(x) ? std::remainder(x, 360.f) : 0;
		y = std::isfinite(y) ? std::remainder(y, 360.f) : 0;
		z = 0;
		return *this;
	}

	constexpr float length() const noexcept
	{
		return std::sqrt(x * x + y * y + z * z);
	}

	constexpr float length2D() const noexcept
	{
		return std::sqrt(x * x + y * y);
	}

	constexpr float squareLength() const noexcept
	{
		return x * x + y * y + z * z;
	}

	constexpr float distTo(const Vector3& o) const noexcept
	{
		return (*this - o).length();
	}

	constexpr float dotProduct(const Vector3& o) const noexcept
	{
		return x * o.x + y * o.y + z * o.z;
	}

	float x, y, z;
};