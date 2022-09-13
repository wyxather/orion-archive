#pragma once

namespace Orion
{
	class Application;

	namespace Module
	{
		class Hooks;

		class Game
		{
			const Application& m_app;
			Hooks& m_hooks;

		public:
			Game(const Application& app) noexcept;
			~Game() noexcept;

			void hook() noexcept;
			void unhook() noexcept;
		};
	}
}