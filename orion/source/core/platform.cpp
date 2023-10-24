#include "source/context.h"

orion::core::Platform::Platform( const imports::Kernel32& kernel32, const imports::User32& user32 ) noexcept
    : window( kernel32, user32 )
{
}

orion::core::Platform::Window::Window( const imports::Kernel32& kernel32, const imports::User32& user32 ) noexcept
{
    user32.enumWindows( reinterpret_cast<WNDENUMPROC>( enumWindowsProc ), reinterpret_cast<LPARAM>( this ) );
}

void orion::core::Platform::Window::hook( const imports::User32& user32 ) const noexcept
{
    user32.setWindowLongPtr( handle, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>( &procedure ) );
}

void orion::core::Platform::Window::unhook( const imports::User32& user32 ) const noexcept
{
    user32.setWindowLongPtr( handle, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>( originalProcedure ) );
}

LRESULT orion::core::Platform::Window::callOriginalProcedure( const HWND   window,
                                                              const UINT   message,
                                                              const WPARAM wParam,
                                                              const LPARAM lParam ) const noexcept
{
    return context.getUser32().callWindowProc( originalProcedure, window, message, wParam, lParam );
}

BOOL orion::core::Platform::Window::enumWindowsProc( const HWND window, Window& self ) noexcept
{
    if ( !isEqualToCurrentProcessId( getThreadProcessId( window ) ) || !isVisible( window ) )
    {
        return TRUE;
    }
    const auto className = getClassName( window );
    if ( isConsole( className.data() ) )
    {
        return TRUE;
    }
    switch ( const auto windowText = getText( window ); getUserInput( window, className.data(), windowText.data() ) )
    {
    case IDYES:
        self.handle            = window;
        self.originalProcedure = getProcedure( window );
        [[fallthrough]];
    case IDCANCEL:
        break;
    default:
        return TRUE;
    }
    return FALSE;
}

LRESULT orion::core::Platform::Window::procedure( const HWND   window,
                                                  const UINT   message,
                                                  const WPARAM wParam,
                                                  const LPARAM lParam ) noexcept
{
    return context.getPlatform().window.callOriginalProcedure( window, message, wParam, lParam );
}

std::array<char, 257> orion::core::Platform::Window::getClassName( const HWND window ) noexcept
{
    std::array<char, 257> className;
    context.getUser32().getClassNameA( window, className.data(), static_cast<int>( className.size() ) );
    return className;
}

int orion::core::Platform::Window::getUserInput( const HWND        window,
                                                 const char* const className,
                                                 const char* const windowText ) noexcept
{
    return context.getUser32().messageBoxA( window, windowText, className, MB_YESNOCANCEL | MB_ICONQUESTION );
}

DWORD orion::core::Platform::Window::getThreadProcessId( const HWND window ) noexcept
{
    DWORD threadProcessId;
    context.getUser32().getWindowThreadProcessId( window, &threadProcessId );
    return threadProcessId;
}

WNDPROC orion::core::Platform::Window::getProcedure( const HWND window ) noexcept
{
    return reinterpret_cast<WNDPROC>( context.getUser32().getWindowLongPtr( window, GWLP_WNDPROC ) );
}

std::vector<char> orion::core::Platform::Window::getText( const HWND window ) noexcept
{
    std::vector<char> windowText( getTextLength( window ) );
    context.getUser32().getWindowTextA( window, windowText.data(), static_cast<int>( windowText.size() ) );
    return windowText;
}

int orion::core::Platform::Window::getTextLength( const HWND window ) noexcept
{
    return context.getUser32().getWindowTextLengthA( window );
}

bool orion::core::Platform::Window::isConsole( const char* const className ) noexcept
{
    return strcmp( xorstr_( "ConsoleWindowClass" ), className ) == 0;
}

bool orion::core::Platform::Window::isEqualToCurrentProcessId( const DWORD processId ) noexcept
{
    return context.getKernel32().getCurrentProcessId() == processId;
}

bool orion::core::Platform::Window::isVisible( const HWND window ) noexcept
{
    return context.getUser32().isWindowVisible( window ) != FALSE;
}
