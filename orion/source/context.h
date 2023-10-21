#pragma once

#include "source/core/console.h"
#include "source/imports/kernel32.h"

namespace orion
{

struct Context final
{
    Context()                          = default;
    Context(Context&&)                 = delete;
    Context& operator=(Context&&)      = delete;
    Context(const Context&)            = delete;
    Context& operator=(const Context&) = delete;

    ~Context();

    _NODISCARD constexpr auto getHandle() const noexcept
    {
        return *handle;
    }

    _NODISCARD constexpr auto& getKernel32() const noexcept
    {
        return *kernel32;
    }

    _NODISCARD constexpr auto& getConsole() const noexcept
    {
        return *console;
    }

  private:
    friend class Main;

    utilities::Option<const HMODULE>           handle;
    utilities::Option<const imports::Kernel32> kernel32;
    utilities::Option<const core::Console>     console;
};

constinit inline Context context;

} // namespace orion
