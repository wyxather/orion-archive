#pragma once

namespace Orion
{
	class Application;

	namespace Module
	{
		class Hooks
		{
			const Application& m_app;

		public:
			Hooks(const Application& app) noexcept;
			~Hooks() noexcept;

			Hooks(Hooks&&) = delete;
			Hooks(const Hooks&) = delete;
			Hooks& operator=(Hooks&&) = delete;
			Hooks& operator=(const Hooks&) = delete;
		};
	}
}