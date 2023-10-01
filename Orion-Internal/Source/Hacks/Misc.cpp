#include "Misc.h"
#include "SDK/Math.h"
#include "SDK/Enum/MoveType.h"
#include "SDK/Class/Entity.h"
#include "SDK/Class/UserCmd.h"
#include "SDK/LocalPlayer.h"
#include "Module/Config.h"

auto Misc::aspectRatio() noexcept -> float
{
	return config->getData().view.misc.aspect_ratio;
}

auto Misc::fixMovement(UserCmd& cmd, float yaw) noexcept -> void
{
	const auto oldYaw = yaw + (yaw < 0.f ? 360.f : 0.f);
	const auto newYaw = cmd.viewangles.y + (cmd.viewangles.y < 0.f ? 360.f : 0.f);
	const auto yawDelta = 360.f - (newYaw < oldYaw ? std::fabsf(newYaw - oldYaw) : 360.f - std::fabsf(newYaw - oldYaw));
	const auto yawDeltaA = math::deg2rad(yawDelta);
	const auto yawDeltaB = math::deg2rad(yawDelta + 90.f);
	const auto forwardmove = cmd.forwardmove;
	const auto sidemove = cmd.sidemove;
	cmd.forwardmove = std::cos(yawDeltaA) * forwardmove + std::cos(yawDeltaB) * sidemove;
	cmd.sidemove = std::sin(yawDeltaA) * forwardmove + std::sin(yawDeltaB) * sidemove;
}

auto Misc::bunnyHop(UserCmd& cmd) noexcept -> void
{
	if (!localPlayer)
		return;

	static auto wasLastTimeOnGround = localPlayer->isOnGround();
	const auto isOnGround = localPlayer->isOnGround();

	if (config->getData().main.movement.auto_jump && !isOnGround && localPlayer->m_MoveType() != MoveType::LADDER && !wasLastTimeOnGround)
		cmd.buttons &= ~UserCmd::IN_JUMP;

	wasLastTimeOnGround = isOnGround;
}