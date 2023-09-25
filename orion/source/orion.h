#pragma once

#include "Modules/Config.h"
#include "Modules/Game.h"
#include "Modules/Gui.h"
#include "Modules/Input.h"
#include "Modules/Platform.h"
#include "Modules/Renderer.h"

namespace orion {

    /// <summary>
    /// https://learn.microsoft.com/en-us/windows/win32/dlls/dllmain
    /// </summary>
    /// <param name="module_handle">=> Base address of the DLL</param>
    /// <param name="reason_for_call">=> The reason why the DLL entry-point function is being called.</param>
    /// <param name="reserved"></param>
    /// <returns>Returns TRUE if it succeeds or FALSE if initialization fails. </returns>
    _NODISCARD auto entry(
        const HMODULE module_handle,
        const DWORD reason_for_call,
        const LPVOID reserved
    ) noexcept -> BOOL;

    /// <summary>
    ///
    /// </summary>
    /// <returns></returns>
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

        auto attach() noexcept -> void;
        auto init() noexcept -> void;
        auto exit(bool unload = true) const noexcept -> void;

    private:
        std::optional<Platform> platform;
        std::optional<Renderer> renderer;
        std::optional<Input> input;
        std::optional<Config> config;
        std::optional<Gui> gui;
        std::optional<Game> game;
    };

    inline std::optional<Orion> orion;
}  // namespace orion
