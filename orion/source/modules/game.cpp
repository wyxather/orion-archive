#include "Game.h"

orion::Game::Game() noexcept {}

orion::Game::~Game() noexcept {}

auto orion::Game::hook() noexcept -> void {}

auto orion::Game::unhook() const noexcept -> void {}

auto orion::Game::init() noexcept -> void {}

auto orion::Game::draw() noexcept -> void {}

auto orion::Game::validate() noexcept -> void {}

auto orion::Game::invalidate() noexcept -> void {}
