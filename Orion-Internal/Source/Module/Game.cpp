#include "Game.h"
#include "Console.h"

#include "Hacks/Aimbot.h"
#include "Hacks/Misc.h"
#include "Hacks/Visuals.h"

using Orion::findPattern;
using Orion::relativeToAbsolute;
using Orion::String;

Game::Game() noexcept
{
	memory.names = *relativeToAbsolute<decltype(memory.names)*>(findPattern<std::uintptr_t, "Borderlands3.exe", "names", "48 83 EC 28 48 8B 05 ? ? ? ? 48 85 C0 75 ? B9 ? ? ? ? 48 89 5C 24 20 E8">() + 7);
	memory.objects = (relativeToAbsolute<decltype(memory.objects)>(findPattern<std::uintptr_t, "Borderlands3.exe", "objects", "48 8B 0D ? ? ? ? 48 98 4C 8B 04 D1 48 8D 0C 40 49 8D 04 C8 EB">() + 3)) - (sizeof(SDK::FUObjectArray) - sizeof(SDK::FChunkedFixedUObjectArray));

	SDK::InitSDK(memory.names, memory.objects);

	for (const auto object : SDK::UObject::FindObjects<SDK::UOakGameEngine>()) {

		if (!object->GameInstance)
			continue;

		memory.engine = object;
		memory.instance = static_cast<decltype(memory.instance)>(object->GameInstance);
	}
}

Game::~Game() noexcept {}

namespace
{
	auto __fastcall ProcessEvent(SDK::UObject* const object, SDK::UFunction* const function, void* const parms) noexcept -> void
	{
		if (const auto hud = SDK::SafeCast<SDK::AHUD>(object)) {
			if (static const auto fn = []() noexcept { String<"ReceiveDrawHUD"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				if (hud->Canvas) {
					Visuals::esp(*hud, *hud->Canvas);
#if !NDEBUG
					Visuals::debug(*hud->Canvas);
#endif
				}
			}
		}
		else if (const auto player = SDK::SafeCast<SDK::ABPChar_Player_C>(object)) {
			if (static const auto fn = []() noexcept { String<"ReceiveTick"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				Aimbot::run(*player);
				Misc::noRecoil(*player);
				Misc::godMode(*player);
			}
		}
		else if (const auto weapon = SDK::SafeCast<SDK::AOakWeapon>(object)) {
			if (static const auto fn = []() noexcept { String<"OnUseStarted"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				Misc::fireRate_begin(*weapon);
				Misc::spread_begin(*weapon);
				Misc::accuracy_begin(*weapon);
				Misc::damage_begin(*weapon);
				Misc::noAmmoCost_begin(*weapon);
			}
			else if (static const auto fn = []() noexcept { String<"OnUseFinished"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				Misc::fireRate_end(*weapon);
				Misc::spread_end(*weapon);
				Misc::accuracy_end(*weapon);
				Misc::damage_end(*weapon);
				Misc::noAmmoCost_end(*weapon);
			}
		}
		else if (const auto weaponRecoilComponent = SDK::SafeCast<SDK::UWeaponRecoilComponent>(object)) {
			if (static const auto fn = []() noexcept { String<"OnUsed"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				Misc::noRecoil(SDK::SafeCast<SDK::AOakWeapon>(weaponRecoilComponent->WeaponPrivate), *weaponRecoilComponent->CachedControlComponent);
			}
		}
		else if (const auto weaponSwayComponent = SDK::SafeCast<SDK::UWeaponSwayComponent>(object)) {
			if (static const auto fn = []() noexcept { String<"OnAttached"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				Misc::noSway_begin(*weaponSwayComponent);
			}
			else if (static const auto fn = []() noexcept { String<"OnUsed"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				Misc::noSway_begin(*weaponSwayComponent);
			}
			else if (static const auto fn = []() noexcept { String<"OnZoomed"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				Misc::noSway_begin(*weaponSwayComponent);
			}
			else if (static const auto fn = []() noexcept { String<"OnDetached"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				Misc::noSway_end(*weaponSwayComponent);
			}
		}
		else if (const auto weaponHeatComponent = SDK::SafeCast<SDK::UWeaponHeatComponent>(object)) {
			if (static const auto fn = []() noexcept { String<"OnUsed"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				Misc::noHeat(*weaponHeatComponent);
			}
		}
		else  if (const auto weaponFireComponent = SDK::SafeCast<SDK::UWeaponFireComponent>(object)) {
			if (static const auto fn = []() noexcept { String<"GetLockedTarget"> name; return SDK::FName{ name.get() }; }(); function->Name == fn) {
				if (const auto weapon = SDK::SafeCast<SDK::AOakWeapon>(weaponFireComponent->WeaponPrivate)) {
					Misc::fireRate_begin(*weapon);
					Misc::spread_begin(*weapon);
					Misc::accuracy_begin(*weapon);
					Misc::damage_begin(*weapon);
					Misc::noAmmoCost_begin(*weapon);
				}
			}
		}
		return game->hooks.engine.get<65, void, Hooks::Function::FASTCALL>(object, function, parms);
	}
}

auto Game::hook() noexcept -> void
{
	hooks.engine.init(memory.engine);
	hooks.engine.hookAt(65, &ProcessEvent);
}

auto Game::unhook() noexcept -> void
{
	hooks.engine.restore();
}

auto Game::draw() noexcept -> void {}

auto Game::invalidate() noexcept -> void {}

auto Game::getKismetMathLibrary() noexcept -> SDK::UKismetMathLibrary*
{
	static const auto kismetMathLibrary = SDK::UObject::FindObject<SDK::UKismetMathLibrary>();
	return kismetMathLibrary;
}

auto Game::getKismetSystemLibrary() noexcept -> SDK::UKismetSystemLibrary*
{
	static const auto kismetSystemlibrary = SDK::UObject::FindObject<SDK::UKismetSystemLibrary>();
	return kismetSystemlibrary;
}