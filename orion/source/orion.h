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

    class Application final {
        NON_CONSTRUCTIBLE(Application)

        friend class Platform::Window;

        static auto setup() noexcept -> void;
        static auto exit() noexcept -> void;
    };

    _NODISCARD auto get_handle() noexcept -> HMODULE;

    class Orion final {
        NON_COPYABLE(Orion)
        NON_MOVEABLE(Orion)

        friend EntryPoint;
        friend Application;

        std::optional<Platform> platform;
        std::optional<Renderer> renderer;
        std::optional<Input> input;
        std::optional<Config> config;
        std::optional<Gui> gui;
        std::optional<Game> game;

    public:
        constexpr explicit Orion() noexcept = default;

        ~Orion() noexcept;

        _NODISCARD constexpr auto get_platform() const noexcept -> const auto& {
            return platform.value();
        }

        _NODISCARD constexpr auto get_renderer() const noexcept -> const auto& {
            return renderer.value();
        }

        _NODISCARD constexpr auto get_input() const noexcept -> const auto& {
            return input.value();
        }

        _NODISCARD constexpr auto get_config() noexcept -> auto& {
            return config.value();
        }

        _NODISCARD constexpr auto get_gui() noexcept -> auto& {
            return gui.value();
        }

        _NODISCARD constexpr auto get_game() noexcept -> auto& {
            return game.value();
        }
    };

    inline Orion orion;

}  // namespace orion
