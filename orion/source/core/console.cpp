#include "source/context.h"

orion::core::Console::Console(const imports::Kernel32& kernel32,
                              const imports::Msvcrt&   msvcrt,
                              const imports::User32&   user32) noexcept
{
    kernel32.allocConsole();
    kernel32.setConsoleCtrlHandler(ctrlHandler, TRUE);
    stdOutputHandle   = kernel32.getStdHandle(STD_OUTPUT_HANDLE);
    const auto window = kernel32.getConsoleWindow();
    user32.setWindowLongPtr(window, GWL_STYLE, user32.getWindowLongPtr(window, GWL_STYLE) & ~WS_SYSMENU);
}

orion::core::Console::~Console() noexcept
{
    context.getKernel32().freeConsole();
}

BOOL WINAPI orion::core::Console::ctrlHandler(const DWORD ctrlType) noexcept
{
    switch (ctrlType)
    {
    case CTRL_C_EVENT:
    case CTRL_BREAK_EVENT:
        return TRUE;
    default:
        return FALSE;
    }
}
