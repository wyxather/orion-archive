#pragma once

class Game
{
public:
	Game() noexcept;
	~Game() noexcept;

	void hook() noexcept;
	void unhook() noexcept;
};

inline std::optional<Game> game;