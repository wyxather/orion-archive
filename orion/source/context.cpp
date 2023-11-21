#include "source/context.h"

orion::Context::~Context() noexcept
{
    input.reset();
    renderer.reset();
    platform.reset();
    console.reset();
    user32.reset();
    msvcrt.reset();
    kernel32.reset();
    ntdll.reset();
    handle.reset();
}

HMODULE orion::Context::getHandle() const noexcept
{
    return *handle;
}

const orion::imports::Ntdll& orion::Context::getNtdll() const noexcept
{
    return *ntdll;
}

const orion::imports::Kernel32& orion::Context::getKernel32() const noexcept
{
    return *kernel32;
}

const orion::imports::Msvcrt& orion::Context::getMsvcrt() const noexcept
{
    return *msvcrt;
}

const orion::imports::User32& orion::Context::getUser32() const noexcept
{
    return *user32;
}

const orion::core::Console& orion::Context::getConsole() const noexcept
{
    return *console;
}

const orion::core::Platform& orion::Context::getPlatform() const noexcept
{
    return *platform;
}

const orion::core::Renderer& orion::Context::getRenderer() const noexcept
{
    return *renderer;
}

const orion::core::Input& orion::Context::getInput() const noexcept
{
    return *input;
}
