#pragma once

namespace orion
{

namespace imports
{

struct Kernel32;
struct User32;

} // namespace imports

namespace core
{

struct Console final
{
    Console(Console&&)                 = delete;
    Console& operator=(Console&&)      = delete;
    Console(const Console&)            = delete;
    Console& operator=(const Console&) = delete;

    explicit Console(const imports::Kernel32& kernel32, const imports::User32& user32) noexcept;

    ~Console() noexcept;

  private:
    static BOOL WINAPI ctrlHandler(DWORD ctrlType) noexcept;

    HANDLE stdOutputHandle = nullptr;
};

} // namespace core

} // namespace orion
