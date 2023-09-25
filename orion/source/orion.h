#pragma once

#include "modules/config.h"
#include "modules/game.h"
#include "modules/gui.h"
#include "modules/input.h"
#include "modules/platform.h"
#include "modules/renderer.h"

auto APIENTRY DllEntryPoint(
    const HMODULE module_handle,
    const DWORD reason_for_call,
    const LPVOID reserved
) -> BOOL;

namespace orion {

    class EntryPoint final {
        NON_CONSTRUCTIBLE(EntryPoint)

        friend auto APIENTRY ::DllEntryPoint(
            const HMODULE module_handle,
            const DWORD reason_for_call,
            const LPVOID reserved
        ) -> BOOL;

        _NODISCARD static auto process(
            const HMODULE module_handle,
            const DWORD reason_for_call,
            const LPVOID reserved
        ) noexcept -> BOOL;
    };

    _NODISCARD auto get_handle() noexcept -> HMODULE;

    class Orion final {
    public:
        explicit Orion() noexcept = default;
        ~Orion() noexcept;

        Orion(Orion&&) = delete;
        Orion& operator=(Orion&&) = delete;

        Orion(const Orion&) = delete;
        Orion& operator=(const Orion&) = delete;

        [[nodiscard]] constexpr auto&& get_platform() const noexcept {
            return Orion::platform.value();
        }

        [[nodiscard]] constexpr auto&& get_renderer() const noexcept {
            return Orion::renderer.value();
        }

        [[nodiscard]] constexpr auto&& get_input() const noexcept {
            return Orion::input.value();
        }

        [[nodiscard]] constexpr auto&& get_config() noexcept {
            return Orion::config.value();
        }

        [[nodiscard]] constexpr auto&& get_gui() noexcept {
            return Orion::gui.value();
        }

        [[nodiscard]] constexpr auto&& get_game() noexcept {
            return Orion::game.value();
        }

        auto init() noexcept -> void;
        auto exit(bool unload = true) const noexcept -> void;

    private:
        friend EntryPoint;

        std::optional<Platform> platform;
        std::optional<Renderer> renderer;
        std::optional<Input> input;
        std::optional<Config> config;
        std::optional<Gui> gui;
        std::optional<Game> game;
    };

    inline std::optional<Orion> orion;
}  // namespace orion
