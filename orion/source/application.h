#pragma once

namespace orion
{

namespace hooks
{

class MinHook;

}

namespace core
{

class Platform;

}

class Application final
{
    NON_CONSTRUCTIBLE(Application)

    friend core::Platform;

    static auto setup() noexcept -> void;
    static auto exit() noexcept -> void;
};

class Unload final
{
    NON_CONSTRUCTIBLE(Unload)

    friend Application;
    friend hooks::MinHook;

    [[noreturn]] static auto WINAPI unload(LPCVOID) noexcept -> void;
};

} // namespace orion
