#pragma once

class Game
{
public:
	Game() noexcept;
	~Game() noexcept;

	auto hook() noexcept -> void;
	auto unhook() noexcept -> void;

	auto draw() noexcept -> void;
	auto invalidate() noexcept -> void;
};

inline std::optional<Game> game;