#pragma once

namespace orion
{

namespace imports
{

struct Kernel32;
struct Msvcrt;
struct User32;

} // namespace imports

namespace core
{

struct Console final
{
    Console( Console&& )                 = delete;
    Console& operator=( Console&& )      = delete;
    Console( const Console& )            = delete;
    Console& operator=( const Console& ) = delete;

    explicit Console( const imports::Kernel32& kernel32,
                     const imports::Msvcrt&   msvcrt,
                      const imports::User32&   user32 ) noexcept;

    ~Console() noexcept;

  private:
    static BOOL WINAPI ctrlHandler( DWORD ctrlType ) noexcept;

    void print(char* buffer, std::size_t bufferSize, const char* format, ...) const noexcept;
    void setTextOutputColor( WORD color ) const noexcept;

    HANDLE stdOutputHandle = nullptr;
};

} // namespace core

} // namespace orion
