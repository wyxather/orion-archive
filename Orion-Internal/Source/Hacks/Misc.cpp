#include "Misc.h"
#include "Module/Config.h"
#include "SDK/Class/LocalPlayer.h"

using Orion::String;

namespace
{
	[[nodiscard]] constexpr auto isActiveWeapon(SDK::AWeapon& weapon) noexcept
	{
		const auto localPlayer = LocalPlayer::Controller::Character::Get();
		if (!localPlayer)
			return false;

		for (auto weaponIndex = 0; weaponIndex < localPlayer->ActiveWeapons.WeaponSlots.Num(); ++weaponIndex) {
			const auto& activeWeapon = localPlayer->ActiveWeapons.WeaponSlots[weaponIndex];
			if (activeWeapon.PendingAttachedWeapon)
				continue;

			if (activeWeapon.AttachedWeapon == &weapon)
				return true;
		}

		return false;
	}
}

auto Misc::fireRate_begin(SDK::AOakWeapon& weapon) noexcept -> void
{
	const auto& cfg = config->getData().main.fire_rate;
	if (!cfg.enable)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->FireRate.Value = cfg.value;
}

auto Misc::fireRate_end(SDK::AOakWeapon& weapon) noexcept -> void
{
	if (!config->getData().main.fire_rate.enable)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->FireRate.Value = fireComponent->FireRate.BaseValue;
}

auto Misc::spread_begin(SDK::AOakWeapon& weapon) noexcept -> void
{
	const auto& cfg = config->getData().main.spread;
	if (!cfg.enable)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->Spread.Value = cfg.value;
}

auto Misc::spread_end(SDK::AOakWeapon& weapon) noexcept -> void
{
	const auto& cfg = config->getData().main.spread;
	if (!cfg.enable)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->Spread.Value = fireComponent->Spread.BaseValue;
}

auto Misc::accuracy_begin(SDK::AOakWeapon& weapon) noexcept -> void
{
	const auto& cfg = config->getData().main.accuracy;
	if (!cfg.enable)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->AccuracyImpulse.Value = cfg.value;
}

auto Misc::accuracy_end(SDK::AOakWeapon& weapon) noexcept -> void
{
	const auto& cfg = config->getData().main.accuracy;
	if (!cfg.enable)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->AccuracyImpulse.Value = fireComponent->AccuracyImpulse.BaseValue;
}

auto Misc::damage_begin(SDK::AOakWeapon& weapon) noexcept -> void
{
	const auto& cfg = config->getData().main.damage;
	if (!cfg.enable)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->Damage.Value = cfg.value;
}

auto Misc::damage_end(SDK::AOakWeapon& weapon) noexcept -> void
{
	const auto& cfg = config->getData().main.damage;
	if (!cfg.enable)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->Damage.Value = fireComponent->Damage.BaseValue;
}

auto Misc::noAmmoCost_begin(SDK::AOakWeapon& weapon) noexcept -> void
{
	if (!config->getData().main.exploits.no_ammo_cost)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->ShotAmmoCost.Value = 0;
}

auto Misc::noAmmoCost_end(SDK::AOakWeapon& weapon) noexcept -> void
{
	if (!config->getData().main.exploits.no_ammo_cost)
		return;

	if (!isActiveWeapon(weapon))
		return;

	const auto fireComponent = weapon.CurrentFireComponent;
	if (!fireComponent)
		return;

	fireComponent->ShotAmmoCost.Value = fireComponent->ShotAmmoCost.BaseValue;
}

auto Misc::noRecoil(SDK::ABPChar_Player_C& localPlayer) noexcept -> void
{
	if (!config->getData().main.exploits.no_recoil)
		return;

	static const auto key = []() noexcept {
		String<"LeftMouseButton"> name;
		return SDK::FKey{ name.get() };
	}();

	const auto controller = SDK::SafeCast<SDK::AOakPlayerController>(localPlayer.Controller);
	if (!controller || !controller->IsInputKeyDown(key) || !controller->RecoilControlComponent)
		return;

	const auto recoilControlComponent = controller->RecoilControlComponent;
	recoilControlComponent->CurrentRotation = recoilControlComponent->TargetRotation = {};
}

auto Misc::noRecoil(SDK::AOakWeapon* weapon, SDK::URecoilControlComponent& recoilControlComponent) noexcept -> void
{
	if (!config->getData().main.exploits.no_recoil)
		return;

	if (!weapon || !isActiveWeapon(*weapon))
		return;

	recoilControlComponent.CurrentRotation = recoilControlComponent.TargetRotation = {};
}

auto Misc::godMode(SDK::ABPChar_Player_C& localPlayer) noexcept -> void
{
	const auto damageComponent = SDK::SafeCast<SDK::UOakDamageComponent>(localPlayer.DamageComponent);
	if (!damageComponent)
		return;

	damageComponent->SetGodMode(config->getData().main.exploits.god_mode);
}

auto Misc::noSway_begin(SDK::UWeaponSwayComponent& sway) noexcept -> void
{
	if (!config->getData().main.exploits.no_sway)
		return;

	if (!isActiveWeapon(*sway.WeaponPrivate))
		return;

	sway.Scale.Value = 0.f;
	sway.ZoomScale.Value = 0.f;
	sway.AccuracyScale.Value = 0.f;
	sway.ZoomAccuracyScale.Value = 0.f;
}

auto Misc::noSway_end(SDK::UWeaponSwayComponent& sway) noexcept -> void
{
	if (!config->getData().main.exploits.no_sway)
		return;

	if (!isActiveWeapon(*sway.WeaponPrivate))
		return;
	
	sway.Scale.Value = sway.Scale.BaseValue;
	sway.ZoomScale.Value = sway.ZoomScale.BaseValue;
	sway.AccuracyScale.Value = sway.AccuracyScale.BaseValue;
	sway.ZoomAccuracyScale.Value = sway.ZoomAccuracyScale.BaseValue;
}

auto Misc::noHeat(SDK::UWeaponHeatComponent& heat) noexcept -> void
{
	if (!config->getData().main.exploits.no_heat)
		return;

	if (!isActiveWeapon(*heat.WeaponPrivate))
		return;

	heat.Heat = {};
}