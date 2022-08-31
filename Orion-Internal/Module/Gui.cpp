#include "Gui.h"
#include "Orion.h"
#include "Renderer.h"
#include "Config.h"
#include "Resources/Fonts/arialbd.h"
#include "Resources/Fonts/ariblk.h"
#include "Resources/Fonts/fontawesome.h"
#include "Dependencies/ImGui/imgui_custom.h"
#include "Dependencies/ImGui/imgui_impl_dx11.h"

#include <d3d9.h>
#include <d3d11.h>

#if _WIN64
#if NDEBUG
#include "../Resources/Shaders/Build/Release/x64/blur_x.h"
#include "../Resources/Shaders/Build/Release/x64/blur_y.h"
#include "../Resources/Shaders/Build/Release/x64/bloom_combine.h"
#include "../Resources/Shaders/Build/Release/x64/bloom_extract.h"
#include "../Resources/Shaders/Build/Release/x64/gaussian_blur.h"
#else
#include "../Resources/Shaders/Build/Debug/x64/blur_x.h"
#include "../Resources/Shaders/Build/Debug/x64/blur_y.h"
#include "../Resources/Shaders/Build/Debug/x64/bloom_combine.h"
#include "../Resources/Shaders/Build/Debug/x64/bloom_extract.h"
#include "../Resources/Shaders/Build/Debug/x64/gaussian_blur.h"
#endif
#else
#if NDEBUG
#include "../Resources/Shaders/Build/Release/Win32/blur_x.h"
#include "../Resources/Shaders/Build/Release/Win32/blur_y.h"
#include "../Resources/Shaders/Build/Release/Win32/bloom_combine.h"
#include "../Resources/Shaders/Build/Release/Win32/bloom_extract.h"
#include "../Resources/Shaders/Build/Release/Win32/gaussian_blur.h"
#else
#include "../Resources/Shaders/Build/Debug/Win32/blur_x.h"
#include "../Resources/Shaders/Build/Debug/Win32/blur_y.h"
#include "../Resources/Shaders/Build/Debug/Win32/bloom_combine.h"
#include "../Resources/Shaders/Build/Debug/Win32/bloom_extract.h"
#include "../Resources/Shaders/Build/Debug/Win32/gaussian_blur.h"
#endif
#endif

using Orion::Module::Gui;
using Microsoft::WRL::ComPtr;

namespace
{
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

		void EndTable() const noexcept
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
		struct Tab;

		Menu(Gui& gui, float alpha, ImFont* defaultFont) noexcept :
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

			gui.getPostProcess()->draw();
		}

		~Menu() noexcept
		{
			Component::End();
		}

	private:
		PushFont m_font;
	};

	struct Menu::Tab : Component
	{
		Gui& m_gui;

		Tab(Gui& gui, std::uint32_t hash) noexcept :
			m_gui{ gui }
		{
			if (const auto tab = m_gui.getTabs().find(hash); tab && tab->m_alpha > 0.f) {
				Component::Continue(true);
				Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * tab->m_alpha);
			}
		}
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

		Gui& m_gui;

		Nav(Gui& gui) noexcept :
			m_gui{ gui }
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
		void Watermark() const noexcept
		{
			if (ImGui::BeginChild(Orion::Fnv<"##Menu::Header::Nav::Watermark">::value, ImVec2{ 0, 62 })) {

				Orion::String<"ORION"> label;

				const PushFont font{ m_gui.getFonts().ariblk_37 };
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

		void Profile() const noexcept
		{
			auto&& drawList = *ImGui::GetWindowDrawList();
			const auto drawPos = ImGui::GetWindowPos() + ImGui::GetCursorPos();
			const auto contentSize = ImGui::GetContentRegionAvail();

			drawList.AddRectFilled(drawPos - ImVec2{ 0, 2 }, drawPos + ImVec2{ contentSize.x, 0 }, IM_COL32(20, 20, 19, 230));

			if (ImGui::BeginChild(Orion::Fnv<"##Menu::Header::Nav::Profile">::value)) {

				auto&& style = ImGui::GetStyle();

				drawList.AddRectFilled(drawPos, drawPos + contentSize, IM_COL32(16, 16, 15, 230), 2,
					ImDrawFlags_::ImDrawFlags_RoundCornersBottomLeft);

				const auto contentRegionAvail = ImGui::GetContentRegionAvail();
				const auto profilePicturePosition = drawPos + ImVec2{ 31, contentRegionAvail.y * .5f };

				drawList.AddCircleFilled(profilePicturePosition, 19, IM_COL32(8, 8, 8, style.Alpha * 255));
				{
					const PushFont font{ m_gui.getFonts().profile_15 };
					const auto profileIcon = FontAwesome::get<FontAwesome::Type::user_secret>();
					drawList.AddText(profilePicturePosition - ImGui::CalcTextSize(profileIcon) * .5f, IM_COL32(240, 240, 240, style.Alpha * 255), profileIcon);
				}
				{
					Orion::String<"Wyxather"> author;
					Orion::String<"Build:" __DATE__> build;
					const PushFont font{ m_gui.getFonts().arialbd_15, (14.f / 15.f) };
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
		Gui& m_gui;

		Items(Gui& gui) noexcept :
			m_gui{ gui },
			m_space{ false }
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
			const PushFont font{ m_gui.getFonts().arialbd_15, (13.f / 15.f) };
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

			const PushFont font{ m_gui.getFonts().navbar_15 };
			auto&& style = ImGui::GetStyle();

			auto&& curTab = m_gui.getTabs()[Orion::Fnv<str>::value];
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
				if (!m_gui.getLastActiveTab()) {
					m_gui.getLastActiveTab() = &curTab;
					curTab.m_active = true;
				}
				else if (m_gui.getLastActiveTab() != &curTab && !m_gui.getLastClickedTab()) {
					m_gui.getLastActiveTab()->m_active = false;
					m_gui.getLastClickedTab() = &curTab;
				}
			}

			if (curTab.m_active)
				curTab.m_alpha = std::clamp(curTab.m_alpha + ImGui::GetIO().DeltaTime * 2, 0.f, 1.f);
			else
				curTab.m_alpha = std::clamp(curTab.m_alpha - ImGui::GetIO().DeltaTime * 2, 0.f, 1.f);

			if (m_gui.getLastClickedTab() && m_gui.getLastActiveTab()->m_alpha <= 0.f) {
				m_gui.getLastClickedTab()->m_active = true;
				m_gui.getLastActiveTab() = m_gui.getLastClickedTab();
				m_gui.getLastClickedTab() = nullptr;
			}
		}

	private:
		bool m_space = {};
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

		[[nodiscard]] static void Save(Orion::Module::Config& config) noexcept
		{
			Orion::String<"Save"> name;
			const auto label{ std::string{ FontAwesome::get<FontAwesome::Type::floppy_disk>() } + "    " + name.get() };

			ImGui::SetCursorPos(ImVec2{ 18, 21 });

			const StyleVar styleVar[] = {
				{ ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3 },
				{ ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1 },
			};
			const StyleColor styleColor[] = {
				{ ImGuiCol_::ImGuiCol_Text, ImVec4{ .5843137f, .6784313f, .7176470f, 1 } },
				{ ImGuiCol_::ImGuiCol_Border, ImVec4{ .098039f, .098039f, .098039f, 1 } },
				{ ImGuiCol_::ImGuiCol_Button, ImVec4{} },
				{ ImGuiCol_::ImGuiCol_ButtonActive, ImVec4{ .086274f, .086274f, .0941176f, 1 } },
				{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ .0823529f, .0823529f, .086274f, 1 } },
			};

			if (!ImGui::Button(label.c_str(), ImVec2{ 100, 29 }))
				return;

			config.save();
			config.update();
		}

		template <stb::compiletime_string_wrapper str>
		[[nodiscard]] static void Combo(Orion::Module::Config& config) noexcept
		{
			static float popupAlpha{};

			Orion::String<"##Menu::Body::Top::Combo"> name;
			Orion::String<str> items;

			ImGui::SameLine(0, 20);
			ImGui::SetNextItemWidth(189);

			const StyleVar styleVar[] = {
				{ ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha, std::powf(popupAlpha, 2) },
				{ ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3 },
				{ ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3 },
				{ ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1 },
				{ ImGuiStyleVar_::ImGuiStyleVar_FramePadding, ImVec2{ 7, 7 } },
				{ ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 8, 16 } },
				{ ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{ 10, 7 } },
			};
			const StyleColor styleColor[] = {
				{ ImGuiCol_::ImGuiCol_Border, ImVec4{ 0.098039f, 0.098039f, 0.098039f, 1.000000f } },
				{ ImGuiCol_::ImGuiCol_Text, ImVec4{ 0.564706f, 0.615686f, 0.647059f, 1.000000f } },
				{ ImGuiCol_::ImGuiCol_Header, ImVec4{ 0.047059f, 0.047059f, 0.047059f, 0.784314f } },
				{ ImGuiCol_::ImGuiCol_HeaderActive, ImVec4{ 0.031373f, 0.031373f, 0.031373f, 0.784314f } },
				{ ImGuiCol_::ImGuiCol_HeaderHovered, ImVec4{ 0.062745f, 0.062745f, 0.062745f, 0.784314f } },
				{ ImGuiCol_::ImGuiCol_Button, ImVec4{ 0.047059f, 0.047059f, 0.047059f, 1.000000f } },
				{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ 0.082353f, 0.082353f, 0.086275f, 1.000000f } },
				{ ImGuiCol_::ImGuiCol_FrameBg, ImVec4{ 0.047059f, 0.047059f, 0.047059f, 1.000000f } },
				{ ImGuiCol_::ImGuiCol_FrameBgHovered, ImVec4{ 0.082353f, 0.082353f, 0.086275f, 1.000000f } },
			};

			const auto result{ ImGui::Combo(name.get(), &config.getSort(), items.get()) };
			bool popup_open = ImGui::IsPopupOpen(ImHashStr("##ComboPopup", 0, ImGui::GetCurrentWindow()->GetID(name.get())), ImGuiPopupFlags_::ImGuiPopupFlags_None);
			if (popup_open)
				popupAlpha = std::clamp(ImGui::GetIO().DeltaTime * 2 + popupAlpha, 0.f, 1.f);
			else
				popupAlpha = {};

			if (!result)
				return;

			config.update();
		}

		[[nodiscard]] static void Create(Orion::Module::Config& config) noexcept
		{
			Orion::String<"Create"> name;

			const auto label{ std::string{FontAwesome::get<FontAwesome::Type::file_plus>() } + "    " + name.get() };

			ImGui::SameLine(0, 20);

			const StyleVar styleVar[] = {
				{ ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3 },
			};
			const StyleColor styleColor[] = {
				{ ImGuiCol_::ImGuiCol_Button, ImVec4{ 0.000000f, 0.435294f, 0.694118f, 1.000000f } },
				{ ImGuiCol_::ImGuiCol_ButtonActive, ImVec4{ 0.000000f, 0.545098f, 0.874510f, 1.000000f } },
				{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ 0.000000f, 0.525490f, 0.843137f, 1.000000f } },
			};

			if (!ImGui::Button(label.c_str(), ImVec2{ 130, 29 }))
				return;

			config.create();
			config.update();
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
		struct Panel;

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

	struct Menu::Body::Content::Main::Panel : Component
	{
		struct Config;
		struct Table;

		Gui& m_gui;

		Panel(Gui& gui) noexcept :
			m_gui{ gui }
		{
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{ 18, 0 });
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ScrollbarSize, 9);
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ScrollbarBg, ImVec4{});
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ScrollbarGrab, ImVec4{ .0941176f, .1215686f, .145098f, 1 });
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ScrollbarGrabActive, ImVec4{ .129411f, .168627f, .196078f, 1 });
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ScrollbarGrabHovered, ImVec4{ .10980392f, .1411764f, .168627f, 1 });

			const auto verticalOffset{ ImGui::GetContentRegionAvail().y * .02f };
			if (!m_gui.getLastActiveTab()->m_active)
				ImGui::SetCursorPos(ImGui::GetCursorPos() + ImVec2{ 0, verticalOffset - verticalOffset * std::powf(m_gui.getLastActiveTab()->m_alpha, 2) });
			else
				ImGui::SetCursorPos(ImGui::GetCursorPos() + ImVec2{ 0, verticalOffset - verticalOffset * std::sqrtf(m_gui.getLastActiveTab()->m_alpha) });

			Component::BeginChild(Orion::Fnv<"##Menu::Body::Content::Main::Panel">::value, ImVec2{}, true,
				ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysVerticalScrollbar |
				ImGuiWindowFlags_::ImGuiWindowFlags_NoBackground);
		}

		~Panel() noexcept
		{
			Component::EndChild();
		}
	};

	struct Menu::Body::Content::Main::Panel::Config : Component
	{
		enum class Event
		{
			UNDEFINED,
			SAVE,
			LOAD,
			REMOVE,
			RENAME,
			INPUT
		};

		const Orion::Application& m_app;
		const Gui& m_gui;

		Config(const Orion::Application& app, const Gui& gui) noexcept :
			m_app{ app },
			m_gui{ gui }
		{
			ImGui::Dummy(ImVec2{ 0, 1 });

			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ChildRounding, 3);
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FrameRounding, 3);
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_PopupRounding, 3);
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 0, 10 });
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{ 8, 7 });
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ChildBg, ImVec4{ 0.047059f, 0.047059f, 0.047059f, 1.000000f });
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_Border, ImVec4{ 0.086275f, 0.086275f, 0.086275f, 1.000000f });
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_BorderShadow, ImVec4{ 0.019608f, 0.019608f, 0.019608f, 1.000000f });

			auto&& config = m_app.getConfig();

			for (auto&& file : config.getFiles()) {

				bool resizing = false;

				switch (Config::Draw(file.m_name, file.m_time, file.m_active, config.getInput())) {
				case Menu::Body::Content::Main::Panel::Config::Event::SAVE: config.save();
					config.update();
					break;
				case Menu::Body::Content::Main::Panel::Config::Event::LOAD: config.load(file);
					config.update();
					break;
				case Menu::Body::Content::Main::Panel::Config::Event::REMOVE: config.remove(file);
					config.update();
					resizing = true;
					break;
				case Menu::Body::Content::Main::Panel::Config::Event::RENAME: config.rename(file);
					config.update();
					break;
				}

				if (resizing)
					break;
			}
		}

		Event Draw(std::string_view name, std::string_view time, bool active, std::array<char, 260>& input) noexcept
		{
			Event result = Event::UNDEFINED;

			if (ImGui::BeginChild(name.data(), ImVec2{ 0, 54 }, true, ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {

				const auto pos = ImGui::GetCursorPos();

				if (active) {
					Orion::String<"Save"> label;
					ImGui::SetCursorPos(pos + ImVec2{ ImGui::GetContentRegionAvail().x - 90, 6 });
					const StyleVar styleVar[] = {
						{ ImGuiStyleVar_::ImGuiStyleVar_FrameBorderSize, 1 },
					};
					const StyleColor styleColor[] = {
						{ ImGuiCol_::ImGuiCol_Border, ImVec4{ 0.235294f, 0.352941f, 0.423529f, 1.000000f } },
						{ ImGuiCol_::ImGuiCol_Button, ImVec4{ 0.043137f, 0.050980f, 0.050980f, 1.000000f } },
						{ ImGuiCol_::ImGuiCol_ButtonActive, ImVec4{ 0.133333f, 0.156863f, 0.156863f, 1.000000f } },
						{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ 0.078431f, 0.094118f, 0.094118f, 1.000000f } },
					};
					if (ImGui::Button(std::string{ std::string{ FontAwesome::get<FontAwesome::Type::floppy_disk>() } + "    " + label.get() }.c_str(), ImVec2{ 90, 27 }))
						result = Event::SAVE;
				}
				else {
					Orion::String<"Load"> label;
					ImGui::SetCursorPos(pos + ImVec2{ ImGui::GetContentRegionAvail().x - 90, 6 });
					const StyleColor styleColor[] = {
						{ ImGuiCol_::ImGuiCol_Button, ImVec4{ 0.000000f, 0.435294f, 0.694118f, 1.000000f } },
						{ ImGuiCol_::ImGuiCol_ButtonActive, ImVec4{ 0.000000f, 0.545098f, 0.874510f, 1.000000f } },
						{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ 0.000000f, 0.525490f, 0.843137f, 1.000000f } },
					};
					if (ImGui::Button(std::string{ std::string{ FontAwesome::get<FontAwesome::Type::download>() } + "    " + label.get() }.c_str(), ImVec2{ 90, 27 }))
						result = Event::LOAD;
				}

				Orion::String<"##Menu::Body::Content::Main::Panel::Config::Rename"> rename;
				static std::string lastConfigName;
				auto filterConfigNameInput{ [](ImGuiInputTextCallbackData* data) noexcept {
					switch (data->EventChar) {
					case ('A'): return 0;
					case ('B'): return 0;
					case ('C'): return 0;
					case ('D'): return 0;
					case ('E'): return 0;
					case ('F'): return 0;
					case ('G'): return 0;
					case ('H'): return 0;
					case ('I'): return 0;
					case ('J'): return 0;
					case ('K'): return 0;
					case ('L'): return 0;
					case ('M'): return 0;
					case ('N'): return 0;
					case ('O'): return 0;
					case ('P'): return 0;
					case ('Q'): return 0;
					case ('R'): return 0;
					case ('S'): return 0;
					case ('T'): return 0;
					case ('U'): return 0;
					case ('V'): return 0;
					case ('W'): return 0;
					case ('X'): return 0;
					case ('Y'): return 0;
					case ('Z'): return 0;
					case ('a'): return 0;
					case ('b'): return 0;
					case ('c'): return 0;
					case ('d'): return 0;
					case ('e'): return 0;
					case ('f'): return 0;
					case ('g'): return 0;
					case ('h'): return 0;
					case ('i'): return 0;
					case ('j'): return 0;
					case ('k'): return 0;
					case ('l'): return 0;
					case ('m'): return 0;
					case ('n'): return 0;
					case ('o'): return 0;
					case ('p'): return 0;
					case ('q'): return 0;
					case ('r'): return 0;
					case ('s'): return 0;
					case ('t'): return 0;
					case ('u'): return 0;
					case ('v'): return 0;
					case ('w'): return 0;
					case ('x'): return 0;
					case ('y'): return 0;
					case ('z'): return 0;
					case ('0'): return 0;
					case ('1'): return 0;
					case ('2'): return 0;
					case ('3'): return 0;
					case ('4'): return 0;
					case ('5'): return 0;
					case ('6'): return 0;
					case ('7'): return 0;
					case ('8'): return 0;
					case ('9'): return 0;
					case ('-'): return 0;
					case (' '): return 0;
					}
					return 1;
				} };

				if (!Orion::Fnv<"Default", std::uint32_t>::compare(name.data())) {
					static float popupAlpha{};
					const auto& style = ImGui::GetStyle();
					ImGui::SetCursorPos(pos + ImVec2{ ImGui::GetContentRegionAvail().x - 119, 10 });
					const StyleColor styleColor[] = {
						{ ImGuiCol_::ImGuiCol_Button, ImVec4{} },
						{ ImGuiCol_::ImGuiCol_ButtonActive, ImVec4{ 0.188235f, 0.188235f, 0.188235f, 1.000000f } },
						{ ImGuiCol_::ImGuiCol_ButtonHovered, ImVec4{ 0.125490f, 0.125490f, 0.125490f, 1.000000f } },
					};
					if (ImGui::Button(FontAwesome::get<FontAwesome::Type::trash_can>()))
						result = Event::REMOVE;
					ImGui::SetCursorPos(pos + ImVec2{ ImGui::GetContentRegionAvail().x - 148, 10 });
					if (ImGui::Button(FontAwesome::get<FontAwesome::Type::file_signature>())) {
						ImGui::OpenPopup(rename.get());
						strcpy_s(input.data(), input.size(), name.data());
						lastConfigName = name;
						popupAlpha = {};
					}
					const StyleVar styleVar[] = {
						{ ImGuiStyleVar_::ImGuiStyleVar_Alpha, std::sqrtf(popupAlpha) * style.Alpha },
					};
					ImGui::SetNextWindowSize(ImVec2{ 256, 35 } *style.Alpha, ImGuiCond_::ImGuiCond_Always);
					if (ImGui::BeginPopup(rename.get(), ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {
						{
							const StyleColor styleColor[] = {
								{ ImGuiCol_::ImGuiCol_FrameBg, ImVec4{ 0.031373f, 0.031373f, 0.031373f, 0.941176f } },
								{ ImGuiCol_::ImGuiCol_TextSelectedBg, ImVec4{ 0.250980f, 0.250980f, 0.250980f, 0.768627f } },
							};
							ImGui::InputText(rename.get(), input.data(), input.size(), ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter, filterConfigNameInput);
						}
						ImGui::EndPopup();
						result = Event::INPUT;
						popupAlpha = std::clamp(popupAlpha + ImGui::GetIO().DeltaTime * 4, 0.f, 1.f);
					}
					else if (lastConfigName == name && input != name) {
						lastConfigName.clear();
						result = Event::RENAME;
					}
				}

				Orion::String<"Modified: "> modified;
				Orion::String<"Author: "> author;
				Orion::String<"Wyxather"> authorValue;

				const StyleVar styleVar[] = {
					{ ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 0, 7 } },
				};

				ImGui::SetCursorPos(pos);
				{
					const PushFont font{ m_gui.getFonts().arialbd_15, (17.f / 15.f) };
					ImGui::TextColored(ImVec4{ 0.941176f, 0.941176f, 0.941176f, 1.000000f }, name.data());
				}
				const auto descPos{ ImGui::GetCursorPos() };

				ImGui::TextColored(ImVec4{ 0.647059f, 0.670588f, 0.698039f, 1.000000f }, modified.get());
				ImGui::SameLine();
				ImGui::TextColored(ImVec4{ 0.262745f, 0.513726f, 0.658824f, 1.000000f }, time.data());
				ImGui::SameLine(0, 14);

				ImGui::SetCursorPos(descPos + ImVec2{ 190, 0 });
				ImGui::TextColored(ImVec4{ 0.647059f, 0.670588f, 0.698039f, 1.000000f }, author.get());
				ImGui::SameLine();
				ImGui::TextColored(ImVec4{ 0.262745f, 0.513726f, 0.658824f, 1.000000f }, authorValue.get());
			}
			ImGui::EndChild();

			return result;
		}
	};

	struct Menu::Body::Content::Main::Panel::Table : Component
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
	struct Menu::Body::Content::Main::Panel::Table::Group : Component
	{
		Gui& m_gui;

		Group(Gui& gui) noexcept :
			m_gui{ gui }
		{
			Orion::String<str> name;

			constexpr auto hash = Orion::Fnv<str>::value;
			constexpr auto title_height{ 24.00f };
			constexpr auto line_width_offset{ 4.00f };
			constexpr auto line_height{ 2.00f };
			constexpr auto seperator_height{ 18.00f };

			const auto& style{ ImGui::GetStyle() };

			m_gui.getLastActiveGroup() = &m_gui.getLastActiveTab()->m_groups[hash];

			ImGui::TableNextColumn();

			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_CellPadding, ImVec2{ 0, 5 });
			Component::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{ 10, 7 });
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_Border, ImVec4{});
			Component::PushStyleColor(ImGuiCol_::ImGuiCol_ChildBg, ImVec4{ .039215f, .039215f, .047058f, 1 });

			Component::BeginChild(hash, ImVec2{ 0,
				title_height + line_height + seperator_height +
				style.ItemSpacing.y * 2 + (21 + style.CellPadding.y * 2) * m_gui.getLastActiveGroup()->m_widgetCount + style.WindowPadding.y }, true,
				ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar);

			if (!Component::Continue())
				return;

			const auto pos{ ImGui::GetWindowPos() + ImGui::GetCursorPos() + ImVec2{ -line_width_offset, title_height } };
			Menu::Background(pos, pos + ImVec2{ ImGui::GetContentRegionAvail().x + line_width_offset * 2, line_height }, IM_COL32(24, 24, 24, style.Alpha * 255), 0,
				ImDrawFlags_::ImDrawFlags_None);

			const PushFont font{ m_gui.getFonts().arialbd_15, (16.f / 15.f) };
			ImGui::TextColored(ImVec4{ .9411764f, .9411764f, .9411764f, 1 }, name.get());

			ImGui::Dummy(ImVec2{ 0, seperator_height });
		}

		~Group() noexcept
		{
			Component::EndChild();
		}
	};

	struct Menu::Body::Content::Main::Panel::Table::Widget : Component
	{
		Gui& m_gui;

		Widget(Gui& gui) noexcept :
			m_gui{ gui },
			m_count{ 0 }
		{
			Orion::String<"##Menu::Body::Content::Panel::Table::Widget"> name;
			Component::BeginTable(name.get(), 2);
		}

		~Widget() noexcept
		{
			if (Component::Continue()) {
				ImGui::EndTable();
				m_gui.getLastActiveGroup()->m_widgetCount = m_count;
			}
		}

		template <stb::compiletime_string_wrapper str>
		constexpr void Toggle(bool& value, float color[4], float colorReference[4], float* popupAlpha) noexcept
		{
			Orion::String<str> name;

			constexpr auto fontHeight = 14.f;
			constexpr auto toggleWidthMult = 1.35f;
			constexpr auto textPositionVerticalOffset = 2.f;

			const PushFont font{ m_gui.getFonts().arialbd_15, (fontHeight / 15.f) };
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
						colorReference[0] = color[0];
						colorReference[1] = color[1];
						colorReference[2] = color[2];
						colorReference[3] = color[3];
						ImGui::OpenPopup(colorLabel.c_str());
						*popupAlpha = {};
					}
					const StyleVar styleVar2[] = {
						{ ImGuiStyleVar_::ImGuiStyleVar_Alpha, std::sqrtf(*popupAlpha) * style.Alpha }
					};
					ImGui::SetNextWindowSize(ImVec2{ 308, 256 } *style.Alpha, ImGuiCond_::ImGuiCond_Always);
					if (ImGui::BeginPopup(colorLabel.c_str(), ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {
						ImGui::ColorPicker4(colorLabel.c_str(), color,
							ImGuiColorEditFlags_::ImGuiColorEditFlags_NoLabel |
							ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaBar |
							ImGuiColorEditFlags_::ImGuiColorEditFlags_AlphaPreview, colorReference);
						ImGui::EndPopup();
						*popupAlpha = std::clamp(*popupAlpha + ImGui::GetIO().DeltaTime * 4, 0.f, 1.f);
					}
				}

				if (ImGui::TableSetColumnIndex(0)) {
					ImGui::SetCursorPos(ImGui::GetCursorPos() + ImVec2{ 0, (ImGui::GetFrameHeight() - fontHeight) * .5f - textPositionVerticalOffset });
					ImGui::TextColored(ImLerp(ImVec4{ .564705f, .615686f, .647058f, 1 }, ImVec4{ .90196f, .90196f, .90196f, 1 }, ratio), name.get());
				}
			}
		}

		template <stb::compiletime_string_wrapper str>
		constexpr void Toggle(bool& value) noexcept { return Toggle<str>(value, nullptr, nullptr, nullptr); }

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

			const PushFont font{ m_gui.getFonts().arialbd_15, (fontHeight / 15.f) };

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

			const PushFont font{ m_gui.getFonts().arialbd_15, (fontHeight / 15.f) };

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

			const PushFont font{ m_gui.getFonts().arialbd_15, fontHeight / 15.f };
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
					const PushFont font{ m_gui.getFonts().arialbd_15, (fontHeight - 1) / 15.f };
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
		int m_count = {};
	};

	struct BlurD3D9 : Gui::PostProcess
	{
		virtual void draw() noexcept override
		{
			const auto& io = ImGui::GetIO();

			for (auto i = 0; i < IM_ARRAYSIZE(m_textures); i++) {
				if (m_textures[i].Get())
					continue;

				m_size[0] = static_cast<int>(io.DisplaySize.x * .5f);
				m_size[1] = static_cast<int>(io.DisplaySize.y * .5f);

				const auto device{ *static_cast<LPDIRECT3DDEVICE9*>(io.BackendRendererUserData) };
				if (device->CreateTexture(m_size[0], m_size[1], 1, D3DUSAGE_RENDERTARGET, D3DFMT_X8R8G8B8, D3DPOOL_DEFAULT, m_textures[i].GetAddressOf(), nullptr) != D3D_OK)
					return;
			}

			for (auto i = 0; i < IM_ARRAYSIZE(m_shaders); ++i) {
				if (m_shaders[i].Get())
					continue;

				const auto device{ *static_cast<LPDIRECT3DDEVICE9*>(io.BackendRendererUserData) };
				if (device->CreatePixelShader(reinterpret_cast<const DWORD*>(!i ? blur_x : blur_y), m_shaders[i].GetAddressOf()) != D3D_OK)
					return;
			}

			auto&& drawList = *ImGui::GetWindowDrawList();
			drawList.AddCallback(&begin, this);
			for (auto i = 0; i < 8; ++i) {
				drawList.AddCallback(&firstPass, this);
				drawList.AddImage(reinterpret_cast<ImTextureID>(m_textures[0].Get()), ImVec2{ -1, -1 }, ImVec2{ 1, 1 });
				drawList.AddCallback(&secondPass, this);
				drawList.AddImage(reinterpret_cast<ImTextureID>(m_textures[1].Get()), ImVec2{ -1, -1 }, ImVec2{ 1, 1 });
			}
			drawList.AddCallback(&end, this);
			drawList.AddCallback(ImDrawCallback_ResetRenderState, nullptr);
			drawList.AddImage(reinterpret_cast<ImTextureID>(m_textures[0].Get()), ImVec2{}, io.DisplaySize);
		}

		virtual void reset() noexcept override
		{
			for (auto i = 0; i < IM_ARRAYSIZE(m_textures); i++)
				m_textures->Reset();
			for (auto i = 0; i < IM_ARRAYSIZE(m_surfaces); i++)
				m_surfaces->Reset();
			for (auto i = 0; i < IM_ARRAYSIZE(m_shaders); i++)
				m_shaders->Reset();
			m_renderTarget.Reset();
			m_backBuffer.Reset();
		}

	private:
		static void begin(const ImDrawList*, const ImDrawCmd* cmd) noexcept
		{
			BlurD3D9& data = *static_cast<BlurD3D9*>(cmd->UserCallbackData);
			const auto& io = ImGui::GetIO();
			const auto device = *static_cast<IDirect3DDevice9**>(io.BackendRendererUserData);

			if (!data.m_renderTarget)
				device->GetRenderTarget(0, data.m_renderTarget.GetAddressOf());
			if (!data.m_backBuffer)
				device->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, data.m_backBuffer.GetAddressOf());
			if (!data.m_surfaces[0].Get())
				data.m_textures[0]->GetSurfaceLevel(0, data.m_surfaces[0].GetAddressOf());

			const D3DMATRIX projection
			{ {{
				1.f, 0.f, 0.f, 0.f,
				0.f, 1.f, 0.f, 0.f,
				0.f, 0.f, 1.f, 0.f,
				-1.f / data.m_size[0], 1.f / data.m_size[1], 0.f, 1.f
			}} };
			device->StretchRect(data.m_backBuffer.Get(), nullptr, data.m_surfaces[0].Get(), nullptr, D3DTEXF_LINEAR);
			device->SetSamplerState(0, D3DSAMP_ADDRESSU, D3DTADDRESS_CLAMP);
			device->SetSamplerState(0, D3DSAMP_ADDRESSV, D3DTADDRESS_CLAMP);
			device->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
			device->SetVertexShaderConstantF(0, &projection.m[0][0], 4);
		}

		static void firstPass(const ImDrawList*, const ImDrawCmd* cmd) noexcept
		{
			BlurD3D9& data = *static_cast<BlurD3D9*>(cmd->UserCallbackData);
			const auto& io = ImGui::GetIO();
			const auto device = *static_cast<LPDIRECT3DDEVICE9*>(io.BackendRendererUserData);
			const float params[4] = { 1.f / data.m_size[0] };

			if (!data.m_surfaces[1].Get())
				data.m_textures[1]->GetSurfaceLevel(0, data.m_surfaces[1].GetAddressOf());

			device->SetPixelShader(data.m_shaders[0].Get());
			device->SetPixelShaderConstantF(0, params, 1);
			device->SetRenderTarget(0, data.m_surfaces[1].Get());
		};

		static void secondPass(const ImDrawList*, const ImDrawCmd* cmd) noexcept
		{
			BlurD3D9& data = *static_cast<BlurD3D9*>(cmd->UserCallbackData);
			const auto& io = ImGui::GetIO();
			const auto device = *static_cast<LPDIRECT3DDEVICE9*>(io.BackendRendererUserData);
			const float params[4] = { 1.f / data.m_size[1] };

			if (!data.m_surfaces[0].Get())
				data.m_textures[0]->GetSurfaceLevel(0, data.m_surfaces[0].GetAddressOf());

			device->SetPixelShader(data.m_shaders[1].Get());
			device->SetPixelShaderConstantF(0, params, 1);
			device->SetRenderTarget(0, data.m_surfaces[0].Get());
		};

		static void end(const ImDrawList*, const ImDrawCmd* cmd) noexcept
		{
			BlurD3D9& data = *static_cast<BlurD3D9*>(cmd->UserCallbackData);
			const auto device = *static_cast<LPDIRECT3DDEVICE9*>(ImGui::GetIO().BackendRendererUserData);

			device->SetPixelShader(nullptr);
			device->SetRenderTarget(0, data.m_renderTarget.Get());
			device->SetRenderState(D3DRS_SCISSORTESTENABLE, true);
		};

	private:
		INT m_size[2]{};
		ComPtr<IDirect3DTexture9> m_textures[2];
		ComPtr<IDirect3DSurface9> m_surfaces[2];
		ComPtr<IDirect3DPixelShader9> m_shaders[2];
		ComPtr<IDirect3DSurface9> m_renderTarget;
		ComPtr<IDirect3DSurface9> m_backBuffer;
	};

	struct BlurD3D11 : Gui::PostProcess
	{
	private:
		enum DataType
		{
			PS_BLOOM_COMBINE = 0,
			PS_BLOOM_EXTRACT = 1,
			PS_GAUSSIAN_BLUR = 2,

			CB_BLOOM_PARAMS = 0,
			CB_BLUR_PARAMS_WIDTH = 1,
			CB_BLUR_PARAMS_HEIGHT = 2,

			RT_COPY = 0,
			RT_FIRST_PASS = 1,
			RT_SECOND_PASS = 2,

			DATA_MAX = 3
		};

		struct DeviceResource
		{
			constexpr void emplace(ID3D11DeviceContext& ctx) noexcept
			{
				ctx.OMGetRenderTargets(1, m_renderTargetView.GetAddressOf(), m_depthStencilView.GetAddressOf());
				m_renderTargetView->GetResource(reinterpret_cast<ID3D11Resource**>(m_renderTarget.GetAddressOf()));
			}
			void reset() noexcept
			{
				m_renderTarget.Reset();
				m_renderTargetView.Reset();
				m_depthStencilView.Reset();
			}
			operator bool() const noexcept { return m_renderTarget.Get() != nullptr; }
			auto getRenderTarget() const noexcept { return m_renderTarget.Get(); }
			auto getRenderTargetView() const noexcept { return m_renderTargetView.GetAddressOf(); }
			auto getDepthStencilView() const noexcept { return m_depthStencilView.GetAddressOf(); }
		private:
			ComPtr<ID3D11Texture2D> m_renderTarget;
			ComPtr<ID3D11RenderTargetView> m_renderTargetView;
			ComPtr<ID3D11DepthStencilView> m_depthStencilView;
		};

		struct RenderTexture
		{
			void emplace(ID3D11Device& device, const DeviceResource& resource) noexcept
			{
				const auto renderTarget = resource.getRenderTarget();

				D3D11_TEXTURE2D_DESC desc;
				renderTarget->GetDesc(&desc);

				m_size.x = static_cast<float>(desc.Width);
				m_size.y = static_cast<float>(desc.Height);

				desc = CD3D11_TEXTURE2D_DESC{
					resolveFormat(desc.Format),
					desc.Width,
					desc.Height,
					desc.ArraySize,
					desc.MipLevels,
					desc.BindFlags | D3D11_BIND_FLAG::D3D11_BIND_RENDER_TARGET | D3D11_BIND_FLAG::D3D11_BIND_SHADER_RESOURCE,
					desc.Usage,
					desc.CPUAccessFlags,
					desc.MiscFlags | D3D11_RESOURCE_MISC_FLAG::D3D11_RESOURCE_MISC_GENERATE_MIPS
				};

				createTexture(device, desc);
			}

			void emplace(ID3D11Device& device, const DeviceResource& resource, const ImVec2& size) noexcept
			{
				const auto renderTarget = resource.getRenderTarget();

				D3D11_TEXTURE2D_DESC desc;
				renderTarget->GetDesc(&desc);

				m_size.x = static_cast<float>(desc.Width);
				m_size.y = static_cast<float>(desc.Height);

				desc = CD3D11_TEXTURE2D_DESC{
					resolveFormat(desc.Format),
					static_cast<UINT>(size.x),
					static_cast<UINT>(size.y),
					desc.ArraySize,
					desc.MipLevels,
					desc.BindFlags | D3D11_BIND_FLAG::D3D11_BIND_RENDER_TARGET | D3D11_BIND_FLAG::D3D11_BIND_SHADER_RESOURCE,
					desc.Usage,
					desc.CPUAccessFlags,
					desc.MiscFlags | D3D11_RESOURCE_MISC_FLAG::D3D11_RESOURCE_MISC_GENERATE_MIPS
				};

				createTexture(device, desc);
			}

			void reset() noexcept
			{
				m_size = {};
				m_renderTarget.Reset();
				m_renderTargetView.Reset();
				m_shaderResourceView.Reset();
			}

			constexpr auto getSize() const noexcept { return m_size; }
			auto getRenderTarget() const noexcept { return m_renderTarget.Get(); }
			auto getRenderTargetView() const noexcept { return m_renderTargetView.Get(); }
			auto getShaderResourceView() const noexcept { return m_shaderResourceView.Get(); }

		private:
			static constexpr DXGI_FORMAT resolveFormat(DXGI_FORMAT format) noexcept
			{
				switch (format) {
				case DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_TYPELESS:
					return DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM;
				}
				return format;
			}

			void createTexture(ID3D11Device& device, const D3D11_TEXTURE2D_DESC& desc) noexcept
			{
				CD3D11_RENDER_TARGET_VIEW_DESC rtvDsc{
					D3D11_RTV_DIMENSION::D3D11_RTV_DIMENSION_TEXTURE2D,
					desc.Format };
				CD3D11_SHADER_RESOURCE_VIEW_DESC srvDsc{
					D3D11_SRV_DIMENSION::D3D11_SRV_DIMENSION_TEXTURE2D,
					desc.Format, 0, desc.MipLevels };

				device.CreateTexture2D(&desc, nullptr, m_renderTarget.GetAddressOf());
				device.CreateRenderTargetView(m_renderTarget.Get(), &rtvDsc, &m_renderTargetView);
				device.CreateShaderResourceView(m_renderTarget.Get(), &srvDsc, &m_shaderResourceView);
			}

			ImVec2 m_size = {};
			ComPtr<ID3D11Texture2D> m_renderTarget;
			ComPtr<ID3D11RenderTargetView> m_renderTargetView;
			ComPtr<ID3D11ShaderResourceView> m_shaderResourceView;
		};

		struct PixelShader
		{
			constexpr void emplace(ID3D11Device& device, const void* data, SIZE_T size) noexcept { device.CreatePixelShader(data, size, nullptr, m_pixelShader.GetAddressOf()); }
			void reset() noexcept { m_pixelShader.Reset(); }
			auto getPixelShader() const noexcept { return m_pixelShader.Get(); }
		private:
			ComPtr<ID3D11PixelShader> m_pixelShader;
		};

		struct ConstantBuffer
		{
			void emplace(ID3D11Device& device, std::size_t size) noexcept
			{
				CD3D11_BUFFER_DESC desc{ static_cast<UINT>(size),
					D3D11_BIND_FLAG::D3D11_BIND_CONSTANT_BUFFER };

				device.CreateBuffer(&desc, nullptr, m_buffer.GetAddressOf());
			}

			void emplace(ID3D11Device& device, std::size_t size, const D3D11_SUBRESOURCE_DATA& data) noexcept
			{
				CD3D11_BUFFER_DESC desc{ static_cast<UINT>(size),
					D3D11_BIND_FLAG::D3D11_BIND_CONSTANT_BUFFER };
				device.CreateBuffer(&desc, &data, m_buffer.GetAddressOf());
			}

			void reset() noexcept { m_buffer.Reset(); }
			auto getBuffer() const noexcept { return m_buffer.Get(); }
			auto getAddressOf() const noexcept { return m_buffer.GetAddressOf(); }

		private:
			ComPtr<ID3D11Buffer> m_buffer;
		};

		DeviceResource m_deviceResource;
		RenderTexture m_renderTarget[DATA_MAX];
		PixelShader m_pixelShader[DATA_MAX];
		ConstantBuffer m_constantBuffer[DATA_MAX];

	public:
		virtual void draw() noexcept override
		{
			auto& drawList = *ImGui::GetWindowDrawList();
			const auto rtSRV = m_renderTarget[RT_COPY].getShaderResourceView();

			if (!m_deviceResource) {
				constexpr float multiplier{ 1.f };

				const auto& io = ImGui::GetIO();
				auto&& data = *static_cast<ImGui_ImplDX11_Data*>(io.BackendRendererUserData);

				struct VS_BLOOM_PARAMETERS
				{
					float bloomThreshold;
					float blurAmount;
					float bloomIntensity;
					float baseIntensity;
					float bloomSaturation;
					float baseSaturation;
					uint8_t na[8];
				};

				static_assert(!(sizeof(VS_BLOOM_PARAMETERS) % 16), "VS_BLOOM_PARAMETERS needs to be 16 bytes aligned");

				constexpr size_t SAMPLE_COUNT = 15;

				struct VS_BLUR_PARAMETERS
				{
					struct XMFLOAT4
					{
						float x = {};
						float y = {};
						float z = {};
						float w = {};

						constexpr XMFLOAT4() noexcept = default;

						constexpr XMFLOAT4(const XMFLOAT4&) noexcept = delete;
						constexpr XMFLOAT4& operator=(const XMFLOAT4&) noexcept = delete;

						constexpr XMFLOAT4(XMFLOAT4&&) noexcept = delete;
						constexpr XMFLOAT4& operator=(XMFLOAT4&&) noexcept = delete;
					};

					struct Vector2
					{
						constexpr Vector2(float x, float y) noexcept : x{ x }, y{ y } {}
						constexpr auto operator*=(float a) noexcept { x *= a; y *= a; }
						float x, y;
					};

					XMFLOAT4 sampleOffsets[SAMPLE_COUNT];
					XMFLOAT4 sampleWeights[SAMPLE_COUNT];

					VS_BLUR_PARAMETERS(float dx, float dy, const VS_BLOOM_PARAMETERS& params) noexcept
					{
						sampleWeights[0].x = computeGaussian(0, params.blurAmount);
						sampleOffsets[0].x = sampleOffsets[0].y = 0.f;

						auto totalWeights = sampleWeights[0].x;

						// Add pairs of additional sample taps, positioned
						// along a line in both directions from the center.
						for (std::size_t i = 0; i < (SAMPLE_COUNT / 2); i++)
						{
							// Store weights for the positive and negative taps.
							auto weight = computeGaussian(static_cast<float>(i + 1), params.blurAmount);

							sampleWeights[i * 2 + 1].x = weight;
							sampleWeights[i * 2 + 2].x = weight;

							totalWeights += weight * 2;

							// To get the maximum amount of blurring from a limited number of
							// pixel shader samples, we take advantage of the bilinear filtering
							// hardware inside the texture fetch unit. If we position our texture
							// coordinates exactly halfway between two texels, the filtering unit
							// will average them for us, giving two samples for the price of one.
							// This allows us to step in units of two texels per sample, rather
							// than just one at a time. The 1.5 offset kicks things off by
							// positioning us nicely in between two texels.
							auto sampleOffset = static_cast<float>(i) * 2.f + 1.5f;

							Vector2 delta{ dx, dy };
							delta *= sampleOffset;

							// Store texture coordinate offsets for the positive and negative taps.
							sampleOffsets[i * 2 + 1].x = delta.x;
							sampleOffsets[i * 2 + 1].y = delta.y;
							sampleOffsets[i * 2 + 2].x = -delta.x;
							sampleOffsets[i * 2 + 2].y = -delta.y;
						}

						for (std::size_t i = 0; i < SAMPLE_COUNT; i++)
							sampleWeights[i].x /= totalWeights;
					}

				private:
					static float computeGaussian(float n, float theta) noexcept
					{
						return (1.f / std::sqrtf(2.f * 3.141592654f * theta)) * std::expf(-(n * n) / (2.f * theta * theta));
					}
				};

				static_assert(!(sizeof(VS_BLUR_PARAMETERS) % 16), "VS_BLUR_PARAMETERS needs to be 16 bytes aligned");
				enum BloomPresets
				{
					Default = 0,
					Soft,
					Desaturated,
					Saturated,
					Blurry,
					Subtle,
					None,
					Custom
				};
				constexpr BloomPresets g_Bloom = Custom;
				static constexpr VS_BLOOM_PARAMETERS g_BloomPresets[] =
				{
					//Thresh	Blur	Bloom	Base	BloomSat	BaseSat
					{ 0.25f,	4,		1.25f,	1,		1,			1 }, // Default
					{ 0,		3,		1,		1,		1,			1 }, // Soft
					{ 0.5f,		8,		2,		1,		0,			1 }, // Desaturated
					{ 0.25f,	4,		2,		1,		2,			0 }, // Saturated
					{ 0,		2,		1,		.1f,	1,			1 }, // Blurry
					{ 0.5f,		2,		1,		1,		1,			1 }, // Subtle
					{ 0.25f,	4,		1.25f,	1,		1,			1 }, // None
					{ 0,		8,		1,		.1f,	1,			1 }, // Custom
				};


				m_deviceResource.emplace(*data.pd3dDeviceContext);
				m_pixelShader[PS_BLOOM_COMBINE].emplace(*data.pd3dDevice, bloom_combine, IM_ARRAYSIZE(bloom_combine));
				m_pixelShader[PS_BLOOM_EXTRACT].emplace(*data.pd3dDevice, bloom_extract, IM_ARRAYSIZE(bloom_extract));
				m_pixelShader[PS_GAUSSIAN_BLUR].emplace(*data.pd3dDevice, gaussian_blur, IM_ARRAYSIZE(gaussian_blur));
				m_renderTarget[RT_COPY].emplace(*data.pd3dDevice, m_deviceResource);
				m_renderTarget[RT_FIRST_PASS].emplace(*data.pd3dDevice, m_deviceResource, io.DisplaySize * multiplier);
				m_renderTarget[RT_SECOND_PASS].emplace(*data.pd3dDevice, m_deviceResource, io.DisplaySize * multiplier);
				m_constantBuffer[CB_BLOOM_PARAMS].emplace(*data.pd3dDevice, sizeof(VS_BLOOM_PARAMETERS), D3D11_SUBRESOURCE_DATA{ &g_BloomPresets[g_Bloom], 0, 0 });
				m_constantBuffer[CB_BLUR_PARAMS_WIDTH].emplace(*data.pd3dDevice, sizeof(VS_BLUR_PARAMETERS));
				m_constantBuffer[CB_BLUR_PARAMS_HEIGHT].emplace(*data.pd3dDevice, sizeof(VS_BLUR_PARAMETERS));

				data.pd3dDeviceContext->UpdateSubresource(m_constantBuffer[CB_BLOOM_PARAMS].getBuffer(), 0, nullptr, &g_BloomPresets[g_Bloom], 0, 0);

				VS_BLUR_PARAMETERS blurDataWidth{ 1.f / (io.DisplaySize.x * multiplier), 0, g_BloomPresets[g_Bloom] };
				data.pd3dDeviceContext->UpdateSubresource(m_constantBuffer[CB_BLUR_PARAMS_WIDTH].getBuffer(), 0, nullptr, &blurDataWidth, sizeof(VS_BLUR_PARAMETERS), 0);

				VS_BLUR_PARAMETERS blurDataheight{ 0, 1.f / (io.DisplaySize.y * multiplier), g_BloomPresets[g_Bloom] };
				data.pd3dDeviceContext->UpdateSubresource(m_constantBuffer[CB_BLUR_PARAMS_HEIGHT].getBuffer(), 0, nullptr, &blurDataheight, sizeof(VS_BLUR_PARAMETERS), 0);
			}

			// scene -> RT1 (downsample)
			drawList.AddCallback(
				[](const ImDrawList*, const ImDrawCmd* cmd) noexcept {
					auto& data = *static_cast<BlurD3D11*>(cmd->UserCallbackData);
					auto&& ctx = *static_cast<ImGui_ImplDX11_Data*>(ImGui::GetIO().BackendRendererUserData)->pd3dDeviceContext;
					const auto rt1RT = data.m_renderTarget[RT_FIRST_PASS].getRenderTargetView();
					ctx.CopyResource(data.m_renderTarget[RT_COPY].getRenderTarget(), data.m_deviceResource.getRenderTarget());
					ctx.OMSetRenderTargets(1, &rt1RT, nullptr);
					ctx.PSSetShader(data.m_pixelShader[PS_BLOOM_EXTRACT].getPixelShader(), nullptr, 0);
					ctx.PSSetConstantBuffers(0, 1, data.m_constantBuffer[CB_BLOOM_PARAMS].getAddressOf());
				}, this);
			drawList.AddImage(rtSRV, ImVec2{}, m_renderTarget[RT_FIRST_PASS].getSize());

			// RT1 -> RT2 (blur horizontal)
			drawList.AddCallback(
				[](const ImDrawList*, const ImDrawCmd* cmd) noexcept {
					auto& data = *static_cast<BlurD3D11*>(cmd->UserCallbackData);
					auto&& ctx = *static_cast<ImGui_ImplDX11_Data*>(ImGui::GetIO().BackendRendererUserData)->pd3dDeviceContext;
					const auto rt2RT = data.m_renderTarget[RT_SECOND_PASS].getRenderTargetView();
					ctx.OMSetRenderTargets(1, &rt2RT, nullptr);
					ctx.PSSetShader(data.m_pixelShader[PS_GAUSSIAN_BLUR].getPixelShader(), nullptr, 0);
					ctx.PSSetConstantBuffers(0, 1, data.m_constantBuffer[CB_BLUR_PARAMS_WIDTH].getAddressOf());
				}, this);
			drawList.AddImage(m_renderTarget[RT_FIRST_PASS].getShaderResourceView(), ImVec2{}, m_renderTarget[RT_FIRST_PASS].getSize());

			// RT2 -> RT1 (blur vertical)
			drawList.AddCallback(
				[](const ImDrawList*, const ImDrawCmd* cmd) noexcept {
					auto& data = *static_cast<BlurD3D11*>(cmd->UserCallbackData);
					auto&& ctx = *static_cast<ImGui_ImplDX11_Data*>(ImGui::GetIO().BackendRendererUserData)->pd3dDeviceContext;
					const auto rt1RT = data.m_renderTarget[RT_FIRST_PASS].getRenderTargetView();
					ctx.OMSetRenderTargets(1, &rt1RT, nullptr);
					ctx.PSSetShader(data.m_pixelShader[PS_GAUSSIAN_BLUR].getPixelShader(), nullptr, 0);
					ctx.PSSetConstantBuffers(0, 1, data.m_constantBuffer[CB_BLUR_PARAMS_HEIGHT].getAddressOf());
				}, this);
			drawList.AddImage(m_renderTarget[RT_SECOND_PASS].getShaderResourceView(), ImVec2{}, m_renderTarget[RT_SECOND_PASS].getSize());

			// RT1 + scene
			drawList.AddCallback(
				[](const ImDrawList*, const ImDrawCmd* cmd) noexcept {
					auto& data = *static_cast<BlurD3D11*>(cmd->UserCallbackData);
					auto&& ctx = *static_cast<ImGui_ImplDX11_Data*>(ImGui::GetIO().BackendRendererUserData)->pd3dDeviceContext;
					const auto rt1SRV = data.m_renderTarget[RT_FIRST_PASS].getShaderResourceView();
					ctx.OMSetRenderTargets(1, data.m_deviceResource.getRenderTargetView(), *data.m_deviceResource.getDepthStencilView());
					ctx.PSSetShader(data.m_pixelShader[PS_BLOOM_COMBINE].getPixelShader(), nullptr, 0);
					ctx.PSSetConstantBuffers(0, 1, data.m_constantBuffer[CB_BLOOM_PARAMS].getAddressOf());
					ctx.PSSetShaderResources(1, 1, &rt1SRV);
				}, this);
			drawList.AddImage(rtSRV, ImVec2{}, m_renderTarget[RT_COPY].getSize());

			drawList.AddCallback(ImDrawCallback_ResetRenderState, nullptr);
		}

		virtual void reset() noexcept override
		{
			m_deviceResource.reset();
			for (int i = 0; i < DATA_MAX; i++) {
				m_renderTarget[i].reset();
				m_pixelShader[i].reset();
				m_constantBuffer[i].reset();
			}
		}
	};
}

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

	switch (app.getRenderer().getType()) {

	case Orion::Module::Renderer::Type::D3D9:
	{
		m_postProcess = std::make_unique<BlurD3D9>();
	}
	break;

	case Orion::Module::Renderer::Type::D3D11:
	{
		m_postProcess = std::make_unique<BlurD3D11>();
	}
	break;
	}
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

	m_io.MouseDrawCursor = m_alpha > 0;

	if (!m_io.MouseDrawCursor)
		return;

	if (Menu menu{ *this, m_alpha, m_fonts.arialbd_15 }) {
		if (Menu::Header header{}) {
			if (Menu::Header::Nav nav{ *this }) {
				if (Menu::Header::Nav::Items items{ *this }) {
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
				Menu::Body::Top::Save(m_app.getConfig());
				if (Menu::Tab tab{ *this, Orion::Fnv<"Configs">::value }) {
					Menu::Body::Top::Combo<"Name\0Date Modified\0">(m_app.getConfig());
					Menu::Body::Top::Create(m_app.getConfig());
				}
			}
			if (Menu::Body::Content content{}) {
				if (Menu::Body::Content::Main main{}) {
					if (Menu::Tab tab{ *this, Orion::Fnv<"Configs">::value }) {
						if (Menu::Body::Content::Main::Panel panel{ *this }) {
							Menu::Body::Content::Main::Panel::Config config{ m_app, *this };
						}
					}

					else if (Menu::Tab tab{ *this, Orion::Fnv<"Main">::value }) {
						if (Menu::Body::Content::Main::Panel panel{ *this }) {
							if (Menu::Body::Content::Main::Panel::Table table{}) {
								if (Menu::Body::Content::Main::Panel::Table::Group<"General"> group{ *this }) {
									if (Menu::Body::Content::Main::Panel::Table::Widget widget{ *this }) {
										static bool boolean[4];
										static float color[8];
										static int value[4];
										widget.Toggle<"Unlimited Blade">(boolean[0], &color[0], m_colorReference, &m_popupAlpha);
										widget.Toggle<"Unlimited Works">(boolean[1]);
										widget.Combo<"Hitbox", "Head\0Neck\0Body\0Legs\0Arms\0">(value[0]);
										widget.Combo<"Hitbox2", "Head\0Neck\0Body\0Legs\0Arms\0">(value[1]);
										widget.MultiCombo<"Hitbox", "Head\0Neck\0Body\0Legs\0">(boolean);
										widget.MultiCombo<"Hitbox2", "Head\0Neck\0Body\0Legs\0">(boolean);
									}
								}
								if (Menu::Body::Content::Main::Panel::Table::Group<"Movement"> group{ *this }) {
									if (Menu::Body::Content::Main::Panel::Table::Widget widget{ *this }) {
										static bool boolean[4];
										static float color[8];
										static int value[4];
										widget.Toggle<"Unlimited Blade">(boolean[0], &color[0], m_colorReference, &m_popupAlpha);
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
	m_postProcess->reset();
}

void Gui::toggle() noexcept
{
	m_open = !m_open;
}