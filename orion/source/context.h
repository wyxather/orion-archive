#pragma once

#include "source/core/console.h"
#include "source/core/platform.h"
#include "source/core/renderer.h"
#include "source/imports/kernel32.h"
#include "source/imports/msvcrt.h"
#include "source/imports/ntdll.h"
#include "source/imports/user32.h"

namespace orion
{

class Application;
class Main;

struct Context final
{
    friend Application;
    friend Main;

    Context( Context&& )                 = delete;
    Context& operator=( Context&& )      = delete;
    Context( const Context& )            = delete;
    Context& operator=( const Context& ) = delete;

    constexpr explicit Context() noexcept = default;

    ~Context() noexcept;

    _NODISCARD constexpr auto getHandle() const noexcept
    {
        return *handle;
    }

    _NODISCARD constexpr auto& getKernel32() const noexcept
    {
        return *kernel32;
    }

    _NODISCARD constexpr auto& getMsvcrt() const noexcept
    {
        return *msvcrt;
    }

    _NODISCARD constexpr auto& getNtdll() const noexcept
    {
        return *ntdll;
    }

    _NODISCARD constexpr auto& getUser32() const noexcept
    {
        return *user32;
    }

    _NODISCARD constexpr auto& getConsole() const noexcept
    {
        return *console;
    }

    _NODISCARD constexpr auto& getPlatform() const noexcept
    {
        return *platform;
    }

    _NODISCARD constexpr auto& getRenderer() const noexcept
    {
        return *renderer;
    }

  private:
    utilities::Option<const HMODULE>           handle;
    utilities::Option<const imports::Kernel32> kernel32;
    utilities::Option<const imports::Msvcrt>   msvcrt;
    utilities::Option<const imports::Ntdll>    ntdll;
    utilities::Option<const imports::User32>   user32;
    utilities::Option<const core::Console>     console;
    utilities::Option<const core::Platform>    platform;
    utilities::Option<core::Renderer>          renderer;
};

constinit inline Context context;

} // namespace orion
