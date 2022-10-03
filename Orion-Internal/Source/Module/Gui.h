#pragma once


class Gui
{
public:
	struct PostProcess
	{
		constexpr PostProcess() noexcept = default;

		virtual ~PostProcess() noexcept = default;
		virtual void draw() noexcept = 0;
		virtual void reset() noexcept = 0;
	};

	explicit Gui() noexcept;

	Gui(Gui&&) = delete;
	Gui(const Gui&) = delete;
	Gui& operator=(Gui&&) = delete;
	Gui& operator=(const Gui&) = delete;

	auto draw() noexcept -> void;
	auto invalidate() noexcept -> void;
	auto toggle() noexcept -> void;

	[[nodiscard]] constexpr auto isOpen() const noexcept { return m_open; }
	[[nodiscard]] constexpr auto&& getFonts() const noexcept { return m_fonts; }
	[[nodiscard]] constexpr auto&& getTabs() noexcept { return m_tabs; }
	[[nodiscard]] constexpr auto&& getLastActiveTab() noexcept { return m_lastActiveTab; }
	[[nodiscard]] constexpr auto&& getLastClickedTab() noexcept { return m_lastClickedTab; }
	[[nodiscard]] constexpr auto&& getLastActiveGroup() noexcept { return m_lastActiveGroup; }
	[[nodiscard]] constexpr auto getPostProcess() const noexcept { return m_postProcess.get(); }

private:
	bool m_open = {};
	float m_alpha = {};
	float m_popupAlpha = {};
	float m_colorReference[4] = {};

	struct Fonts {
		ImFont* defaultFont = {};
		ImFont* profile_15 = {};
		ImFont* navbarFont = {};
		ImFont* watermarkFont = {};
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
		Orion::HashTable<GroupData> m_groups;
	};

	Orion::HashTable<TabData> m_tabs;
	TabData* m_lastActiveTab = {};
	TabData* m_lastClickedTab = {};
	TabData::GroupData* m_lastActiveGroup = {};

	std::unique_ptr<PostProcess> m_postProcess;
};

inline std::optional<Gui> gui;