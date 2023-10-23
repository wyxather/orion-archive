#pragma once

#define log ::orion::core::Console::Log<__FILE__, std::source_location::current().line()>

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

    enum class Mode
    {
        Trace,
        Debug,
        Info,
        Warn,
        Error
    };

    static constexpr auto mode = Mode::Trace;

    template<stb::fixed_string filePath, std::size_t line>
    class Log final
    {
        Log()                        = delete;
        ~Log()                       = delete;
        Log( Log&& )                 = delete;
        Log& operator=( Log&& )      = delete;
        Log( const Log& )            = delete;
        Log& operator=( const Log& ) = delete;

        _NODISCARD static consteval auto parseFilePath() noexcept
        {
            constexpr auto begin  = stb::detail::find_last_of( filePath, '\\' ) + 1;
            constexpr auto end    = stb::detail::find_last_of( filePath, '.' );
            constexpr auto length = end - begin;

            std::array<char, length> fileName;
            for ( std::size_t i = 0; i < length; ++i )
            {
                fileName[i] = filePath[begin + i];
            }
            return stb::fixed_string<fileName.size()>( fileName.data() );
        }

      public:
        template<stb::fixed_string format = "%s\n", typename... Args>
        static constexpr void trace( Args&&... args ) noexcept
        {
            if constexpr ( mode <= Mode::Trace )
            {
                std::array<char, 512> buffer;
                const auto&           console = getConsole();
                console.printPrefix( buffer,
                                     xorstr_( "TRACE" ),
                                     FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
                                     xorarr_( stb::consteval_value<parseFilePath()>::value ),
                                     line );
                console.print( buffer.data(),
                               console.format( buffer.data(),
                                               sizeof( buffer ),
                                               buffer.size(),
                                               xorarr_( format ),
                                               std::forward<Args>( args )... ) );
            }
        }

        template<stb::fixed_string format = "%s\n", typename... Args>
        static constexpr void debug( Args&&... args ) noexcept
        {
            if constexpr ( mode <= Mode::Trace )
            {
                std::array<char, 512> buffer;
                const auto&           console = getConsole();
                console.printPrefix( buffer,
                                     xorstr_( "DEBUG" ),
                                     FOREGROUND_BLUE | FOREGROUND_INTENSITY,
                                     xorarr_( stb::consteval_value<parseFilePath()>::value ),
                                     line );
                console.print( buffer.data(),
                               console.format( buffer.data(),
                                               sizeof( buffer ),
                                               buffer.size(),
                                               xorarr_( format ),
                                               std::forward<Args>( args )... ) );
            }
        }

        template<stb::fixed_string format = "%s\n", typename... Args>
        static constexpr void info( Args&&... args ) noexcept
        {
            if constexpr ( mode <= Mode::Trace )
            {
                std::array<char, 512> buffer;
                const auto&           console = getConsole();
                console.printPrefix( buffer,
                                     xorstr_( "INFO" ),
                                     FOREGROUND_GREEN | FOREGROUND_INTENSITY,
                                     xorarr_( stb::consteval_value<parseFilePath()>::value ),
                                     line );
                console.print( buffer.data(),
                               console.format( buffer.data(),
                                               sizeof( buffer ),
                                               buffer.size(),
                                               xorarr_( format ),
                                               std::forward<Args>( args )... ) );
            }
        }

        template<stb::fixed_string format = "%s\n", typename... Args>
        static constexpr void warn( Args&&... args ) noexcept
        {
            if constexpr ( mode <= Mode::Trace )
            {
                std::array<char, 512> buffer;
                const auto&           console = getConsole();
                console.printPrefix( buffer,
                                     xorstr_( "WARN" ),
                                     FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY,
                                     xorarr_( stb::consteval_value<parseFilePath()>::value ),
                                     line );
                console.print( buffer.data(),
                               console.format( buffer.data(),
                                               sizeof( buffer ),
                                               buffer.size(),
                                               xorarr_( format ),
                                               std::forward<Args>( args )... ) );
            }
        }

        template<stb::fixed_string format = "%s\n", typename... Args>
        static constexpr void error( Args&&... args ) noexcept
        {
            if constexpr ( mode <= Mode::Trace )
            {
                std::array<char, 512> buffer;
                const auto&           console = getConsole();
                console.printPrefix( buffer,
                                     xorstr_( "ERROR" ),
                                     FOREGROUND_RED | FOREGROUND_INTENSITY,
                                     xorarr_( stb::consteval_value<parseFilePath()>::value ),
                                     line );
                console.print( buffer.data(),
                               console.format( buffer.data(),
                                               sizeof( buffer ),
                                               buffer.size(),
                                               xorarr_( format ),
                                               std::forward<Args>( args )... ) );
            }
        }
    };

  private:
    static BOOL WINAPI ctrlHandler( DWORD ctrlType ) noexcept;

    _NODISCARD static int format(
        char* buffer, std::size_t bufferSizeInBytes, std::size_t maxNumChars, const char* format, ... ) noexcept;
    _NODISCARD static const Console&       getConsole() noexcept;
    _NODISCARD static std::array<char, 12> getDateFormat( const SYSTEMTIME& time ) noexcept;
    _NODISCARD static SYSTEMTIME           getLocalTime() noexcept;
    _NODISCARD static std::array<char, 9>  getTimeFormat( const SYSTEMTIME& time ) noexcept;

    void print( const char* str, DWORD strLen ) const noexcept;
    void printPrefix( std::array<char, 512>& buffer,
                      const char*            mode,
                      WORD                   color,
                      const char*            fileName,
                      std::size_t            line ) const noexcept;
    void setTextOutputColor( WORD color ) const noexcept;

    HANDLE stdOutputHandle = nullptr;
};

} // namespace core

} // namespace orion
