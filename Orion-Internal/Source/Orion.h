#pragma once

namespace Orion
{
    namespace Module
    {
        class Gui;
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

        [[nodiscard]] bool start() const noexcept;
        void load() noexcept;
        void exit() const noexcept;

        DWORD id;
        HMODULE handle;

    private:
        [[noreturn]] static void CALLBACK unload(HMODULE handle) noexcept;

        std::unique_ptr<Module::Gui> m_gui;
    };

    inline std::optional<Orion::Application> instance;
}