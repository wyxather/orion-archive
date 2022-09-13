#pragma once

namespace Orion
{
    namespace Module
    {
        class Hooks;
        class Gui;
        class Config;
        class Input;
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

        [[nodiscard]] constexpr auto&& getHandle() const noexcept { return m_handle; }
        [[nodiscard]] constexpr auto&& getHooks() const noexcept { return *m_hooks.get(); }
        [[nodiscard]] constexpr auto&& getGui() const noexcept { return *m_gui.get(); }
        [[nodiscard]] constexpr auto&& getConfig() const noexcept { return *m_config.get(); }
        [[nodiscard]] constexpr const auto& getInput() const noexcept { return *m_input.get(); }

        [[nodiscard]] bool start() const noexcept;
        void load() noexcept;
        void exit() const noexcept;

        DWORD id;

    private:
        [[noreturn]] static void CALLBACK unload(HMODULE handle) noexcept;

        HMODULE m_handle = {};
        std::unique_ptr<Module::Hooks> m_hooks;
        std::unique_ptr<Module::Gui> m_gui;
        std::unique_ptr<Module::Config> m_config;
        std::unique_ptr<Module::Input> m_input;
    };

    inline std::optional<Orion::Application> instance;
}