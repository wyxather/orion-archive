#pragma once

namespace Orion
{
    namespace Module
    {
        class Window;
        class Console;
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

        [[nodiscard]] auto getWindow() noexcept { return m_window.get(); }
        [[nodiscard]] auto getConsole() noexcept { return m_console.get(); }

        void load() noexcept;
        void exit() const noexcept;

    private:
        [[noreturn]] static void CALLBACK unload(HMODULE handle) noexcept;

        HMODULE m_handle = {};
        std::unique_ptr<Module::Window> m_window;
        std::unique_ptr<Module::Console> m_console;
    };

    inline std::optional<Orion::Application> instance;
}