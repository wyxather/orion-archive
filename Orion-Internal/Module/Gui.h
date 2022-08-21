#pragma once

struct ImFont;
struct ImGuiIO;

namespace Orion
{
	class Application;

	namespace Module
	{
		class Gui
		{
			const Application& m_app;
			ImGuiIO& m_io;

		public:
			Gui(const Application& app) noexcept;
			~Gui() noexcept;

			Gui(Gui&&) = delete;
			Gui(const Gui&) = delete;
			Gui& operator=(Gui&&) = delete;
			Gui& operator=(const Gui&) = delete;

			void draw() noexcept;
			void invalidate() noexcept;
			void toggle() noexcept;

			[[nodiscard]] constexpr auto isOpen() const noexcept { return m_open; }
			[[nodiscard]] constexpr auto&& getFonts() const noexcept { return m_fonts; }
			[[nodiscard]] constexpr auto&& getTabs() noexcept { return m_tabs; }
			[[nodiscard]] constexpr auto&& getLastActiveTab() noexcept { return m_lastActiveTab; }
			[[nodiscard]] constexpr auto&& getLastClickedTab() noexcept { return m_lastClickedTab; }
			[[nodiscard]] constexpr auto&& getLastActiveGroup() noexcept { return m_lastActiveGroup; }

		private:
			bool m_open = {};
			float m_alpha = {};
			float m_popupAlpha = {};
			float m_colorReference[4] = {};

			struct Fonts {
				ImFont* arialbd_15 = {};
				ImFont* profile_15 = {};
				ImFont* navbar_15 = {};
				ImFont* ariblk_37 = {};
			};

			Fonts m_fonts = {};

			struct TabData
			{
				struct GroupData
				{
					std::size_t m_widgetCount = {};
				};
				bool	m_active = {};
				float	m_alpha = {};
				HashTable<GroupData> m_groups;
			};

			HashTable<TabData> m_tabs;
			TabData* m_lastActiveTab = {};
			TabData* m_lastClickedTab = {};
			TabData::GroupData* m_lastActiveGroup = {};
		};
	}
}