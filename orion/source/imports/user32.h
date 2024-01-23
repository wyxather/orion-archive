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

    explicit User32( const li::detail::win::LDR_DATA_TABLE_ENTRY_T& user32 ) noexcept;

    const void*                                                       gadgetAddress = nullptr;
    utilities::RetSpoofInvoker<decltype( &CallWindowProc )>           callWindowProc;
    utilities::RetSpoofInvoker<decltype( &CreateWindowExA )>          createWindowExA;
    utilities::RetSpoofInvoker<decltype( &DestroyWindow )>            destroyWindow;
    utilities::RetSpoofInvoker<decltype( &EnumWindows )>              enumWindows;
    utilities::RetSpoofInvoker<decltype( &GetClassNameA )>            getClassNameA;
    utilities::RetSpoofInvoker<decltype( &GetCursorPos )>             getCursorPos;
    utilities::RetSpoofInvoker<decltype( &GetSystemMetrics )>         getSystemMetrics;
    utilities::RetSpoofInvoker<decltype( &GetWindowLongPtr )>         getWindowLongPtr;
    utilities::RetSpoofInvoker<decltype( &GetWindowTextA )>           getWindowTextA;
    utilities::RetSpoofInvoker<decltype( &GetWindowTextLengthA )>     getWindowTextLengthA;
    utilities::RetSpoofInvoker<decltype( &GetWindowThreadProcessId )> getWindowThreadProcessId;
    utilities::RetSpoofInvoker<decltype( &IsWindowVisible )>          isWindowVisible;
    utilities::RetSpoofInvoker<decltype( &MessageBoxA )>              messageBoxA;
    utilities::RetSpoofInvoker<decltype( &PostMessage )>              postMessage;
    utilities::RetSpoofInvoker<decltype( &RegisterClassExA )>         registerClassExA;
    utilities::RetSpoofInvoker<decltype( &SetWindowLongPtr )>         setWindowLongPtr;
    utilities::RetSpoofInvoker<decltype( &UnregisterClassA )>         unregisterClassA;
};

} // namespace orion::imports
