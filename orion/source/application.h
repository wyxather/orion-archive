#pragma once

namespace orion
{

namespace core
{

struct Platform;

}

class Application final
{
    friend core::Platform;

    Application()                                = delete;
    ~Application()                               = delete;
    Application( Application&& )                 = delete;
    Application& operator=( Application&& )      = delete;
    Application( const Application& )            = delete;
    Application& operator=( const Application& ) = delete;

    static void setup() noexcept;
    static void exit() noexcept;

    class Unload final
    {
        friend Application;

        Unload()                           = delete;
        ~Unload()                          = delete;
        Unload( Unload&& )                 = delete;
        Unload& operator=( Unload&& )      = delete;
        Unload( const Unload& )            = delete;
        Unload& operator=( const Unload& ) = delete;

        [[noreturn]] static void WINAPI unload( LPVOID ) noexcept;
    };
};

} // namespace orion
