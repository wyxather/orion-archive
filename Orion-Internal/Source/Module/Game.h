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
		std::uintptr_t names;
		std::uintptr_t objects;

		SDK::UOakGameEngine* engine;
		SDK::UOakGameInstance* instance;

	} memory;

	struct
	{
		HookType engine;

	} hooks;
};

inline std::optional<Game> game;