#pragma once

class Game
{
public:
	explicit Game() noexcept;
	~Game() noexcept;

	auto hook() noexcept -> void;
	auto unhook() noexcept -> void;

	auto draw() noexcept -> void;
	auto invalidate() noexcept -> void;
};

inline std::optional<Game> game;