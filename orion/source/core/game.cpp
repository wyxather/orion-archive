#include "source/core/game.h"

using orion::core::Game;

Game::Game() noexcept {}

Game::~Game() noexcept {}

auto Game::hook() noexcept -> void {}

auto Game::unhook() noexcept -> void {}

auto Game::init() noexcept -> void {}

auto Game::draw() noexcept -> void {}

auto Game::validate() noexcept -> void {}

auto Game::invalidate() noexcept -> void {}
