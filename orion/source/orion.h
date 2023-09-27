#pragma once

#include "core/config.h"
#include "core/game.h"
#include "core/gui.h"
#include "core/input.h"
#include "core/platform.h"
#include "core/renderer.h"

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

    class Context final {
        NON_COPYABLE(Context)
        NON_MOVEABLE(Context)

        friend EntryPoint;
        friend Application;

        HMODULE handle = nullptr;
        std::optional<Platform> platform;
        std::optional<Renderer> renderer;
        std::optional<Input> input;
        std::optional<Config> config;
        std::optional<Gui> gui;
        std::optional<Game> game;

    public:
        constexpr explicit Context() noexcept = default;

        ~Context() noexcept;

        _NODISCARD constexpr auto get_handle() const noexcept {
            return handle;
        }

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

    inline Context context;

}  // namespace orion
