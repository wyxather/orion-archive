#pragma once

namespace Orion
{
	class Application;

	namespace Module
	{
		class Hooks;

		class Renderer
		{
			const Application& m_app;
			Hooks& m_hooks;

		public:
			enum class Type
			{
				NONE,
				D3D9,
				D3D11
			};

			Renderer(const Application& app, Type type = Type::NONE) noexcept;
			~Renderer() noexcept;

			Renderer(Renderer&&) = delete;
			Renderer(const Renderer&) = delete;
			Renderer& operator=(Renderer&&) = delete;
			Renderer& operator=(const Renderer&) = delete;

			[[nodiscard]] constexpr auto getType() const noexcept { return m_type; }

			void hook() noexcept;
			void unhook() noexcept;

		private:
			Type m_type = {};
			HMODULE m_handle = {};
		};
	}
}