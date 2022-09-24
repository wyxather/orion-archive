#include "Game.h"
#include "Console.h"

Game::Game() noexcept {}

Game::~Game() noexcept {}

auto Game::hook() noexcept -> void {}

auto Game::unhook() noexcept -> void {}

auto Game::draw() noexcept -> void {}

auto Game::invalidate() noexcept -> void {}