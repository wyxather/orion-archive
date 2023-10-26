#pragma once

namespace orion::imports
{

struct User32 final
{
    friend void to_json( nlohmann::json& json, const User32& user32 ) noexcept;

    User32( User32&& )                 = delete;
    User32& operator=( User32&& )      = delete;
    User32( const User32& )            = delete;
    User32& operator=( const User32& ) = delete;

    explicit User32( void* user32 ) noexcept;

    decltype( &CallWindowProc )           callWindowProc           = nullptr;
    decltype( &CreateWindowExA )          createWindowExA          = nullptr;
    decltype( &DefWindowProcA )           defWindowProcA           = nullptr;
    decltype( &DestroyWindow )            destroyWindow            = nullptr;
    decltype( &EnumWindows )              enumWindows              = nullptr;
    decltype( &GetClassNameA )            getClassNameA            = nullptr;
    decltype( &GetWindowLongPtr )         getWindowLongPtr         = nullptr;
    decltype( &GetWindowTextA )           getWindowTextA           = nullptr;
    decltype( &GetWindowTextLengthA )     getWindowTextLengthA     = nullptr;
    decltype( &GetWindowThreadProcessId ) getWindowThreadProcessId = nullptr;
    decltype( &IsWindowVisible )          isWindowVisible          = nullptr;
    decltype( &MessageBoxA )              messageBoxA              = nullptr;
    decltype( &RegisterClassExA )         registerClassExA         = nullptr;
    decltype( &SetWindowLongPtr )         setWindowLongPtr         = nullptr;
    decltype( &UnregisterClassA )         unregisterClassA         = nullptr;
};

} // namespace orion::imports
