#include "Gui.h"
#include "Orion.h"
#include "Resources/Fonts/arialbd.h"
#include "Resources/Fonts/ariblk.h"
#include "Resources/Fonts/fontawesome.h"
#include "Dependencies/ImGui/imgui_custom.h"

namespace
{
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

	struct PushFont
	{
		PushFont(ImFont* font) noexcept :
			m_font{ font },
			m_scale{ font->Scale }
		{
			ImGui::PushFont(font);
		}

		PushFont(ImFont* font, float scale) noexcept :
			m_font{ font },
			m_scale{ font->Scale }
		{
			font->Scale = scale;
			ImGui::PushFont(font);
		}

		~PushFont() noexcept
		{
			m_font->Scale = m_scale;
			ImGui::PopFont();
		}

	private:
		ImFont* m_font = {};
		float m_scale = {};
	};

	struct StyleVar
	{
		StyleVar(ImGuiStyleVar idx, float val) noexcept { ImGui::PushStyleVar(idx, val); }
		StyleVar(ImGuiStyleVar idx, const ImVec2& val) noexcept { ImGui::PushStyleVar(idx, val); }
		~StyleVar() noexcept { ImGui::PopStyleVar(); }
	};

	struct StyleColor
	{
		StyleColor(ImGuiCol idx, ImU32 col) noexcept { ImGui::PushStyleColor(idx, col); }
		StyleColor(ImGuiCol idx, const ImVec4& col) noexcept { ImGui::PushStyleColor(idx, col); }
		~StyleColor() noexcept { ImGui::PopStyleColor(); }
	};

	struct Component
	{
		~Component() noexcept
		{
			ImGui::PopStyleVar(m_styleVarCount);
			ImGui::PopStyleColor(m_styleColorCount);
		}

		[[nodiscard]] constexpr operator bool() const noexcept
		{
			return Continue();
		}

	protected:
		[[nodiscard]] constexpr bool Continue() const noexcept
		{
			return m_continue;
		}

		constexpr void Continue(bool value) noexcept
		{
			m_continue = value;
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

		static void Background(const ImVec2& p_min, const ImVec2& p_max, ImU32 col, float rounding = 0.0F, ImDrawFlags flags = ImDrawFlags_::ImDrawFlags_None) noexcept
		{
			return ImGui::GetWindowDrawList()->AddRectFilled(p_min, p_max, col, rounding, flags);
		}

		static void Background(ImU32 col, float rounding = 0.0F, ImDrawFlags flags = ImDrawFlags_::ImDrawFlags_None) noexcept
		{
			const auto pos{ ImGui::GetWindowPos() + ImGui::GetCursorPos() };
			return ImGui::GetWindowDrawList()->AddRectFilled(pos, pos + ImGui::GetContentRegionAvail(), col, rounding, flags);
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

		Menu(float alpha, ImFont* defaultFont) noexcept :
			m_font{ defaultFont }
		{
			Orion::String<"##Menu"> id;

			ImGui::SetNextWindowSize(ImVec2{ 800, 656 }, ImGuiCond_::ImGuiCond_Once);

			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_Alpha, std::powf(alpha, 2));
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
		PushFont m_font;
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

				const PushFont font{ Orion::instance->getGui().getFonts().ariblk_37 };
				const auto contentSize = ImGui::GetContentRegionAvail();
				const auto textSize = ImGui::CalcTextSize(label.get());
				const ImVec2 textPos{ (contentSize.x - textSize.x) * .5f, (contentSize.y - textSize.y) * .5f + 5 };

				ImGui::SetCursorPos(textPos);
				ImGui::TextColored(ImVec4{ .2549019f, .729411f, .8509803f, 1.f }, label.get());
				ImGui::SetCursorPos(ImVec2{ textPos.x + 1, textPos.y });
				ImGui::TextColored(ImVec4{ .9411764f, .9411764f, .9411764f, 1.f }, label.get());
			}
			ImGui::EndChild();
		}

		static void Profile() noexcept
		{
			auto&& drawList = *ImGui::GetWindowDrawList();
			const auto drawPos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
			const auto contentSize = ImGui::GetContentRegionAvail();

			drawList.AddRectFilled(drawPos - ImVec2{ 0, 2 }, drawPos + ImVec2{ contentSize.x, 0 }, IM_COL32(20, 20, 19, 230));

			if (ImGui::BeginChild(Orion::Fnv<"##Menu::Header::Nav::Profile">::value)) {

				auto&& style = ImGui::GetStyle();
				auto&& fonts = Orion::instance->getGui().getFonts();

				drawList.AddRectFilled(drawPos, drawPos + contentSize, IM_COL32(16, 16, 15, 230), 2,
					ImDrawFlags_::ImDrawFlags_RoundCornersBottomLeft);

				const auto contentRegionAvail = ImGui::GetContentRegionAvail();
				const auto profilePicturePosition = drawPos + ImVec2{ 31, contentRegionAvail.y * .5f };

				drawList.AddCircleFilled(profilePicturePosition, 19, IM_COL32(8, 8, 8, style.Alpha * 255));
				{
					const PushFont font{ fonts.profile_15 };
					const auto profileIcon = FontAwesome::get<FontAwesome::Type::user_secret>();
					drawList.AddText(profilePicturePosition - ImGui::CalcTextSize(profileIcon) * .5f, IM_COL32(240, 240, 240, style.Alpha * 255), profileIcon);
				}
				{
					Orion::String<"Wyxather"> author;
					Orion::String<"Build:" __DATE__> build;
					const PushFont font{ fonts.arialbd_15, (14.f / 15.f) };
					const ImVec2 textPos{ profilePicturePosition.x + 29, drawPos.y + 31 };
					drawList.AddText(ImVec2{ profilePicturePosition.x + 29, drawPos.y + 12 }, IM_COL32(240, 240, 240, style.Alpha * 255), author.get());
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
			const PushFont font{ m_fonts->arialbd_15, (13.f / 15.f) };
			if (m_space)
				ImGui::Dummy(ImVec2{ 0, 10 });
			else
				m_space = true;
			ImGui::Dummy(ImVec2{ 5, 0 });
			ImGui::SameLine();
			ImGui::TextColored(ImVec4{ .2509803f, .2705882f, .2941176f, 1.f }, text.get());
			const StyleVar styleVar[] = {
				{ ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{} },
			};
			ImGui::Dummy(ImVec2{ 0, 1 });
		}

		template <stb::compiletime_string_wrapper str, FontAwesome::Type icon>
		constexpr void Button() noexcept
		{
			Orion::String<str> text;
			std::string preview = text.get();
			preview.insert(0, FontAwesome::get<icon>());

			const PushFont font{ m_fonts->navbar_15 };
			auto&& style = ImGui::GetStyle();

			auto&& curTab = g_tabs[Orion::Fnv<str>::value];
			auto curTabAlpha = style.Alpha * (!curTab.m_active ? std::sqrtf(curTab.m_alpha) : std::powf(curTab.m_alpha, 2));

			const StyleVar styleVar[] = {
				{ ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 5 },
				{ ImGuiStyleVar_::ImGuiStyleVar_ButtonTextAlign, ImVec2{ 0, .5f } },
			};
			const StyleColor styleColor[] = {
				{ ImGuiCol_::ImGuiCol_Button, ImVec4{ .2470588f, .2470588f, .2352941f, curTabAlpha } },
				{ ImGuiCol_::ImGuiCol_ButtonActive, ImVec4{ .2470588f, .2470588f, .2352941f, curTabAlpha } },
				{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ .2470588f, .2470588f, .2352941f, curTabAlpha } },
			};

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

			if (curTab.m_active)
				curTab.m_alpha = std::clamp(curTab.m_alpha + ImGui::GetIO().DeltaTime * 2, 0.f, 1.f);
			else
				curTab.m_alpha = std::clamp(curTab.m_alpha - ImGui::GetIO().DeltaTime * 2, 0.f, 1.f);

			if (g_lastClickedTab && g_lastActiveTab->m_alpha <= 0.f) {
				g_lastClickedTab->m_active = true;
				g_lastActiveTab = g_lastClickedTab;
				g_lastClickedTab = nullptr;
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
			ImGui::SameLine();

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
				Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * tab->m_alpha);
			}
		}
	};

	struct Menu::Body::Content::Main::Tab::Panel : Component
	{
		struct Table;

		Panel() noexcept
		{
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{ 18, 0 });
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ScrollbarSize, 9);
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ScrollbarBg, ImVec4{});
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ScrollbarGrab, ImVec4{ .0941176f, .1215686f, .145098f, 1 });
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ScrollbarGrabActive, ImVec4{ .129411f, .168627f, .196078f, 1 });
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ScrollbarGrabHovered, ImVec4{ .10980392f, .1411764f, .168627f, 1 });

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
		template <stb::compiletime_string_wrapper str>
		struct Group;

		struct Widget;

		Table() noexcept
		{
			Orion::String<"##Menu::Body::Content::Panel::Table"> id;

			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_CellPadding, ImVec2{ 7.5f, ImGui::GetStyle().CellPadding.y });
			Component::BeginTable(id.get(), 2);

			if (!Component::Continue())
				return;

			ImGui::TableNextRow();
		}

		~Table() noexcept
		{
			Component::EndTable();
		}
	};

	template <stb::compiletime_string_wrapper str>
	struct Menu::Body::Content::Main::Tab::Panel::Table::Group : Component
	{
		Group() noexcept
		{
			Orion::String<str> name;

			constexpr auto hash = Orion::Fnv<str>::value;
			constexpr auto title_height{ 24.00f };
			constexpr auto line_width_offset{ 4.00f };
			constexpr auto line_height{ 2.00f };
			constexpr auto seperator_height{ 18.00f };

			const auto& style{ ImGui::GetStyle() };

			g_lastActiveGroup = &g_lastActiveTab->m_groups[hash];

			ImGui::TableNextColumn();

			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_CellPadding, ImVec2{ 0, 5 });
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{ 10, 7 });
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_Border, ImVec4{});
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ChildBg, ImVec4{ .039215f, .039215f, .047058f, 1 });

			Component::BeginChild(hash, ImVec2{ 0,
				title_height + line_height + seperator_height +
				style.ItemSpacing.y * 2 + (21 + style.CellPadding.y * 2) * g_lastActiveGroup->m_widgetCount + style.WindowPadding.y }, true,
				ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar);

			if (!Component::Continue())
				return;

			const auto pos{ ImGui::GetWindowPos() + ImGui::GetCursorPos() + ImVec2{ -line_width_offset, title_height } };
			Menu::Background(pos, pos + ImVec2{ ImGui::GetContentRegionAvail().x + line_width_offset * 2, line_height }, IM_COL32(24, 24, 24, style.Alpha * 255), 0,
				ImDrawFlags_::ImDrawFlags_None);

			const PushFont font{ Orion::instance->getGui().getFonts().arialbd_15, (16.f / 15.f) };
			ImGui::TextColored(ImVec4{ .9411764f, .9411764f, .9411764f, 1 }, name.get());

			ImGui::Dummy(ImVec2{ 0, seperator_height });
		}

		~Group() noexcept
		{
			Component::EndChild();
		}
	};

	struct Menu::Body::Content::Main::Tab::Panel::Table::Widget : Component
	{
		Widget() noexcept :
			m_count{ 0 },
			m_fonts{ &Orion::instance->getGui().getFonts() }
		{
			Orion::String<"##Menu::Body::Content::Panel::Table::Widget"> name;
			Component::BeginTable(name.get(), 2);
		}

		~Widget() noexcept
		{
			if (Component::Continue()) {
				ImGui::EndTable();
				g_lastActiveGroup->m_widgetCount = m_count;
			}
		}

		template <stb::compiletime_string_wrapper str>
		constexpr void Toggle(bool& value, float color[4]) noexcept
		{
			Orion::String<str> name;

			constexpr auto fontHeight = 14.f;
			constexpr auto toggleWidthMult = 1.35f;
			constexpr auto textPositionVerticalOffset = 2.f;

			const PushFont font{ m_fonts->arialbd_15, (fontHeight / 15.f) };
			float ratio = 0;

			m_count++;

			ImGui::TableNextRow();

			if (ImGui::TableSetColumnIndex(1)) {

				const auto pos = ImGui::GetCursorPos() + ImVec2{ ImGui::GetContentRegionAvail().x - ImGui::GetFrameHeight() * toggleWidthMult, (ImGui::GetFrameHeight() - ImGui::GetFrameHeight() * .8f) * .5f };
				ImGui::SetCursorPos(pos);
				ratio = ImGui::ButtonToggle(name.get(), value, toggleWidthMult);

				if (color) {
					constexpr auto itemSpaceWidth{ 8.00f };
					constexpr auto colorVerticalOffset{ 3.00f };

					const auto colorIcon{ FontAwesome::get<FontAwesome::Type::palette>() };
					const auto colorLabel{ std::string{ colorIcon } + name.get() };
					const auto& style = ImGui::GetStyle();

					const StyleVar styleVar[] = {
						{ ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3 },
						{ ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3 }
					};
					const StyleColor styleColor[] = {
						{ ImGuiCol_::ImGuiCol_Text, ImVec4{ .564705f, .615686f, .647058f, 1 } },
						{ ImGuiCol_::ImGuiCol_Button, ImVec4{} },
						{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{} },
						{ ImGuiCol_::ImGuiCol_ButtonActive, ImVec4{} },
						{ ImGuiCol_::ImGuiCol_FrameBg, ImVec4{ .0470588f, .0470588f, .0470588f, 1 } },
						{ ImGuiCol_::ImGuiCol_FrameBgActive, ImVec4{ .0941176f, .0941176f, .0941176f, 1 } },
						{ ImGuiCol_::ImGuiCol_FrameBgHovered, ImVec4{ .070588f, .070588f, .070588f, 1 } },
						{ ImGuiCol_::ImGuiCol_TextSelectedBg, ImVec4{ .250980f, .250980f, .250980f, .768627f } }
					};

					ImGui::SetCursorPos(pos - ImVec2{ ImGui::GetFrameHeight() * toggleWidthMult, 0 });
					if (ImGui::Button(std::string{ std::string{ colorIcon } + "##" + name.get() }.c_str())) {
						g_colorReference = { color[0], color[1], color[2], color[3] };
						ImGui::OpenPopup(colorLabel.c_str());
						g_togglePopupAlpha = {};
					}
					const StyleVar styleVar2[] = {
						{ ImGuiStyleVar_::ImGuiStyleVar_Alpha, std::sqrtf(g_togglePopupAlpha) * style.Alpha }
					};
					ImGui::SetNextWindowSize(ImVec2{ 308, 256 } *style.Alpha, ImGuiCond_::ImGuiCond_Always);
					if (ImGui::BeginPopup(colorLabel.c_str(), ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {
						ImGui::ColorPicker4(colorLabel.c_str(), color,
							ImGuiColorEditFlags_::ImGuiColorEditFlags_NoLabel |
							ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaBar |
							ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaPreview, g_colorReference.data());
						ImGui::EndPopup();
						g_togglePopupAlpha = std::clamp(g_togglePopupAlpha + ImGui::GetIO().DeltaTime * 4, 0.f, 1.f);
					}
				}

				if (ImGui::TableSetColumnIndex(0)) {
					ImGui::SetCursorPos(ImGui::GetCursorPos() + ImVec2{ 0, (ImGui::GetFrameHeight() - fontHeight) * .5f - textPositionVerticalOffset });
					ImGui::TextColored(ImLerp(ImVec4{ .564705f, .615686f, .647058f, 1 }, ImVec4{ .90196f, .90196f, .90196f, 1 }, ratio), name.get());
				}
			}
		}

		template <stb::compiletime_string_wrapper str, stb::compiletime_string_wrapper items>
		void Combo(int& value) noexcept
		{
			static float popupAlpha;

			Orion::String<str> name;
			Orion::String<items> item;

			constexpr auto hash = Orion::Fnv<str>::value;
			constexpr auto fontHeight{ 14.00f };
			constexpr auto textPositionVerticalOffset{ 2.00f };
			constexpr auto framePadding{ 4.00f };

			const PushFont font{ m_fonts->arialbd_15, (fontHeight / 15.f) };

			m_count++;

			ImGui::TableNextRow();

			if (ImGui::TableSetColumnIndex(1)) {
				ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);
				const StyleVar styleVar[] = {
					{ ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha, std::powf(popupAlpha, 2) * ImGui::GetStyle().Alpha },
					{ ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3 },
					{ ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3 },
					{ ImGuiStyleVar_::ImGuiStyleVar_FramePadding, ImVec2{ framePadding, framePadding } },
					{ ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1 },
					{ ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 8, 8 } },
				};
				const StyleColor styleColor[] = {
					{ ImGuiCol_::ImGuiCol_Border, ImVec4{ .0980392f, .0980392f, .0980392f, 1 } },
					{ ImGuiCol_::ImGuiCol_Text, ImVec4{ .564705f, .615686f, .647058f, 1 } },
					{ ImGuiCol_::ImGuiCol_Header, ImVec4{ .0470588f, .0470588f, .0470588f, .7843137f } },
					{ ImGuiCol_::ImGuiCol_HeaderActive, ImVec4{ .0313725f, .0313725f, .0313725f, .7843137f } },
					{ ImGuiCol_::ImGuiCol_HeaderHovered, ImVec4{ .0627450f, .0627450f, .0627450f, .7843137f } },
					{ ImGuiCol_::ImGuiCol_Button, ImVec4{ .0470588f, .0470588f, .0470588f, 1 } },
					{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ .0823529f, .0823529f, .086274f, 1 } },
					{ ImGuiCol_::ImGuiCol_FrameBg, ImVec4{ .0470588f, .0470588f, .0470588f, 1 } },
					{ ImGuiCol_::ImGuiCol_FrameBgHovered, ImVec4{ .0823529f, .0823529f, .0823529f, 1 } },
				};
				ImGui::Combo(name.get(), &value, item.get());
				bool popup_open = ImGui::IsPopupOpen(ImHashStr("##ComboPopup", 0, ImGui::GetCurrentWindow()->GetID(name.get())), ImGuiPopupFlags_::ImGuiPopupFlags_None);
				if (popup_open)
					popupAlpha = std::clamp(ImGui::GetIO().DeltaTime * 2 + popupAlpha, 0.f, 1.f);
				else
					popupAlpha = {};
			}

			if (ImGui::TableSetColumnIndex(0)) {
				ImGui::SetCursorPos(ImGui::GetCursorPos() + ImVec2{ 0, (ImGui::GetFrameHeight() - fontHeight - framePadding * .5f) * .5f - textPositionVerticalOffset });
				ImGui::TextColored(ImVec4{ .564705f, .615686f, .647058f, 1 }, name.get());
			}
		}

		template <stb::compiletime_string_wrapper str, stb::compiletime_string_wrapper items>
		void MultiCombo(bool value[]) noexcept
		{
			constexpr auto fontHeight{ 14.00f };
			constexpr auto framePadding{ 4.00f };
			constexpr auto textPositionVerticalOffset{ 2.00f };

			static std::string preview;
			static float popupAlpha;

			const PushFont font{ m_fonts->arialbd_15, (fontHeight / 15.f) };

			Orion::String<str> name;
			Orion::String<items> item;
			std::vector<std::string> list;
			std::vector<std::string> selected;

			m_count++;

			ImGui::TableNextRow();

			if (ImGui::TableSetColumnIndex(1)) {

				ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x);

				const StyleVar styleVar[] = {
					{ ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha, std::powf(popupAlpha, 2) * ImGui::GetStyle().Alpha },
					{ ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3 },
					{ ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3 },
					{ ImGuiStyleVar_::ImGuiStyleVar_FramePadding, ImVec2{ framePadding, framePadding } },
					{ ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1 },
					{ ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 8, 8 } },
				};
				const StyleColor styleColor[] = {
					{ ImGuiCol_::ImGuiCol_Border, ImVec4{ .0980392f, .0980392f, .0980392f, 1 } },
					{ ImGuiCol_::ImGuiCol_Text, ImVec4{ .564705f, .615686f, .647058f, 1 } },
					{ ImGuiCol_::ImGuiCol_Header, ImVec4{ .0470588f, .0470588f, .0470588f, .7843137f } },
					{ ImGuiCol_::ImGuiCol_HeaderActive, ImVec4{ .0313725f, .0313725f, .0313725f, .7843137f } },
					{ ImGuiCol_::ImGuiCol_HeaderHovered, ImVec4{ .0627450f, .0627450f, .0627450f, .7843137f } },
					{ ImGuiCol_::ImGuiCol_Button, ImVec4{ .0470588f, .0470588f, .0470588f, 1 } },
					{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ .0823529f, .0823529f, .086274f, 1 } },
					{ ImGuiCol_::ImGuiCol_FrameBg, ImVec4{ .0470588f, .0470588f, .0470588f, 1 } },
					{ ImGuiCol_::ImGuiCol_FrameBgHovered, ImVec4{ .0823529f, .0823529f, .0823529f, 1 } },
				};

				if (ImGui::BeginCombo(std::string{ std::string{ "##" } + name.get() }.c_str(), preview.c_str())) {

					auto p{ item.get() };
					while (*p) {
						list.emplace_back(p);
						p += list.back().length() + 1;
					}

					for (std::size_t i{}; i < list.size(); ++i) {
						ImGui::Selectable(list[i].c_str(), &value[i], ImGuiSelectableFlags_::ImGuiSelectableFlags_DontClosePopups);
						if (value[i])
							selected.emplace_back(list[i]);
					}

					ImGui::EndCombo();

					popupAlpha = std::clamp(ImGui::GetIO().DeltaTime * 2 + popupAlpha, 0.f, 1.f);
				}
				else {
					popupAlpha = {};

					auto p{ item.get() };
					while (*p) {
						list.emplace_back(p);
						p += list.back().length() + 1;
					}

					for (std::size_t i{}; i < list.size(); ++i)
						if (value[i])
							selected.emplace_back(list[i]);
				}
				preview = {};
				for (std::size_t i{}; i < selected.size(); ++i)
					i == selected.size() - 1 ? preview += selected[i] : preview += selected[i] + ", ";
			}

			if (ImGui::TableSetColumnIndex(0)) {
				ImGui::SetCursorPos(ImGui::GetCursorPos() + ImVec2{ 0, (ImGui::GetFrameHeight() - fontHeight - framePadding * .5f) * .5f - textPositionVerticalOffset });
				ImGui::TextColored(ImVec4{ .564705f, .615686f, .647058f, 1 }, name.get());
			}
		}

		template <stb::compiletime_string_wrapper str, stb::compiletime_string_wrapper fmt, float min, float max>
		void Slider(float& value) noexcept
		{
			constexpr auto fontHeight{ 14.00f };
			constexpr auto framePadding{ 3.00f };
			constexpr auto inputTextWidth{ 28.00f };
			constexpr auto textPositionVerticalOffset{ 1.00f };

			const PushFont font{ m_fonts->arialbd_15, fontHeight / 15.f };
			const auto& style = ImGui::GetStyle();

			Orion::String<str> name;
			Orion::String<fmt> format;

			m_count++;

			ImGui::TableNextRow();

			if (ImGui::TableSetColumnIndex(1)) {

				const auto frameHeight = ImGui::GetFrameHeight();
				const auto pos{ ImGui::GetCursorPos() + ImVec2{0, (frameHeight - frameHeight * .8f) * .5f } };

				const StyleVar styleVar[] = {
					{ ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3 },
					{ ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3 },
					{ ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1 },
				};
				const StyleColor styleColor[] = {
					{ ImGuiCol_::ImGuiCol_FrameBgActive, ImVec4{.0823529f, .2666666f, .3764705f, 1 } },
					{ ImGuiCol_::ImGuiCol_FrameBgHovered, ImVec4{ .0745098f, .2313725f, .3254901f, 1 } },
					{ ImGuiCol_::ImGuiCol_Border, ImVec4{ .0980392f, .0980392f, .0980392f, 1 } },
					{ ImGuiCol_::ImGuiCol_Text, ImVec4{ .564705f, .615686f, .647058f, 1 } },
					{ ImGuiCol_::ImGuiCol_TextSelectedBg, ImVec4{ .2509803f, .2509803f, .2509803f, .7686274f } },
				};

				{
					const PushFont font{ m_fonts->arialbd_15, (fontHeight - 1) / 15.f };
					const StyleColor styleColor2[] = {
						{ ImGuiCol_::ImGuiCol_FrameBg, ImVec4{ .0470588f, .0470588f, .0470588f, 1 } },
					};
					ImGui::SetCursorPos(pos + ImVec2{ ImGui::GetContentRegionAvail().x - inputTextWidth - style.CellPadding.x, 0 });
					ImGui::SetNextItemWidth(inputTextWidth);
					if (ImGui::InputFloat(std::string{ std::string{ "##" } + name.get() }.c_str(), &value, 0.f, 0.f, format.get(), ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll))
						value = std::clamp(value, min, max);
				}

				const StyleColor styleColor2[] = {
					{ ImGuiCol_::ImGuiCol_FrameBg, ImVec4{ .0666666f, .2117647f, .301960f, 1 } },
					{ ImGuiCol_::ImGuiCol_BorderShadow, ImVec4{ .0117647f, .0549019f, .06666f, 1 } },
				};
				ImGui::SetCursorPos(pos);
				ImGui::SetNextItemWidth(ImGui::GetContentRegionAvail().x - inputTextWidth - style.CellPadding.x - 8);
				ImGui::SliderFloat5(std::string{ std::string{ "###" } + name.get() }.c_str(), value, min, max, ImGui::GetFrameHeight() * .35f, IM_COL32(32, 32, 32, static_cast<int>(style.Alpha * 255)), format.get(), ImGuiSliderFlags_::ImGuiSliderFlags_NoInput);
			}

			if (ImGui::TableSetColumnIndex(0)) {
				ImGui::SetCursorPos(ImGui::GetCursorPos() + ImVec2{ 0, (ImGui::GetFrameHeight() - fontHeight - framePadding * .5f) * .5f - textPositionVerticalOffset });
				ImGui::TextColored(ImVec4{ .564705f, .615686f, .647058f, 1 }, name.get());
			}
		}

	private:
		static inline std::array<float, 4> g_colorReference;
		static inline float g_togglePopupAlpha;

		int m_count = {};
		const Orion::Module::Gui::Fonts* m_fonts = {};
	};
}

using namespace Orion::Module;

Gui::Gui(const Application& app) noexcept :
	m_app{ app },
	m_open{ true },
	m_io{ ImGui::GetIO() }
{
	ImGui::StyleColorsDark();

	m_io.IniFilename = nullptr;
	m_io.LogFilename = nullptr;

	auto&& style = ImGui::GetStyle();
	style.WindowShadowSize = 25;

	auto&& colors{ style.Colors };
	colors[ImGuiCol_WindowShadow] = ImVec4{ 0, 0, 0, 1 };

	m_fonts.arialbd_15 = m_io.Fonts->AddFontFromMemoryCompressedTTF(arialbd_compressed_data, arialbd_compressed_size, 15);
	{
		ImFontConfig cfg;
		cfg.MergeMode = true;
		m_io.Fonts->AddFontFromMemoryCompressedTTF(fa_compressed_data, fa_compressed_size, 15, &cfg, FontAwesome::range);
	}
	m_fonts.profile_15 = m_io.Fonts->AddFontFromMemoryCompressedTTF(arialbd_compressed_data, arialbd_compressed_size, 15);
	{
		ImFontConfig cfg;
		cfg.MergeMode = true;
		cfg.GlyphOffset = ImVec2{ 0, 0 };
		cfg.GlyphExtraSpacing = ImVec2{ 0, 0 };
		cfg.GlyphMinAdvanceX = cfg.GlyphMaxAdvanceX = 0;
		m_io.Fonts->AddFontFromMemoryCompressedTTF(fa_compressed_data, fa_compressed_size, 15, &cfg, FontAwesome::range);
	}
	m_fonts.navbar_15 = m_io.Fonts->AddFontFromMemoryCompressedTTF(arialbd_compressed_data, arialbd_compressed_size, 15);
	{
		ImFontConfig cfg;
		cfg.MergeMode = true;
		cfg.GlyphOffset = ImVec2{ 16, 0 };
		cfg.GlyphExtraSpacing = ImVec2{ 36, 0 };
		cfg.GlyphMinAdvanceX = cfg.GlyphMaxAdvanceX = 0;
		m_io.Fonts->AddFontFromMemoryCompressedTTF(fa_compressed_data, fa_compressed_size, 15, &cfg, FontAwesome::range);
	}
	m_fonts.ariblk_37 = m_io.Fonts->AddFontFromMemoryCompressedTTF(ariblk_compressed_data, ariblk_compressed_size, 37);
}

Gui::~Gui() noexcept
{
}

void Gui::draw() noexcept
{
	if (m_open) {
		if (m_alpha < 1.f)
			m_alpha = std::clamp(m_alpha + m_io.DeltaTime * 2, 0.f, 1.f);
	}
	else {
		if (m_alpha > 0.f)
			m_alpha = std::clamp(m_alpha - m_io.DeltaTime * 2, 0.f, 1.f);
	}

	if (!m_alpha)
		return;

	if (Menu menu{ m_alpha, m_fonts.arialbd_15 }) {
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

								if (Menu::Body::Content::Main::Tab::Panel::Table::Group<"General"> group{}) {
									if (Menu::Body::Content::Main::Tab::Panel::Table::Widget widget{}) {
										static bool boolean[4];
										static float color[8];
										static int value[4];
										widget.Toggle<"Unlimited Blade">(boolean[0], &color[0]);
										widget.Toggle<"Unlimited Works">(boolean[1], &color[4]);
										widget.Combo<"Hitbox", "Head\0Neck\0Body\0Legs\0Arms\0">(value[0]);
										widget.Combo<"Hitbox2", "Head\0Neck\0Body\0Legs\0Arms\0">(value[1]);
										widget.MultiCombo<"Hitbox", "Head\0Neck\0Body\0Legs\0">(boolean);
										widget.MultiCombo<"Hitbox2", "Head\0Neck\0Body\0Legs\0">(boolean);
									}
								}

								if (Menu::Body::Content::Main::Tab::Panel::Table::Group<"Movement"> group{}) {
									if (Menu::Body::Content::Main::Tab::Panel::Table::Widget widget{}) {
										static bool boolean[4];
										static float color[8];
										static int value[4];
										widget.Toggle<"Unlimited Blade">(boolean[0], &color[0]);
										widget.Slider<"Unlimited Works", "%.1f", 0.f, 1.f>(color[0]);
									}
								}
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