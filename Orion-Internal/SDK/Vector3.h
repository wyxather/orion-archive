#pragma once

class Vector3
{
public:
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

	[[nodiscard]] constexpr bool operator==(const Vector3& o) const noexcept
	{
		return x == o.x && y == o.y && z == o.z;
	}

	[[nodiscard]] constexpr bool operator!=(const Vector3& o) const noexcept
	{
		return x != o.x || y != o.y || z != o.z;
	}

	[[nodiscard]] constexpr operator bool() const noexcept
	{
		return x || y || z;
	}

	float x, y, z;
};