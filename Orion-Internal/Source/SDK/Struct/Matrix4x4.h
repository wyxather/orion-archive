#pragma once

struct ImVec2;
struct Vector3;

struct Matrix4x4
{
	[[nodiscard]] constexpr auto worldToScreen(const Vector3& worldPosition, ImVec2& screenPosition) const noexcept -> bool;
	[[nodiscard]] constexpr auto worldToScreenPixelAligned(const Vector3& worldPosition, ImVec2& screenPosition) const noexcept -> bool;

private:
	float m[4][4];
};

#include "Vector3.h"

inline constexpr auto Matrix4x4::worldToScreen(const Vector3& worldPosition, ImVec2& screenPosition) const noexcept -> bool
{
	const auto w{
		m[3][0] * worldPosition.x +
		m[3][1] * worldPosition.y +
		m[3][2] * worldPosition.z +
		m[3][3]
	};

	if (w < .001f)
		return false;

	screenPosition = ImGui::GetIO().DisplaySize * .5f;
	screenPosition.x *= 1.f + (m[0][0] * worldPosition.x + m[0][1] * worldPosition.y + m[0][2] * worldPosition.z + m[0][3]) / w;
	screenPosition.y *= 1.f - (m[1][0] * worldPosition.x + m[1][1] * worldPosition.y + m[1][2] * worldPosition.z + m[1][3]) / w;

	return true;
}

inline constexpr auto Matrix4x4::worldToScreenPixelAligned(const Vector3& worldPosition, ImVec2& screenPosition) const noexcept -> bool
{
	if (!worldToScreen(worldPosition, screenPosition))
		return false;

	screenPosition = ImFloor(screenPosition);

	return true;
}