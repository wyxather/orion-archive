#include "source/context.h"

orion::core::Console::Console( const imports::Ntdll&                   ntdll,
                               const imports::Kernel32&                kernel32,
                               [[maybe_unused]] const imports::Msvcrt& msvcrt,
                               const imports::User32&                  user32 ) noexcept
{
    std::ignore       = kernel32.allocConsole( ntdll.gadgetAddress );
    std::ignore       = kernel32.setConsoleCtrlHandler( ntdll.gadgetAddress, ctrlHandler, TRUE );
    stdOutputHandle   = kernel32.getStdHandle( ntdll.gadgetAddress, STD_OUTPUT_HANDLE );
    const auto window = kernel32.getConsoleWindow( ntdll.gadgetAddress );
    std::ignore =
        user32.setWindowLongPtr( user32.gadgetAddress,
                                 window,
                                 GWL_STYLE,
                                 user32.getWindowLongPtr( user32.gadgetAddress, window, GWL_STYLE ) & ~WS_SYSMENU );
}

orion::core::Console::~Console() noexcept
{
    std::ignore = context.getKernel32().freeConsole( context.getNtdll().gadgetAddress );
}

void orion::core::Console::setTextOutputColor( const WORD color ) const noexcept
{
    std::ignore =
        context.getKernel32().setConsoleTextAttribute( context.getNtdll().gadgetAddress, stdOutputHandle, color );
}

BOOL WINAPI orion::core::Console::ctrlHandler( const DWORD ctrlType ) noexcept
{
    switch ( ctrlType )
    {
    case CTRL_C_EVENT:
    case CTRL_BREAK_EVENT:
        return TRUE;
    default:
        return FALSE;
    }
}

void orion::core::Console::printFormat( std::pair<std::unique_ptr<char[]>, std::size_t>& buffer,
                                        const char* const                                format,
                                        ... ) const noexcept
{
    va_list args;
    va_start( args, format );
    const auto length = context.getMsvcrt()._vscprintf( context.getMsvcrt().gadgetAddress, format, args );
    if ( buffer.second < static_cast<std::size_t>( length ) + 1 )
    {
        buffer.first  = std::make_unique<char[]>( static_cast<std::size_t>( length ) + 1 );
        buffer.second = length + 1;
    }
    std::ignore = context.getMsvcrt()._vsnprintf_s(
        context.getMsvcrt().gadgetAddress, buffer.first.get(), buffer.second, length, format, args );
    va_end( args );
    std::ignore = context.getKernel32().writeConsoleA( context.getNtdll().gadgetAddress,
                                                       stdOutputHandle,
                                                       buffer.first.get(),
                                                       static_cast<DWORD>( length ),
                                                       nullptr,
                                                       nullptr );
}

void orion::core::Console::printPrefix( std::pair<std::unique_ptr<char[]>, std::size_t>& buffer,
                                        const char* const                                modeName,
                                        const WORD                                       color,
                                        const char* const                                fileName,
                                        const std::size_t                                line ) const noexcept
{
    const auto localTime  = getLocalTime();
    const auto dateFormat = getDateFormat( localTime );
    const auto timeFormat = getTimeFormat( localTime );
    printFormat( buffer, xorstr_( "[%s %s.%03d " ), dateFormat.data(), timeFormat.data(), localTime.wMilliseconds );
    setTextOutputColor( color );
    printFormat( buffer, xorstr_( "%-6s" ), modeName );
    setTextOutputColor( FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED );
    printFormat( buffer, xorstr_( "%s:%zu] " ), fileName, line );
}

const orion::core::Console& orion::core::Console::getConsole() noexcept
{
    return context.getConsole();
}

std::array<char, 12> orion::core::Console::getDateFormat( const SYSTEMTIME& time ) noexcept
{
    std::array<char, 12> dateFormat;
    std::ignore = context.getKernel32().getDateFormatA( context.getNtdll().gadgetAddress,
                                                        LOCALE_USER_DEFAULT,
                                                        0,
                                                        &time,
                                                        xorstr_( "yyyy-MMM-dd" ),
                                                        dateFormat.data(),
                                                        static_cast<int>( dateFormat.size() ) );
    return dateFormat;
}

SYSTEMTIME orion::core::Console::getLocalTime() noexcept
{
    SYSTEMTIME localTime;
    context.getKernel32().getLocalTime( context.getNtdll().gadgetAddress, &localTime );
    return localTime;
}

std::array<char, 9> orion::core::Console::getTimeFormat( const SYSTEMTIME& time ) noexcept
{
    std::array<char, 9> timeFormat;
    std::ignore = context.getKernel32().getTimeFormatA( context.getNtdll().gadgetAddress,
                                                        LOCALE_NAME_USER_DEFAULT,
                                                        0,
                                                        &time,
                                                        xorstr_( "HH':'mm':'ss" ),
                                                        timeFormat.data(),
                                                        static_cast<int>( timeFormat.size() ) );
    return timeFormat;
}

void orion::core::to_json( nlohmann::json& json, const Console& console ) noexcept
{
    json = {
        { xorstr_( "mode" ), Console::mode },
        { xorstr_( "stdOutputHandle" ), reinterpret_cast<std::uintptr_t>( console.stdOutputHandle ) },
    };
}
