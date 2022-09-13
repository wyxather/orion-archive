#pragma once

namespace Orion
{
    namespace Module
    {
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

        [[nodiscard]] constexpr auto&& getGui() const noexcept { return *m_gui.get(); }
        [[nodiscard]] constexpr auto&& getConfig() const noexcept { return *m_config.get(); }

        [[nodiscard]] bool start() const noexcept;
        void load() noexcept;
        void exit() const noexcept;

        DWORD id;
        HMODULE handle;

    private:
        [[noreturn]] static void CALLBACK unload(HMODULE handle) noexcept;

        std::unique_ptr<Module::Gui> m_gui;
        std::unique_ptr<Module::Config> m_config;
    };

    inline std::optional<Orion::Application> instance;
}