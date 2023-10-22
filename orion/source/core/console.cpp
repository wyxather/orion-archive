#include "source/context.h"

orion::core::Console::Console(const imports::Kernel32& kernel32) noexcept
{
    kernel32.allocConsole();
    stdOutputHandle = kernel32.getStdHandle(STD_OUTPUT_HANDLE);
}

orion::core::Console::~Console() noexcept
{
    context.getKernel32().freeConsole();
}
