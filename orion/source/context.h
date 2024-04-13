#pragma once

#include "source/core/console.h"
#include "source/core/gui.h"
#include "source/core/input.h"
#include "source/core/platform.h"
#include "source/core/renderer.h"
#include "source/import/kernel32.h"
#include "source/import/ntdll.h"
#include "source/import/user32.h"
#include "source/utility/option.h"
#include "source/utility/windows.h"

namespace orion {

    class Context final {
    public:
        utility::Option<const HMODULE> handle;
        utility::Option<const import::Ntdll> ntdll;
        utility::Option<const import::Kernel32> kernel32;
        utility::Option<const import::User32> user32;
        utility::Option<const core::Console> console;
        utility::Option<core::Platform> platform;
        utility::Option<core::Renderer> renderer;
        utility::Option<core::Input> input;
        utility::Option<core::Gui> gui;

        consteval Context() noexcept = default;

        ~Context() noexcept;

        Context(Context &&) = delete;
        Context &operator=(Context &&) = delete;

        Context(const Context &) = delete;
        Context &operator=(const Context &) = delete;
    };

    constinit inline Context context;

}  // namespace orion
