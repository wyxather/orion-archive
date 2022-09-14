#pragma once

namespace Orion
{
    class Application
    {
    public:
        Application(HMODULE handle) noexcept;
        ~Application() noexcept;

        Application(Application&&) = delete;
        Application(const Application&) = delete;
        Application& operator=(Application&&) = delete;
        Application& operator=(const Application&) = delete;

        [[nodiscard]] bool start() const noexcept;
        void load() noexcept;
        void exit() const noexcept;

        DWORD id;
        HMODULE handle;

    private:
        [[noreturn]] static void CALLBACK unload(HMODULE handle) noexcept;
    };

    inline std::optional<Orion::Application> instance;
}