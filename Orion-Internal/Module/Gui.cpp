#include "Gui.h"

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

	auto& IO = ImGui::GetIO();
	IO.IniFilename = nullptr;
	IO.LogFilename = nullptr;
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