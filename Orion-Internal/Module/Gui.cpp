#include "Gui.h"
#include "Orion.h"
#include "Resources/Fonts/arialbd.h"
#include "Resources/Fonts/ariblk.h"
#include "Resources/Fonts/fontawesome.h"
#include "Dependencies/ImGui/imgui_custom.h"

namespace
{
	struct Font
	{
		Font(ImFont* font) noexcept :
			m_font{ font },
			m_scale{ font->Scale }
		{
			ImGui::PushFont(font);
		}

		Font(ImFont* font, float scale) noexcept :
			m_font{ font },
			m_scale{ font->Scale }
		{
			font->Scale = scale;
			ImGui::PushFont(font);
		}

		~Font() noexcept
		{
			m_font->Scale = m_scale;
			ImGui::PopFont();
		}

	private:
		ImFont* m_font = {};
		float m_scale = {};
	};

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

	Orion::HashTable<TabData> g_tabs;
	TabData::GroupData* g_lastActiveGroup;
	TabData* g_lastActiveTab;
	TabData* g_lastClickedTab;

	struct Component
	{
		~Component() noexcept
		{
			ImGui::PopStyleVar(m_styleVarCount);
			ImGui::PopStyleColor(m_styleColorCount);
		}

		[[nodiscard]] constexpr bool Continue() const noexcept
		{
			return m_continue;
		}

		constexpr void Continue(bool value) noexcept
		{
			m_continue = value;
		}

		[[nodiscard]] constexpr operator bool() const noexcept
		{
			return Continue();
		}

		void Begin(const char* name, bool* p_open = nullptr, ImGuiWindowFlags flags = ImGuiWindowFlags_::ImGuiWindowFlags_None) noexcept
		{
			m_continue = ImGui::Begin(name, p_open, flags);
		}

		static void End() noexcept
		{
			return ImGui::End();
		}

		void BeginChild(ImGuiID id, const ImVec2& size = ImVec2(0, 0), bool border = false, ImGuiWindowFlags flags = ImGuiWindowFlags_::ImGuiWindowFlags_None) noexcept
		{
			m_continue = ImGui::BeginChild(id, size, border, flags);
		}

		static void EndChild() noexcept
		{
			return ImGui::EndChild();
		}

		void BeginTable(const char* str_id, int column) noexcept
		{
			m_continue = ImGui::BeginTable(str_id, column);
		}

		void EndTable() noexcept
		{
			if (m_continue)
				ImGui::EndTable();
		}

		static void TableNextRow() noexcept
		{
			return ImGui::TableNextRow();
		}

		void PushStyleVar(ImGuiStyleVar idx, float val) noexcept
		{
			ImGui::PushStyleVar(idx, val);
			m_styleVarCount++;
		}

		void PushStyleVar(ImGuiStyleVar idx, const ImVec2& val) noexcept
		{
			ImGui::PushStyleVar(idx, val);
			m_styleVarCount++;
		}

		void PushStyleColor(ImGuiCol idx, const ImVec4& col) noexcept
		{
			ImGui::PushStyleColor(idx, col);
			m_styleColorCount++;
		}

		static void SetNextWindowSize(const ImVec2& size, ImGuiCond cond = ImGuiCond_::ImGuiCond_None) noexcept
		{
			return ImGui::SetNextWindowSize(size, cond);
		}

		static void Background(const ImVec2& p_min, const ImVec2& p_max, ImU32 col, float rounding = 0.0F, ImDrawFlags flags = ImDrawFlags_::ImDrawFlags_None) noexcept
		{
			return ImGui::GetWindowDrawList()->AddRectFilled(p_min, p_max, col, rounding, flags);
		}

		static void Background(ImU32 col, float rounding = 0.0F, ImDrawFlags flags = ImDrawFlags_::ImDrawFlags_None) noexcept
		{
			const auto pos{ ImGui::GetWindowPos() + ImGui::GetCursorPos() };
			return ImGui::GetWindowDrawList()->AddRectFilled(pos, pos + ImGui::GetContentRegionAvail(), col, rounding, flags);
		}

		static void SameLine(float offset_from_start_x = 0.0F, float spacing = -1.0F) noexcept
		{
			return ImGui::SameLine(offset_from_start_x, spacing);
		}

	private:
		bool m_continue = {};
		int m_styleVarCount = {};
		int m_styleColorCount = {};
	};

	struct Menu : Component
	{
		struct Header;
		struct Body;

		Menu() noexcept :
			m_font{ Orion::instance->getGui().getFonts().arialbd_15 }
		{
			Orion::String<"##Menu"> id;

			Component::SetNextWindowSize(ImVec2{ 800, 656 }, ImGuiCond_Once);

			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{});
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 2, 0 });
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowBorderSize, 0);
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowRounding, 2);

			Component::Begin(id.get(), nullptr,
				ImGuiWindowFlags_::ImGuiWindowFlags_NoSavedSettings |
				ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground |
				ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar |
				ImGuiWindowFlags_::ImGuiWindowFlags_NoTitleBar |
				ImGuiWindowFlags_::ImGuiWindowFlags_NoResize
			);
		}

		~Menu() noexcept
		{
			Component::End();
		}

	private:
		Font m_font;
	};

	struct Menu::Header : Component
	{
		struct Nav;

		Header() noexcept
		{
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 0, 2 });
			Component::BeginChild(Orion::Fnv<"##Menu::Header">::value, ImVec2{ 191, 0 });
		}

		~Header() noexcept
		{
			Component::EndChild();
		}
	};

	struct Menu::Header::Nav : Component
	{
		struct Items;

		Nav() noexcept
		{
			const auto pos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
			const auto size = ImGui::GetContentRegionAvail();

			Component::BeginChild(Orion::Fnv<"##Menu::Header::Nav">::value, size - ImVec2{ 0, 62 });
			if (!Component::Continue())
				return;

			Component::Background(pos, pos + size, IM_COL32(16, 16, 15, 230), 2,
				ImDrawFlags_::ImDrawFlags_RoundCornersTopLeft);

			Nav::Watermark();
		}

		~Nav() noexcept
		{
			Component::EndChild();
			Nav::Profile();
		}

	private:
		static void Watermark() noexcept
		{
			if (ImGui::BeginChild(Orion::Fnv<"##Menu::Header::Nav::Watermark">::value, ImVec2{ 0, 62 })) {

				Orion::String<"ORION"> label;

				const Font font{ Orion::instance->getGui().getFonts().ariblk_37 };
				const auto size = ImGui::GetContentRegionAvail();
				const auto textSize = ImGui::CalcTextSize(label.get());
				const ImVec2 pos{ (size.x - textSize.x) * .5f, (size.y - textSize.y) * .5f + 5 };

				ImGui::SetCursorPos(pos);
				ImGui::TextColored(ImVec4{ .2549019f, .729411f, .8509803f, 1.f }, label.get());
				ImGui::SetCursorPos(ImVec2{ pos.x + 1, pos.y });
				ImGui::TextColored(ImVec4{ .9411764f, .9411764f, .9411764f, 1.f }, label.get());
			}
			ImGui::EndChild();
		}

		static void Profile() noexcept
		{
			auto&& drawList = *ImGui::GetWindowDrawList();
			const auto pos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
			const auto size = ImGui::GetContentRegionAvail();

			drawList.AddRectFilled(pos - ImVec2{ 0, 2 }, pos + ImVec2{ size.x, 0 }, IM_COL32(20, 20, 19, 230));

			if (ImGui::BeginChild(Orion::Fnv<"##Menu::Header::Nav::Profile">::value)) {

				drawList.AddRectFilled(pos, pos + size, IM_COL32(16, 16, 15, 230), 2,
					ImDrawFlags_::ImDrawFlags_RoundCornersBottomLeft);

				auto&& style = ImGui::GetStyle();
				auto&& fonts = Orion::instance->getGui().getFonts();
				const auto contentRegionAvail = ImGui::GetContentRegionAvail();
				const auto profilePicturePosition = pos + ImVec2{ 31, contentRegionAvail.y * .5f };

				drawList.AddCircleFilled(profilePicturePosition, 19, IM_COL32(8, 8, 8, style.Alpha * 255));
				{
					const auto profileIcon{ FontAwesome::get<FontAwesome::Type::user_secret>() };
					const Font font{ fonts.profile_15 };
					drawList.AddText(profilePicturePosition - ImGui::CalcTextSize(profileIcon) * .5f, IM_COL32(240, 240, 240, style.Alpha * 255), profileIcon);
				}
				{
					Orion::String<"Wyxather"> author;
					Orion::String<"Build:" __DATE__> build;
					const Font font{ fonts.arialbd_15, (14.f / 15.f) };
					const ImVec2 textPos{ profilePicturePosition.x + 29, pos.y + 31 };
					drawList.AddText(ImVec2{ profilePicturePosition.x + 29, pos.y + 12 }, IM_COL32(240, 240, 240, style.Alpha * 255), author.get());
					drawList.AddText(textPos, IM_COL32(64, 69, 75, style.Alpha * 255), build.get(), &build.get()[6]);
					drawList.AddText(textPos + ImVec2{ ImGui::CalcTextSize(build.get(), &build.get()[6], false, 0).x + 5, 0 }, IM_COL32(0, 149, 235, style.Alpha * 255), &build.get()[6]);
				}
			}
			ImGui::EndChild();
		}
	};

	struct Menu::Header::Nav::Items : Component
	{
		Items() noexcept :
			m_space{ false },
			m_fonts{ &Orion::instance->getGui().getFonts() }
		{
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 5 });
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{ 10, 8 });
			Component::BeginChild(Orion::Fnv<"##Menu::Header::Nav::Items">::value, ImVec2{}, true,
				ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground |
				ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar);
		}

		~Items() noexcept
		{
			Component::EndChild();
		}

		template <stb::compiletime_string_wrapper str>
		constexpr void Text() noexcept
		{
			Orion::String<str> text;
			const Font font{ m_fonts->arialbd_15, (13.f / 15.f) };
			if (m_space)
				ImGui::Dummy(ImVec2{ 0, 10 });
			else m_space = true;
			ImGui::Dummy(ImVec2{ 5, 0 });
			ImGui::SameLine();
			ImGui::TextColored(ImVec4{ .2509803f, .2705882f, .2941176f, 1.f }, text.get());
			ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{});
			ImGui::Dummy(ImVec2{ 0, 1 });
			ImGui::PopStyleVar();
		}

		template <stb::compiletime_string_wrapper str, FontAwesome::Type icon>
		constexpr void Button() noexcept
		{
			Orion::String<str> text;
			std::string preview{ text.get() };
			preview.insert(0, FontAwesome::get<icon>());

			const Font font{ m_fonts->navbar_15 };
			auto&& style = ImGui::GetStyle();

			auto&& curTab = g_tabs[Orion::Fnv<str>::value];
			auto curTabAlpha = static_cast<int>(style.Alpha * (!curTab.m_active ? std::sqrtf(curTab.m_alpha) : std::powf(curTab.m_alpha, 2)) * 255);
			
			ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 5);
			ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ButtonTextAlign, ImVec2{ 0, .5f });
			ImGui::PushStyleColor(ImGuiCol_::ImGuiCol_Button, ImVec4{ ImColor{ 63, 63, 60, curTabAlpha } });
			ImGui::PushStyleColor(ImGuiCol_::ImGuiCol_ButtonActive, ImVec4{ ImColor{ 63, 63, 60, curTabAlpha } });
			ImGui::PushStyleColor(ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ ImColor{ 63, 63, 60, curTabAlpha } });

			if (ImGui::ButtonIcon(preview.c_str(), ImVec2{ 171, 30 }, IM_COL32(0, 149, 235, style.Alpha * 255))) {
				if (!g_lastActiveTab) {
					g_lastActiveTab = &curTab;
					curTab.m_active = true;
				}
				else if (g_lastActiveTab != &curTab && !g_lastClickedTab) {
					g_lastActiveTab->m_active = false;
					g_lastClickedTab = &curTab;
				}
			}

			ImGui::PopStyleColor(3);
			ImGui::PopStyleVar(2);

			if (curTab.m_active)
				curTab.m_alpha = std::clamp(curTab.m_alpha + ImGui::GetIO().DeltaTime * 2, 0.f, 1.f);
			else
				curTab.m_alpha = std::clamp(curTab.m_alpha - ImGui::GetIO().DeltaTime * 2, 0.f, 1.f);

			if (g_lastClickedTab) {

				if (g_lastActiveTab->m_alpha <= 0.f) {

					g_lastClickedTab->m_active = true;
					g_lastActiveTab = g_lastClickedTab;
					g_lastClickedTab = nullptr;
				}
			}
		}

	private:
		bool m_space = {};
		const Orion::Module::Gui::Fonts* m_fonts = {};
	};

	struct Menu::Body : Component
	{
		struct Top;
		struct Content;

		Body() noexcept
		{
			Component::SameLine();

			const auto pos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
			const auto size = ImGui::GetContentRegionAvail();

			Component::Background(pos - ImVec2{ 2, 0 }, pos + ImVec2{ 0, size.y }, IM_COL32(20, 20, 19, 230));
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 0, 2 });
			Component::BeginChild(Orion::Fnv<"##Menu::Body">::value);
			if (!Component::Continue())
				return;

			Component::Background(pos, pos + size, IM_COL32(16, 16, 15, 230), 2,
				ImDrawFlags_::ImDrawFlags_RoundCornersBottomRight |
				ImDrawFlags_::ImDrawFlags_RoundCornersTopRight);
		}

		~Body() noexcept
		{
			Component::EndChild();
		}
	};

	struct Menu::Body::Top : Component
	{
		Top() noexcept
		{
			Component::BeginChild(Orion::Fnv<"##Menu::Body::Top">::value, ImVec2{ 0, 70 });
			if (!Component::Continue())
				return;

			Component::Background(IM_COL32(8, 8, 8, 255), 2,
				ImDrawFlags_::ImDrawFlags_RoundCornersTopRight);
		}

		~Top() noexcept
		{
			Component::EndChild();
		}
	};

	struct Menu::Body::Content : Component
	{
		struct Main;

		Content() noexcept
		{
			Component::BeginChild(Orion::Fnv<"##Menu::Body::Content">::value, ImVec2{}, false,
				ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar |
				ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground);
			
			if (!Component::Continue())
				return;

			Component::Background(IM_COL32(8, 8, 8, 255), 2,
				ImDrawFlags_::ImDrawFlags_RoundCornersBottomRight);
		}

		~Content() noexcept
		{
			Component::EndChild();
		}
	};

	struct Menu::Body::Content::Main : Component
	{
		struct Tab;

		Main() noexcept
		{
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{ 0, 15 });
			Component::BeginChild(Orion::Fnv<"##Menu::Body::Content::Main">::value, ImGui::GetContentRegionAvail() - ImVec2{ 18, 0 }, true,
				ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar |
				ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground);
		}

		~Main() noexcept
		{
			Component::EndChild();
		}
	};

	struct Menu::Body::Content::Main::Tab : Component
	{
		struct Panel;

		Tab(std::uint32_t hash) noexcept
		{
			if (const auto tab{ g_tabs.find(hash) }; tab && tab->m_alpha > 0.f) {
				Component::Continue(true);
				Component::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * tab->m_alpha);
			}
		}
	};

	struct Menu::Body::Content::Main::Tab::Panel : Component
	{
		struct Table;

		Panel() noexcept
		{
			Component::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2{ 18, 0 });
			Component::PushStyleVar(ImGuiStyleVar_ScrollbarSize, 9);
			Component::PushStyleColor(ImGuiCol_ScrollbarBg, ImVec4{});
			Component::PushStyleColor(ImGuiCol_ScrollbarGrab, ImVec4{ ImColor{ 24, 31, 37 } });
			Component::PushStyleColor(ImGuiCol_ScrollbarGrabActive, ImVec4{ ImColor{ 33, 43, 50 } });
			Component::PushStyleColor(ImGuiCol_ScrollbarGrabHovered, ImVec4{ ImColor{ 28, 36, 43 } });

			const auto verticalOffset{ ImGui::GetContentRegionAvail().y * .02f };
			if (!g_lastActiveTab->m_active)
				ImGui::SetCursorPos(ImGui::GetCursorPos() + ImVec2{ 0, verticalOffset - verticalOffset * std::powf(g_lastActiveTab->m_alpha, 2) });
			else
				ImGui::SetCursorPos(ImGui::GetCursorPos() + ImVec2{ 0, verticalOffset - verticalOffset * std::sqrtf(g_lastActiveTab->m_alpha) });

			Component::BeginChild(Orion::Fnv<"##Menu::Body::Content::Main::Panel">::value, ImVec2{}, true,
				ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysVerticalScrollbar |
				ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground);
		}

		~Panel() noexcept
		{
			Component::EndChild();
		}
	};

	struct Menu::Body::Content::Main::Tab::Panel::Table : Component
	{
		Table() noexcept
		{
			Orion::String<"##Menu::Body::Content::Panel::Table"> id;

			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_CellPadding, ImVec2{ 7.5f, ImGui::GetStyle().CellPadding.y });
			Component::BeginTable(id.get(), 2);

			if (!Component::Continue())
				return;

			Component::TableNextRow();
		}

		~Table() noexcept
		{
			Component::EndTable();
		}
	};
}

using namespace Orion::Module;

Gui::Gui(const Application& app) noexcept :
	m_app{ app },
	m_open{ true }
{
	ImGui::StyleColorsDark();

	auto&& io = ImGui::GetIO();
	io.IniFilename = nullptr;
	io.LogFilename = nullptr;

	auto&& style = ImGui::GetStyle();
	style.WindowShadowSize = 25;

	auto&& colors{ style.Colors };
	colors[ImGuiCol_WindowShadow] = ImVec4{ 0, 0, 0, 1 };

	m_fonts.arialbd_15 = io.Fonts->AddFontFromMemoryCompressedTTF(arialbd_compressed_data, arialbd_compressed_size, 15);
	{
		ImFontConfig cfg;
		cfg.MergeMode = true;
		io.Fonts->AddFontFromMemoryCompressedTTF(fa_compressed_data, fa_compressed_size, 15, &cfg, FontAwesome::range);
	}
	m_fonts.profile_15 = io.Fonts->AddFontFromMemoryCompressedTTF(arialbd_compressed_data, arialbd_compressed_size, 15);
	{
		ImFontConfig cfg;
		cfg.MergeMode = true;
		cfg.GlyphOffset = ImVec2{ 0, 0 };
		cfg.GlyphExtraSpacing = ImVec2{ 0, 0 };
		cfg.GlyphMinAdvanceX = cfg.GlyphMaxAdvanceX = 0;
		io.Fonts->AddFontFromMemoryCompressedTTF(fa_compressed_data, fa_compressed_size, 15, &cfg, FontAwesome::range);
	}
	m_fonts.navbar_15 = io.Fonts->AddFontFromMemoryCompressedTTF(arialbd_compressed_data, arialbd_compressed_size, 15);
	{
		ImFontConfig cfg;
		cfg.MergeMode = true;
		cfg.GlyphOffset = ImVec2{ 16, 0 };
		cfg.GlyphExtraSpacing = ImVec2{ 36, 0 };
		cfg.GlyphMinAdvanceX = cfg.GlyphMaxAdvanceX = 0;
		io.Fonts->AddFontFromMemoryCompressedTTF(fa_compressed_data, fa_compressed_size, 15, &cfg, FontAwesome::range);
	}
	m_fonts.ariblk_37 = io.Fonts->AddFontFromMemoryCompressedTTF(ariblk_compressed_data, ariblk_compressed_size, 37);
}

Gui::~Gui() noexcept
{
}

void Gui::draw() const noexcept
{
	if (Menu menu{}) {
		if (Menu::Header header{}) {
			if (Menu::Header::Nav nav{}) {
				if (Menu::Header::Nav::Items items{}) {
					items.Text<"Aimbot">();
					items.Button<"Ragebot", FontAwesome::Type::crosshairs>();
					items.Button<"Anti Aim", FontAwesome::Type::rotate_left>();
					items.Button<"Legitbot", FontAwesome::Type::computer_mouse>();
					items.Text<"Visuals">();
					items.Button<"Players", FontAwesome::Type::user>();
					items.Button<"Weapons", FontAwesome::Type::gun>();
					items.Button<"Grenades", FontAwesome::Type::bomb>();
					items.Button<"World", FontAwesome::Type::globe_asia>();
					items.Button<"View", FontAwesome::Type::binoculars>();
					items.Text<"Miscellaneous">();
					items.Button<"Main", FontAwesome::Type::screwdriver_wrench>();
					items.Button<"Inventory", FontAwesome::Type::backpack>();
					items.Button<"Scripts", FontAwesome::Type::code>();
					items.Button<"Configs", FontAwesome::Type::gear>();
				}
			}
		}
		if (Menu::Body body{}) {
			if (Menu::Body::Top top{}) {

			}
			if (Menu::Body::Content content{}) {
				if (Menu::Body::Content::Main main{}) {

					if (Menu::Body::Content::Main::Tab tab{ Orion::Fnv<"Main">::value }) {
						if (Menu::Body::Content::Main::Tab::Panel panel{}) {
							if (Menu::Body::Content::Main::Tab::Panel::Table table{}) {

							}
						}
					}
				}
			}
		}
	}
}

void Gui::invalidate() noexcept
{
}

void Gui::toggle() noexcept
{
	m_open = !m_open;
}