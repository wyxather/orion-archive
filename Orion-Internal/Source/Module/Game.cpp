#include "Game.h"
#include "Console.h"
#include "Hooks.h"
#include "Source/Orion.h"

using Orion::Module::Game;

Game::Game(const Application& app) noexcept :
	m_app{ app },
	m_console{ app.getConsole() },
	m_hooks{ app.getHooks() }
{
	std::uintptr_t getConsoleMode = findPattern<std::uintptr_t, "d3d9.dll", "GetConsoleMode", "48 89 5C 24 18 48 89 7C 24 20 55 48 8D 6C 24 B0">();
	m_console.log<"%08x">(getConsoleMode);
}

Game::~Game() noexcept
{
}

void Game::hook() noexcept
{
}

void Game::unhook() noexcept
{
}