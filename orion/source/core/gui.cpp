#include "source/core/gui.h"

#include "source/core/gui/gui_builder.h"
#include "source/resources/fonts/museosanscyrl.h"

using orion::core::Gui;
using orion::core::gui::Body;

Gui::Gui() noexcept
{
    Gui::setup_io();
    Gui::setup_style();
    Gui::setup_fonts();
}

auto Gui::setup_io() const noexcept -> void
{
    auto&& io = ImGui::GetIO();
    io.IniFilename = nullptr;
    io.LogFilename = nullptr;
}

auto Gui::setup_style() const noexcept -> void
{
    ImGui::StyleColorsDark();

    auto&& style = ImGui::GetStyle();
    style.WindowShadowSize = 25.0f;

    auto&& colors = style.Colors;
    colors[ImGuiCol_WindowShadow] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
}

auto Gui::setup_fonts() noexcept -> void
{
    constexpr auto get_font_glyph_ranges = []() noexcept {
        static ImVector<ImWchar> ranges;

        if (!ranges.empty())
            return ranges.Data;

        auto&& imgui_fonts = *ImGui::GetIO().Fonts;
        ImFontGlyphRangesBuilder builder;
        constexpr std::array<ImWchar, 9> base_ranges{0x0100,
                                                     0x024F, // Latin Extended-A + Latin Extended-B
                                                     0x0300,
                                                     0x03FF, // Combining Diacritical Marks + Greek/Coptic
                                                     0x0600,
                                                     0x06FF, // Arabic
                                                     0x0E00,
                                                     0x0E7F, // Thai
                                                     0};
        builder.AddRanges(base_ranges.data());
        builder.AddRanges(imgui_fonts.GetGlyphRangesCyrillic());
        builder.AddRanges(imgui_fonts.GetGlyphRangesChineseSimplifiedCommon());
        builder.AddText("\u9F8D\u738B\u2122");
        builder.BuildRanges(&ranges);

        return ranges.Data;
    };

    auto&& imgui_fonts = *ImGui::GetIO().Fonts;

    Gui::fonts.factory = imgui_fonts.AddFontFromMemoryCompressedTTF(
        resources::fonts::museosanscyrl_700_compressed_data.data(), resources::fonts::museosanscyrl_700_compressed_size,
        15.0f, nullptr, get_font_glyph_ranges());
    {
        ImFontConfig cfg;
        cfg.MergeMode = true;
        imgui_fonts.AddFontFromMemoryCompressedTTF(resources::fonts::fa_compressed_data.data(),
                                                   resources::fonts::fa_compressed_size, 13.0f, &cfg,
                                                   FontAwesome::range);
    }

    Gui::fonts.navbar =
        imgui_fonts.AddFontFromMemoryCompressedTTF(resources::fonts::museosanscyrl_700_compressed_data.data(),
                                                   resources::fonts::museosanscyrl_700_compressed_size, 16.0f);
    {
        ImFontConfig cfg;
        cfg.MergeMode = true;
        cfg.GlyphOffset = ImVec2(16.0f, 0.0f);
        cfg.GlyphExtraSpacing = ImVec2(36.0f, 0.0f);
        cfg.GlyphMinAdvanceX = cfg.GlyphMaxAdvanceX = 0.0f;
        imgui_fonts.AddFontFromMemoryCompressedTTF(resources::fonts::fa_compressed_data.data(),
                                                   resources::fonts::fa_compressed_size, 14.0f, &cfg,
                                                   FontAwesome::range);
    }

    Gui::fonts.profile =
        imgui_fonts.AddFontFromMemoryCompressedTTF(resources::fonts::museosanscyrl_700_compressed_data.data(),
                                                   resources::fonts::museosanscyrl_700_compressed_size, 15.0f);
    {
        ImFontConfig cfg;
        cfg.MergeMode = true;
        cfg.GlyphOffset = ImVec2(0.0f, 0.0f);
        cfg.GlyphExtraSpacing = ImVec2(0.0f, 0.0f);
        cfg.GlyphMinAdvanceX = cfg.GlyphMaxAdvanceX = 0.0f;
        imgui_fonts.AddFontFromMemoryCompressedTTF(resources::fonts::fa_compressed_data.data(),
                                                   resources::fonts::fa_compressed_size, 15.0f, &cfg,
                                                   FontAwesome::range);
    }

    Gui::fonts.watermark =
        imgui_fonts.AddFontFromMemoryCompressedTTF(resources::fonts::museosanscyrl_900_compressed_data.data(),
                                                   resources::fonts::museosanscyrl_900_compressed_size, 32.0f);

    Gui::fonts.head = imgui_fonts.AddFontFromMemoryCompressedTTF(
        resources::fonts::museosanscyrl_700_compressed_data.data(), resources::fonts::museosanscyrl_700_compressed_size,
        17.0f, nullptr, get_font_glyph_ranges());
    {
        ImFontConfig cfg;
        cfg.MergeMode = true;
        imgui_fonts.AddFontFromMemoryCompressedTTF(resources::fonts::fa_compressed_data.data(),
                                                   resources::fonts::fa_compressed_size, 15.0f, &cfg,
                                                   FontAwesome::range);
    }
}

auto Gui::animate_alpha() noexcept -> void
{
    if (Gui::open == true)
    {
        if (Gui::alpha < 1.0f)
            Gui::alpha = std::clamp(Gui::alpha + ImGui::GetIO().DeltaTime * Gui::animation_speed, 0.0f, 1.0f);
    }
    else
    {
        if (Gui::alpha > 0.0f)
            Gui::alpha = std::clamp(Gui::alpha - ImGui::GetIO().DeltaTime * Gui::animation_speed, 0.0f, 1.0f);
    }
}

auto Gui::on_close() const noexcept -> void
{
    ImGui::GetIO().MouseDrawCursor = false;
}

auto Gui::on_animating() noexcept -> void
{
    Gui::animating = true;
    Gui::alpha_animated = utilities::math::easing::in_out_quart(Gui::alpha);
    Gui::size_animated = Gui::size * Gui::alpha_animated;
    Gui::position_animated = Gui::position + (Gui::size - Gui::size_animated) * 0.5f;
    ImGui::SetNextWindowPos(Gui::position_animated, ImGuiCond_::ImGuiCond_Always);
    ImGui::GetIO().MouseDrawCursor = false;
}

auto Gui::on_open() noexcept -> void
{
    Gui::animating = false;
    Gui::alpha_animated = Gui::alpha;
    Gui::size_animated = Gui::size;
    ImGui::GetIO().MouseDrawCursor = true;
}

auto Gui::init() noexcept -> void
{
    Gui::position = (ImGui::GetIO().DisplaySize - Gui::size) * 0.5f;

    switch (orion.get_renderer().get_type())
    {
    case core::Renderer::Type::DirectX11: {
        Gui::post_process = std::make_unique<core::gui::BlurD3D11>();
        break;
    }
    case core::Renderer::Type::DirectX9: {
        Gui::post_process = std::make_unique<core::gui::BlurD3D9>();
        break;
    }
    }
}

auto Gui::begin() const noexcept -> void
{
    ImGui::SetNextWindowSize(Gui::size_animated, ImGuiCond_::ImGuiCond_Always);

    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_Alpha, Gui::alpha_animated);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_DisabledAlpha, Gui::alpha_animated);

    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowPadding, ImVec2());
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_ItemSpacing, ImVec2(2.0f, 0.0f));
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowBorderSize, 0.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_WindowRounding, Gui::rounding);
    ImGui::PushStyleColor(ImGuiCol_::ImGuiCol_WindowBg, ImVec4());

    ImGui::BeginDisabled(Gui::animating);
    ImGui::Begin(String<"Gui">().c_str(), nullptr,
                 ImGuiWindowFlags_::ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav |
                     ImGuiWindowFlags_::ImGuiWindowFlags_NoSavedSettings |
                     ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse);
}

auto Gui::end() const noexcept -> void
{
    ImGui::End();
    ImGui::EndDisabled();
    ImGui::PopStyleColor();
    ImGui::PopStyleVar(4);
    ImGui::PopStyleVar(2);
}

auto Gui::update_position() noexcept -> void
{
    if (!Gui::animating)
        Gui::position = ImGui::GetWindowPos();
}

auto Gui::draw() noexcept -> void
{
    Gui::animate_alpha();

    if (Gui::alpha <= 0.0f)
        return Gui::on_close();

    if (Gui::alpha < 1.0f)
        Gui::on_animating();
    else
        Gui::on_open();

    Gui::begin();
    Gui::update_position();
    Gui::post_process->draw(Gui::get_position(), Gui::get_position() + Gui::get_size(), Gui::rounding);
    Gui::builder();
    Gui::end();
}

auto Gui::builder() noexcept -> void
{
    if (gui::Header header{})
    {
        if (gui::Header::Nav nav{})
        {
            if (gui::Header::Nav::Items items{})
            {
                items.text<"Aimbot">();
                items.button<"Ragebot">(FontAwesome::get<FontAwesome::Type::Crosshairs>());
                items.button<"Anti Aim">(FontAwesome::get<FontAwesome::Type::RotateLeft>());
                items.button<"Legitbot">(FontAwesome::get<FontAwesome::Type::ComputerMouse>());
                items.text<"Visuals">();
                items.button<"Players">(FontAwesome::get<FontAwesome::Type::User>());
                items.button<"Weapons">(FontAwesome::get<FontAwesome::Type::Gun>());
                items.button<"Grenades">(FontAwesome::get<FontAwesome::Type::Bomb>());
                items.button<"World">(FontAwesome::get<FontAwesome::Type::GlobeAsia>());
                items.button<"View">(FontAwesome::get<FontAwesome::Type::Binoculars>());
                items.text<"Miscellaneous">();
                items.button<"Main">(FontAwesome::get<FontAwesome::Type::ScrewdriverWrench>());
                items.button<"Inventory">(FontAwesome::get<FontAwesome::Type::Backpack>());
                items.button<"Scripts">(FontAwesome::get<FontAwesome::Type::Code>());
                items.button<"Configs">(FontAwesome::get<FontAwesome::Type::Gear>());
            }
        }
    }
    if (Body body{})
    {
        if (Body::Head head{})
        {
            head.save();
            if (Body::Head::Content content{Fnv1a<"Configs">::value})
            {
                if (head.combo<"Name\0Date Modified\0">(orion.get_config().get_sort()))
                {
                    orion.get_config().update();
                }
                head.create();
            }
        }
        if (Body::Content content{})
        {
            if (Body::Content::Panel panel{Fnv1a<"Configs">::value})
            {
                Body::Content::Panel::Config config{};
            }

            else if (Body::Content::Panel panel{Fnv1a<"Main">::value})
            {
                if (Body::Content::Panel::Table table{})
                {
                    if (Body::Content::Panel::Table::Group<"General", true> group{})
                    {
                        if (Body::Content::Panel::Table::Widget widget{})
                        {
                            widget.toggle<"Unlimited Blade">(orion.get_config().get_data().hitbox[0],
                                                             orion.get_config().get_data().color, colo_reference,
                                                             &popup_alpha);
                            widget.toggle<"Unlimited Works", "Spawn Unlimited Jobs">(
                                orion.get_config().get_data().hitbox[1]);
                            widget.combo<"Hitbox", "Head\0Neck\0Body\0Legs\0Arms\0">(
                                orion.get_config().get_data().target);
                            widget.combo<"Hitbox2", "Head\0Neck\0Body\0Legs\0Arms\0">(
                                orion.get_config().get_data().target);
                            widget.multi_combo<"Hitbox", "Head\0Neck\0Body\0Legs\0">(
                                orion.get_config().get_data().hitbox);
                            widget.multi_combo<"Hitbox2", "Head\0Neck\0Body\0Legs\0">(
                                orion.get_config().get_data().hitbox);
                        }
                    }
                    if (Body::Content::Panel::Table::Group<"Movement", true> group{})
                    {
                        if (Body::Content::Panel::Table::Widget widget{})
                        {
                            widget.toggle<"Unlimited Blade">(orion.get_config().get_data().hitbox[0],
                                                             orion.get_config().get_data().color, colo_reference,
                                                             &popup_alpha);
                            widget.slider<"Unlimited Works", "%.1f", 0.f, 1.f>(orion.get_config().get_data().color[0]);
                        }
                    }
                }
            }
        }
    }
}
