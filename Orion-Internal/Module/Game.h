#pragma once

namespace Orion
{
	class Application;

	namespace Module
	{
		class Console;
		class Hooks;

		class Game
		{
			const Application& m_app;
			const Console& m_console;
			Hooks& m_hooks;

		public:
			Game(const Application& app) noexcept;
			~Game() noexcept;

			void hook() noexcept;
			void unhook() noexcept;
		};
	}
}