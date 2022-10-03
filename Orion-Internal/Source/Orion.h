#pragma once

class Application
{
public:
    explicit Application(HMODULE handle) noexcept;
    ~Application() noexcept;

    Application(Application&&) = delete;
    Application(const Application&) = delete;
    Application& operator=(Application&&) = delete;
    Application& operator=(const Application&) = delete;

    static auto load() noexcept -> void;
    static auto start() noexcept -> void;

    auto exit() const noexcept -> void;

    DWORD id;
    HMODULE handle;

private:
    [[noreturn]] static auto __stdcall unload(HMODULE handle) noexcept -> void;
};

inline std::optional<const Application> app;