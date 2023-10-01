#pragma once

#include "Hooks.h"

class Game
{
public:
	explicit Game() noexcept;
	~Game() noexcept;

	auto hook() noexcept -> void;
    auto unhook() noexcept -> void;

    auto draw() noexcept -> void;
    auto invalidate() noexcept -> void;

	struct
	{
		std::add_pointer_t<std::int32_t __cdecl(
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
            bool a13)> damageEntity;

        std::uintptr_t* entityList;

	} memory;

    struct
    {
        HookType custom;

    } hooks;
};

inline std::optional<Game> game;