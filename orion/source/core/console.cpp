#include "source/context.h"

orion::core::Console::Console( const imports::Kernel32&                kernel32,
                               [[maybe_unused]] const imports::Msvcrt& msvcrt,
                               const imports::User32&                  user32 ) noexcept
{
    kernel32.allocConsole();
    kernel32.setConsoleCtrlHandler( ctrlHandler, TRUE );
    stdOutputHandle   = kernel32.getStdHandle( STD_OUTPUT_HANDLE );
    const auto window = kernel32.getConsoleWindow();
    user32.setWindowLongPtr( window, GWL_STYLE, user32.getWindowLongPtr( window, GWL_STYLE ) & ~WS_SYSMENU );
}

orion::core::Console::~Console() noexcept
{
    context.getKernel32().freeConsole();
}

void orion::core::Console::print( const char* const str, const DWORD strLen ) const noexcept
{
    context.getKernel32().writeConsoleA( stdOutputHandle, str, strLen, nullptr, nullptr );
}

void orion::core::Console::setTextOutputColor( const WORD color ) const noexcept
{
    context.getKernel32().setConsoleTextAttribute( stdOutputHandle, color );
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

void orion::core::Console::printPrefix( char* const       buffer,
                                        const std::size_t bufferSizeInBytes,
                                        const std::size_t maxNumChars,
                                        const char* const modeName,
                                        const WORD        color,
                                        const char* const fileName,
                                        const std::size_t line ) const noexcept
{
    const auto localTime  = getLocalTime();
    const auto dateFormat = getDateFormat( localTime );
    const auto timeFormat = getTimeFormat( localTime );
    print( buffer,
           format( buffer,
                   bufferSizeInBytes,
                   maxNumChars,
                   xorstr_( "[%s %s.%03d " ),
                   dateFormat.data(),
                   timeFormat.data(),
                   localTime.wMilliseconds ) );
    setTextOutputColor( color );
    print( buffer, format( buffer, bufferSizeInBytes, maxNumChars, xorstr_( "%-6s" ), modeName ) );
    setTextOutputColor( FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED );
    print( buffer, format( buffer, bufferSizeInBytes, maxNumChars, xorstr_( "%s:%zu] " ), fileName, line ) );
}

int orion::core::Console::format( char* const       buffer,
                                  const std::size_t bufferSizeInBytes,
                                  const std::size_t maxNumChars,
                                  const char* const format,
                                  ... ) noexcept
{
    va_list args;
    va_start( args, format );
    const auto numCharsWritten =
        context.getMsvcrt()._vsnprintf_s( buffer, bufferSizeInBytes, maxNumChars, format, args );
    va_end( args );
    return numCharsWritten;
}

const orion::core::Console& orion::core::Console::getConsole() noexcept
{
    return context.getConsole();
}

std::array<char, 12> orion::core::Console::getDateFormat( const SYSTEMTIME& time ) noexcept
{
    std::array<char, 12> dateFormat;
    context.getKernel32().getDateFormatA( LOCALE_USER_DEFAULT,
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
    context.getKernel32().getLocalTime( &localTime );
    return localTime;
}

std::array<char, 9> orion::core::Console::getTimeFormat( const SYSTEMTIME& time ) noexcept
{
    std::array<char, 9> timeFormat;
    context.getKernel32().getTimeFormatA( LOCALE_NAME_USER_DEFAULT,
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
