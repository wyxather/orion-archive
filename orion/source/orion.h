#pragma once

#include "source/core/config.h"
#include "source/core/console.h"
#include "source/core/game.h"
#include "source/core/gui.h"
#include "source/core/input.h"
#include "source/core/platform.h"
#include "source/core/renderer.h"
#include "source/modules/combase.h"
#include "source/modules/kernel32.h"
#include "source/modules/shell32.h"
#include "source/modules/user32.h"

namespace orion {

    class Orion final {
        NON_COPYABLE(Orion)
        NON_MOVEABLE(Orion)

        friend class EntryPoint;
        friend class Application;

        HMODULE handle = nullptr;
        std::optional<const modules::Kernel32> kernel32;
        std::optional<const modules::User32> user32;
        std::optional<const modules::Shell32> shell32;
        std::optional<const modules::Combase> combase;
        std::optional<const core::Console> console;
        std::optional<core::Platform> platform;
        std::optional<core::Renderer> renderer;
        std::optional<core::Input> input;
        std::optional<core::Config> config;
        std::optional<core::Gui> gui;
        std::optional<core::Game> game;

    public:
        constexpr explicit Orion() noexcept = default;

        NODISCARD constexpr auto get_handle() const noexcept -> auto {
            return handle;
        }

        NODISCARD constexpr auto get_kernel32() const noexcept -> const auto& {
            return kernel32.value();
        }

        NODISCARD constexpr auto get_user32() const noexcept -> const auto& {
            return user32.value();
        }

        NODISCARD constexpr auto get_shell32() const noexcept -> const auto& {
            return shell32.value();
        }

        NODISCARD constexpr auto get_combase() const noexcept -> const auto& {
            return combase.value();
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
