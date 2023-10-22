#pragma once

namespace orion::imports
{

struct Kernel32 final
{
    Kernel32(Kernel32&&)                 = delete;
    Kernel32& operator=(Kernel32&&)      = delete;
    Kernel32(const Kernel32&)            = delete;
    Kernel32& operator=(const Kernel32&) = delete;

    explicit Kernel32(void* kernel32) noexcept;

    decltype(&AllocConsole)          allocConsole          = nullptr;
    decltype(&FreeConsole)           freeConsole           = nullptr;
    decltype(&GetConsoleWindow)      getConsoleWindow      = nullptr;
};

} // namespace orion::imports
