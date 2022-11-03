#include "Game.h"
#include "Console.h"

using Orion::findPattern;
using Orion::relativeToAbsolute;

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