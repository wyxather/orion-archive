#pragma once

namespace orion
{

namespace imports
{

struct Kernel32;
struct Ntdll;
struct User32;

} // namespace imports

namespace core
{

struct Platform;

struct Renderer final
{
    enum class Type
    {
        Undefined,
        Direct3D9,
        Direct3D11,
    };

    friend void to_json( nlohmann::json& json, const Renderer& renderer ) noexcept;

    Renderer( Renderer&& )                 = delete;
    Renderer& operator=( Renderer&& )      = delete;
    Renderer( const Renderer& )            = delete;
    Renderer& operator=( const Renderer& ) = delete;

    explicit Renderer( const imports::Kernel32& kernel32,
                       const imports::Ntdll&    ntdll,
                       const imports::User32&   user32,
                       const Platform&          platform ) noexcept;

    void hook() noexcept;
    void unhook() noexcept;

  private:
    _NODISCARD static int getUserInput( const char* text, const char* caption ) noexcept;

    void hookDirect3D9() noexcept;
    void hookDirect3D11() noexcept;

    struct WindowClass final
    {
        WindowClass( WindowClass&& )                 = delete;
        WindowClass& operator=( WindowClass&& )      = delete;
        WindowClass( const WindowClass& )            = delete;
        WindowClass& operator=( const WindowClass& ) = delete;

        explicit WindowClass() noexcept;

        ~WindowClass() noexcept;

        _NODISCARD bool isRegistered() const noexcept;

        const WNDCLASSEXA value;
        const ATOM        atom;
    };

    struct Window final
    {
        Window( Window&& )                 = delete;
        Window& operator=( Window&& )      = delete;
        Window( const Window& )            = delete;
        Window& operator=( const Window& ) = delete;

        explicit Window( const WindowClass& windowClass ) noexcept;

        ~Window() noexcept;

        _NODISCARD bool isCreated() const noexcept;

        const HWND handle;
    };

    HMODULE handle = nullptr;
    Type    type   = Type::Undefined;
};

} // namespace core

} // namespace orion
