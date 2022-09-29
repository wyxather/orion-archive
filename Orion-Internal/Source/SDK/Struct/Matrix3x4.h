#pragma once

struct Vector3;

struct Matrix3x4
{
	constexpr auto origin() const noexcept -> Vector3;

private:
	float m[3][4];
};

#include "Vector3.h"

constexpr auto Matrix3x4::origin() const noexcept -> Vector3
{
	return Vector3{ m[0][3], m[1][3], m[2][3] };
}