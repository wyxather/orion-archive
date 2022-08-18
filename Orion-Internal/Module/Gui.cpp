#include "Gui.h"
#include "Resources/Fonts/arialbd.h"
#include "Resources/Fonts/ariblk.h"
#include "Resources/Fonts/fontawesome.h"

namespace
{
	struct Style
	{
		Style(ImGuiStyleVar style, const ImVec2& value) noexcept
		{
			ImGui::PushStyleVar(style, value);
		}

		Style(ImGuiStyleVar style, float value) noexcept
		{
			ImGui::PushStyleVar(style, value);
		}

		~Style() noexcept
		{
			ImGui::PopStyleVar();
		}
	};

	struct Component
	{
		constexpr operator bool() const noexcept
		{
			return m_value;
		}

		constexpr void Draw(bool value) noexcept
		{
			m_value = value;
		}

	private:
		bool m_value = {};
	};

	struct Menu : Component
	{
		Menu() noexcept
		{
			Orion::String<"##Menu"> id;

			const Style style[] = {
				{ ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2{} },
				{ ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2{ 2, 0 } },
				{ ImGuiStyleVar_::ImGuiStyleVar_WindowBorderSize, 0 },
				{ ImGuiStyleVar_::ImGuiStyleVar_WindowRounding, 2 },
			};

			Component::Draw(ImGui::Begin(id.get()));
		}

		 ~Menu() noexcept
		{
			ImGui::End();
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
	m_fonts.profile_15 = io.Fonts->AddFontFromMemoryCompressedTTF(arialbd_compressed_data, arialbd_compressed_size, 15);
	m_fonts.navbar_15 = io.Fonts->AddFontFromMemoryCompressedTTF(arialbd_compressed_data, arialbd_compressed_size, 15);
	m_fonts.ariblk_37 = io.Fonts->AddFontFromMemoryCompressedTTF(ariblk_compressed_data, ariblk_compressed_size, 37);
}

Gui::~Gui() noexcept
{
}

void Gui::draw() const noexcept
{
	if (Menu menu{}) {

	}
}

void Gui::invalidate() noexcept
{
}

void Gui::toggle() noexcept
{
	m_open = !m_open;
}