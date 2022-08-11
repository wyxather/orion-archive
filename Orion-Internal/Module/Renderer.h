#pragma once

namespace Orion
{
	class Application;

	namespace Module
	{
		class Renderer
		{
			const Application& m_app;

		public:
			enum class Type
			{
				NONE,
				D3D9,
				D3D11
			};

			Renderer(const Application& app) noexcept;
			~Renderer() noexcept;

			Renderer(Renderer&&) = delete;
			Renderer(const Renderer&) = delete;
			Renderer& operator=(Renderer&&) = delete;
			Renderer& operator=(const Renderer&) = delete;

			void hook() const noexcept;
			void unhook() const noexcept;

		private:
			Type m_type = {};
			HMODULE m_handle = {};
		};
	}
}