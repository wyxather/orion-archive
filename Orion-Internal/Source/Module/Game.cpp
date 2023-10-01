#include "Game.h"
#include "SDK/Class/Entity.h"
#include "Hacks/Misc.h"
#include "Console.h"

Game::Game() noexcept
{
	memory.damageEntity = Orion::findPattern<decltype(memory.damageEntity), "halo.exe", "damageEntity", "83 EC 08 8B 44 24 0C D9">();
	memory.entityList = *reinterpret_cast<decltype(memory.entityList)*>(Orion::findPattern<std::uintptr_t, "halo.exe", "entityList", "A1 ?? ?? ?? ?? 8B 48 34 C1 E7 02 8B 74 0F 08">() + 1);

    console->log<"[Game::Memory]">();
    console->log<"DamageEntity = %p">(memory.damageEntity);
    console->log<"EntityList = %p">(memory.entityList);
}

Game::~Game() noexcept {}

static auto __cdecl damageEntity(
    std::int32_t a1,
    std::int16_t a2,
    std::int32_t a3,
    std::int32_t a4,
    std::int32_t a5,
    std::int32_t a6,
    std::int32_t a7,
    std::int32_t a8,
    std::int32_t* a9,
    float* a10,
    DWORD* a11,
    float a12,
    bool a13) noexcept -> std::int32_t
{
    const auto v14 = 12 * static_cast<std::uint16_t>(a1);
    const auto entity = *(Entity**)(v14 + *(DWORD*)(*game->memory.entityList + 0x34) + 8);

    if (entity->isLocalPlayer()) {
        Misc::unlimitedShield(*entity);
        if (Misc::unlimitedHealth(*entity))
            return a6;
    }

    return game->hooks.custom.get<0, std::int32_t, Hooks::Function::NONE>(
        a1,
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13
        );
}

void Game::hook() noexcept
{
	hooks.custom.init(1);
	hooks.custom.hookAt(0, memory.damageEntity, &damageEntity);
}

void Game::unhook() noexcept
{
	hooks.custom.restore();
}

auto Game::draw() noexcept -> void {}

auto Game::invalidate() noexcept -> void {}