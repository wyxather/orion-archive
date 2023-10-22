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

void orion::core::Console::print(char* const       buffer,
                                 const std::size_t bufferSize,
                                 const char* const format,
                                 ...) const noexcept
{
    va_list args;
    va_start(args, format);
    const auto bufferWrittenCount = context.getMsvcrt()._vsnprintf_s(buffer, bufferSize, bufferSize - 1, format, args);
    va_end(args);
    context.getKernel32().writeConsoleA(stdOutputHandle, buffer, bufferWrittenCount, nullptr, nullptr);
}

void orion::core::Console::setTextOutputColor(const WORD color) const noexcept
{
    context.getKernel32().setConsoleTextAttribute(stdOutputHandle, color);
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
