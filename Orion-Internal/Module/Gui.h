#pragma once

struct ImFont;

namespace Orion
{
	class Application;

	namespace Module
	{
		class Gui
		{
			const Application& m_app;

		public:
			struct Fonts {
				ImFont* arialbd_15 = {};
				ImFont* ariblk_37 = {};
				ImFont* navbar_15 = {};
				ImFont* profile_15 = {};
			};

			Gui(const Application& app) noexcept;
			~Gui() noexcept;

			Gui(Gui&&) = delete;
			Gui(const Gui&) = delete;
			Gui& operator=(Gui&&) = delete;
			Gui& operator=(const Gui&) = delete;

			void draw() const noexcept;
			void invalidate() noexcept;
			void toggle() noexcept;

			[[nodiscard]] constexpr auto isOpen() const noexcept { return m_open; }
			[[nodiscard]] constexpr auto&& getFonts() const noexcept { return m_fonts; }

		private:
			bool m_open = {};
			Fonts m_fonts;
		};
	}
}