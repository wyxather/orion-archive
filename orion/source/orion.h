#pragma once

#include "core/config.h"
#include "core/console.h"
#include "core/game.h"
#include "core/gui.h"
#include "core/input.h"
#include "core/platform.h"
#include "core/renderer.h"
#include "modules/kernel32.h"
#include "modules/user32.h"

namespace orion {

    class Orion final {
        NON_COPYABLE(Orion)
        NON_MOVEABLE(Orion)

        friend class EntryPoint;
        friend class Application;

        HMODULE handle = nullptr;
        std::optional<const modules::Kernel32> kernel32;
        std::optional<const modules::User32> user32;
        std::optional<core::Console> console;
        std::optional<Platform> platform;
        std::optional<Renderer> renderer;
        std::optional<Input> input;
        std::optional<Config> config;
        std::optional<Gui> gui;
        std::optional<Game> game;

    public:
        constexpr explicit Orion() noexcept = default;

        NODISCARD constexpr auto get_handle() const noexcept {
            return handle;
        }

        NODISCARD constexpr auto get_kernel32() const noexcept -> const auto& {
            return kernel32.value();
        }

        NODISCARD constexpr auto get_user32() const noexcept -> const auto& {
            return user32.value();
        }

        NODISCARD constexpr auto get_console() const noexcept -> const auto& {
            return console.value();
        }

        NODISCARD constexpr auto get_platform() const noexcept -> const auto& {
            return platform.value();
        }

        NODISCARD constexpr auto get_renderer() const noexcept -> const auto& {
            return renderer.value();
        }

        NODISCARD constexpr auto get_input() const noexcept -> const auto& {
            return input.value();
        }

        NODISCARD constexpr auto get_config() noexcept -> auto& {
            return config.value();
        }

        NODISCARD constexpr auto get_gui() noexcept -> auto& {
            return gui.value();
        }

        NODISCARD constexpr auto get_game() noexcept -> auto& {
            return game.value();
        }
    };

    inline Orion orion;

}  // namespace orion
