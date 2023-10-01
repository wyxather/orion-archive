#pragma once

class UserCmd;

namespace Misc
{
	auto aspectRatio() noexcept -> float;
	auto fixMovement(UserCmd& cmd, float yaw) noexcept -> void;
	auto bunnyHop(UserCmd& cmd) noexcept -> void;
}