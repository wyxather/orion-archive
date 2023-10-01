#pragma once

#include "Class.h"
#include "Module/Game.h"

class LocalPlayer
{
public:
	INCONSTRUCTIBLE(LocalPlayer);

	[[nodiscard]] static constexpr auto Get() noexcept -> SDK::UOakLocalPlayer*
	{
		if (!game->memory.instance || game->memory.instance->LocalPlayers.Num() < 1)
			return nullptr;

		return SDK::SafeCast<SDK::UOakLocalPlayer>(game->memory.instance->LocalPlayers[0]);
	}

	class Controller
	{
	public:
		INCONSTRUCTIBLE(Controller);

		[[nodiscard]] static constexpr auto Get() noexcept
		{
			const auto localPlayer = LocalPlayer::Get();
			return localPlayer ? SDK::SafeCast<SDK::AOakPlayerController>(localPlayer->PlayerController) : nullptr;
		}

		class Character
		{
		public:
			INCONSTRUCTIBLE(Character);

			[[nodiscard]] static constexpr auto Get() noexcept
			{
				const auto controller = Controller::Get();
				return controller ? SDK::SafeCast<SDK::ABPChar_Player_C>(controller->GetAssociatedCharacter()) : nullptr;
			}
		};
	};

	class ViewPort
	{
	public:
		INCONSTRUCTIBLE(ViewPort);

		[[nodiscard]] static constexpr auto Get() noexcept
		{
			const auto localPlayer = LocalPlayer::Get();
			return localPlayer ? SDK::SafeCast<SDK::UOakGameViewportClient>(localPlayer->ViewportClient) : nullptr;
		}

		class World
		{
		public:
			INCONSTRUCTIBLE(World);

			[[nodiscard]] static constexpr auto Get() noexcept
			{
				const auto viewport = ViewPort::Get();
				return viewport ? viewport->World : nullptr;
			}
		};
	};
};