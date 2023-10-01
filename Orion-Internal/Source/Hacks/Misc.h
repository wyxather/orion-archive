#pragma once

namespace Misc
{
	auto fireRate_begin(SDK::AOakWeapon& weapon) noexcept -> void;
	auto fireRate_end(SDK::AOakWeapon& weapon) noexcept -> void;

	auto spread_begin(SDK::AOakWeapon& weapon) noexcept -> void;
	auto spread_end(SDK::AOakWeapon& weapon) noexcept -> void;

	auto accuracy_begin(SDK::AOakWeapon& weapon) noexcept -> void;
	auto accuracy_end(SDK::AOakWeapon& weapon) noexcept -> void;

	auto damage_begin(SDK::AOakWeapon& weapon) noexcept -> void;
	auto damage_end(SDK::AOakWeapon& weapon) noexcept -> void;

	auto noAmmoCost_begin(SDK::AOakWeapon& weapon) noexcept -> void;
	auto noAmmoCost_end(SDK::AOakWeapon& weapon) noexcept -> void;

	auto noRecoil(SDK::ABPChar_Player_C& localPlayer) noexcept -> void;
	auto noRecoil(SDK::AOakWeapon* weapon, SDK::URecoilControlComponent& recoilControlComponent) noexcept -> void;
	
	auto godMode(SDK::ABPChar_Player_C& localPlayer) noexcept -> void;

	auto noSway_begin(SDK::UWeaponSwayComponent& sway) noexcept -> void;
	auto noSway_end(SDK::UWeaponSwayComponent& sway) noexcept -> void;

	auto noHeat(SDK::UWeaponHeatComponent& heat) noexcept -> void;
}