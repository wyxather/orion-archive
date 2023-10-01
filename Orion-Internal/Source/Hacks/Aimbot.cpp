#include "Aimbot.h"
#include "Module/Config.h"
#include "SDK/Class/LocalPlayer.h"

using Orion::String;

namespace
{
	[[nodiscard]] constexpr auto calculateRelativeAngle(const SDK::FVector& source, const SDK::FVector& destination, const SDK::FRotator& viewAngles) noexcept
	{
		return ((destination - source).toAngle() - viewAngles).normalize();
	}
}

auto Aimbot::run(SDK::ABPChar_Player_C& localPlayer) noexcept -> void
{
	const auto& cfg = config->getData().legitbot;
	if (!cfg.enable)
		return;

	const auto localPlayerController = SDK::SafeCast<SDK::AOakPlayerController>(localPlayer.Controller);
	if (!localPlayerController)
		return;

	static const std::pair<std::uint8_t, SDK::FKey> keys[]{
		{ 0, { String<"LeftMouseButton">().get() } },
		{ 1, { String<"RightMouseButton">().get() } }
	};

	{
		auto pressed{ false };

		for (auto&& [index, key] : keys) {
			if (!cfg.aimkey[index] || !localPlayerController->IsInputKeyDown(key))
				continue;

			pressed = true;
			break;
		}

		if (!pressed)
			return;
	}

	const auto world = LocalPlayer::ViewPort::World::Get();
	if (!world)
		return;

	SDK::FVector localPlayerEyeLocation;
	SDK::FRotator localPlayerEyeRotation;
	localPlayerController->GetActorEyesViewPoint(&localPlayerEyeLocation, &localPlayerEyeRotation);

	std::optional<SDK::FRotator> bestRelAngle;
	auto bestFov = cfg.fov;

	for (auto levelIndex = 0; levelIndex < world->Levels.Num(); ++levelIndex) {
		const auto level = world->Levels[levelIndex];
		if (!level)
			continue;

		for (auto entityIndex = 0; entityIndex < level->EntityList.Num(); ++entityIndex) {
			const auto entity = SDK::SafeCast<SDK::AOakCharacter>(level->EntityList[entityIndex]);
			if (!entity || entity == &localPlayer)
				continue;

			const auto targetableComponent = entity->TargetableComponent;
			if (!targetableComponent || targetableComponent->IsFriendly(&localPlayer))
				continue;

			const auto damageComponent = entity->DamageComponent;
			if (!damageComponent || damageComponent->bCurrentlyDead || damageComponent->IsInGodMode())
				continue;

			const auto mesh = entity->Mesh;
			if (!mesh)
				continue;

			static const std::pair<std::uint8_t, SDK::FName> bones[]{
				{ 0, String<"Head">().get() },

				{ 1, String<"Neck1">().get() },
				{ 1, String<"Neck2">().get() },

				{ 2, String<"L_Clav">().get() },			{ 2, String<"R_Clav">().get() },
				{ 2, String<"L_Upperarm">().get() },		{ 2, String<"R_Upperarm">().get() },
				{ 2, String<"L_Upperarm_Twist">().get() },	{ 2, String<"R_Upperarm_Twist">().get() },

				{ 3, String<"L_Forearm">().get() },			{ 3, String<"R_Forearm">().get() },
				{ 3, String<"L_Forearm_Twist">().get() },	{ 3, String<"R_Forearm_Twist">().get() },

				{ 4, String<"L_Hand">().get() },			{ 4, String<"R_Hand">().get() },
				{ 4, String<"L_Middle_Meta">().get() },		{ 4, String<"R_Middle_Meta">().get() },
				{ 4, String<"L_Middle_01">().get() },		{ 4, String<"R_Middle_01">().get() },
				{ 4, String<"L_Middle_02">().get() },		{ 4, String<"R_Middle_02">().get() },
				{ 4, String<"L_Middle_03">().get() },		{ 4, String<"R_Middle_03">().get() },
				{ 4, String<"L_Index_Meta">().get() },		{ 4, String<"R_Index_Meta">().get() },
				{ 4, String<"L_Index_01">().get() },		{ 4, String<"R_Index_01">().get() },
				{ 4, String<"L_Index_02">().get() },		{ 4, String<"R_Index_02">().get() },
				{ 4, String<"L_Index_03">().get() },		{ 4, String<"R_Index_03">().get() },
				{ 4, String<"L_Pinky_Meta">().get() },		{ 4, String<"R_Pinky_Meta">().get() },
				{ 4, String<"L_Pinky_01">().get() },		{ 4, String<"R_Pinky_01">().get() },
				{ 4, String<"L_Pinky_02">().get() },		{ 4, String<"R_Pinky_02">().get() },
				{ 4, String<"L_Pinky_03">().get() },		{ 4, String<"R_Pinky_03">().get() },
				{ 4, String<"L_Thumb_01">().get() },		{ 4, String<"R_Thumb_01">().get() },
				{ 4, String<"L_Thumb_02">().get() },		{ 4, String<"R_Thumb_02">().get() },
				{ 4, String<"L_Thumb_03">().get() },		{ 4, String<"R_Thumb_03">().get() },
				{ 4, String<"L_Ring_Meta">().get() },		{ 4, String<"R_Ring_Meta">().get() },
				{ 4, String<"L_Ring_01">().get() },			{ 4, String<"R_Ring_01">().get() },
				{ 4, String<"L_Ring_02">().get() },			{ 4, String<"R_Ring_02">().get() },
				{ 4, String<"L_Ring_03">().get() },			{ 4, String<"R_Ring_03">().get() },

				{ 5, String<"Spine1">().get() },
				{ 5, String<"Spine2">().get() },
				{ 5, String<"Spine3">().get() },
				{ 5, String<"Spine4">().get() },
				{ 5, String<"SpineEnd">().get() },
				{ 5, String<"Spine_End_Offset">().get() },
				
				{ 6, String<"Hips">().get() },
				{ 6, String<"Root">().get() },
				
				{ 7, String<"L_Thigh">().get() },			{ 7, String<"R_Thigh">().get() },
				{ 7, String<"L_Thigh_Twist">().get() },		{ 7, String<"R_Thigh_Twist">().get() },
				
				{ 8, String<"L_Shin">().get() },			{ 8, String<"R_Shin">().get() },
				
				{ 9, String<"L_Foot">().get() },			{ 9, String<"R_Foot">().get() },
				
				{ 10, String<"L_Toe">().get() },			{ 10, String<"R_Toe">().get() },
			};

			for (auto&& [id, bone] : bones) {
				if (id < sizeof(cfg.hitbox) && !cfg.hitbox[id])
					continue;

				const auto bonePos = mesh->GetSocketLocation(bone);
				const auto relAngle = calculateRelativeAngle(localPlayerEyeLocation, bonePos, localPlayerEyeRotation);
				const auto fov = std::hypot(relAngle.Pitch, relAngle.Yaw);
				if (fov >= bestFov)
					continue;

				if (entity->Controller) {
					if (!entity->Controller->LineOfSightTo(&localPlayer, bonePos, false))
						continue;
				}
				else {
					if (const auto vehicle = entity->GetVehicle(); !vehicle || !vehicle->Controller || !vehicle->Controller->LineOfSightTo(&localPlayer, bonePos, false))
						continue;
				}

				bestFov = fov;
				bestRelAngle.emplace(relAngle);
				break;
			}
		}
	}

	if (!bestRelAngle.has_value())
		return;

	localPlayerController->ClientSetRotation((localPlayerEyeRotation + bestRelAngle.value()).normalize(), true);
}