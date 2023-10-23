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

struct Platform final
{
    Platform( Platform&& )                 = delete;
    Platform& operator=( Platform&& )      = delete;
    Platform( const Platform& )            = delete;
    Platform& operator=( const Platform& ) = delete;

    explicit Platform( const imports::Kernel32& kernel32, const imports::User32& user32 ) noexcept;

  private:
    struct Window final
    {
        Window( Window&& )                 = delete;
        Window& operator=( Window&& )      = delete;
        Window( const Window& )            = delete;
        Window& operator=( const Window& ) = delete;

        explicit Window( const imports::Kernel32& kernel32, const imports::User32& user32 ) noexcept;

        _NODISCARD LRESULT callOriginalProcedure( HWND   window,
                                                  UINT   message,
                                                  WPARAM wParam,
                                                  LPARAM lParam ) const noexcept;

      private:
        static BOOL CALLBACK    enumWindowsProc( HWND window, Window& self ) noexcept;
        static LRESULT CALLBACK procedure( HWND window, UINT message, WPARAM wParam, LPARAM lParam ) noexcept;

        _NODISCARD static WNDPROC               getProcedure( HWND window ) noexcept;
        _NODISCARD static std::vector<char>     getText( HWND window ) noexcept;
        _NODISCARD static std::array<char, 257> getClassName( HWND window ) noexcept;
        _NODISCARD static int   getUserInput( HWND window, const char* className, const char* windowText ) noexcept;
        _NODISCARD static int   getTextLength( HWND window ) noexcept;
        _NODISCARD static DWORD getThreadProcessId( HWND window ) noexcept;
        _NODISCARD static bool  isVisible( HWND window ) noexcept;
        _NODISCARD static bool  isEqualToCurrentProcessId( DWORD processId ) noexcept;
        _NODISCARD static bool  isConsole( const char* className ) noexcept;

        HWND    handle            = nullptr;
        WNDPROC originalProcedure = nullptr;
    };

  public:
    const Window window;
};

} // namespace core

} // namespace orion