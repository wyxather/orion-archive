#pragma once

namespace Orion
{
    namespace Module
    {
        class Hooks;
        class Window;
        class Console;
        class Renderer;
        class Gui;
        class Config;
    }

    class Application
    {
    public:
        Application(HMODULE handle) noexcept;
        ~Application() noexcept;

        Application(Application&&) = delete;
        Application(const Application&) = delete;
        Application& operator=(Application&&) = delete;
        Application& operator=(const Application&) = delete;

        [[nodiscard]] constexpr auto&& getId() const noexcept { return m_id; }
        [[nodiscard]] constexpr auto&& getHooks() const noexcept { return *m_hooks.get(); }
        [[nodiscard]] constexpr auto&& getWindow() const noexcept { return *m_window.get(); }
        [[nodiscard]] constexpr auto&& getConsole() const noexcept { return *m_console.get(); }
        [[nodiscard]] constexpr auto&& getRenderer() const noexcept { return *m_renderer.get(); }
        [[nodiscard]] constexpr auto&& getGui() const noexcept { return *m_gui.get(); }
        [[nodiscard]] constexpr auto&& getConfig() const noexcept { return *m_config.get(); }

        [[nodiscard]] bool start() const noexcept;
        void load() const noexcept;
        void exit() const noexcept;

    private:
        [[noreturn]] static void CALLBACK unload(HMODULE handle) noexcept;

        DWORD m_id = {};
        HMODULE m_handle = {};
        std::unique_ptr<Module::Hooks> m_hooks;
        std::unique_ptr<Module::Window> m_window;
        std::unique_ptr<Module::Console> m_console;
        std::unique_ptr<Module::Renderer> m_renderer;
        std::unique_ptr<Module::Gui> m_gui;
        std::unique_ptr<Module::Config> m_config;
    };

    inline std::optional<Orion::Application> instance;
}