#pragma once

#include "core/config.h"
#include "core/console.h"
#include "core/game.h"
#include "core/gui.h"
#include "core/input.h"
#include "core/platform.h"
#include "core/renderer.h"

namespace orion {

    class Context final {
        NON_COPYABLE(Context)
        NON_MOVEABLE(Context)

        friend class EntryPoint;
        friend class Application;

        HMODULE handle = nullptr;
        std::optional<core::Console> console;
        std::optional<Platform> platform;
        std::optional<Renderer> renderer;
        std::optional<Input> input;
        std::optional<Config> config;
        std::optional<Gui> gui;
        std::optional<Game> game;

    public:
        constexpr explicit Context() noexcept = default;

        NODISCARD constexpr auto get_handle() const noexcept {
            return handle;
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

    inline Context context;

}  // namespace orion
