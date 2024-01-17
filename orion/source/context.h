#pragma once

#include "source/core/console.h"
#include "source/core/gui.h"
#include "source/core/input.h"
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

    _NODISCARD HMODULE getHandle() const noexcept;
    _NODISCARD const imports::Ntdll& getNtdll() const noexcept;
    _NODISCARD const imports::Kernel32& getKernel32() const noexcept;
    _NODISCARD const imports::Msvcrt& getMsvcrt() const noexcept;
    _NODISCARD const imports::User32& getUser32() const noexcept;
    _NODISCARD const core::Console& getConsole() const noexcept;
    _NODISCARD const core::Platform& getPlatform() const noexcept;
    _NODISCARD const core::Renderer& getRenderer() const noexcept;
    _NODISCARD const core::Input& getInput() const noexcept;
    _NODISCARD core::Gui& getGui() noexcept;

  private:
    utilities::Option<const HMODULE>           handle;
    utilities::Option<const imports::Ntdll>    ntdll;
    utilities::Option<const imports::Kernel32> kernel32;
    utilities::Option<const imports::Msvcrt>   msvcrt;
    utilities::Option<const imports::User32>   user32;
    utilities::Option<const core::Console>     console;
    utilities::Option<const core::Platform>    platform;
    utilities::Option<core::Renderer>          renderer;
    utilities::Option<core::Input>             input;
    utilities::Option<core::Gui>               gui;
};

constinit inline Context context;

} // namespace orion
