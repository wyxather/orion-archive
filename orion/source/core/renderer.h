#pragma once

namespace orion
{

namespace imports
{

struct Ntdll;
struct Kernel32;
struct User32;

} // namespace imports

namespace core
{

struct Renderer final
{
    friend void to_json( nlohmann::json& json, const Renderer& renderer ) noexcept;

    Renderer( Renderer&& )                 = delete;
    Renderer& operator=( Renderer&& )      = delete;
    Renderer( const Renderer& )            = delete;
    Renderer& operator=( const Renderer& ) = delete;

    explicit Renderer( const imports::Ntdll&    ntdll,
                       const imports::Kernel32& kernel32,
                       const imports::User32&   user32 ) noexcept;

    void hook() noexcept;
    void unhook() noexcept;

  private:
    _NODISCARD static int getUserInput( const char* text, const char* caption ) noexcept;

    static HRESULT STDMETHODCALLTYPE direct3DDevice9Reset(
        CONST LPDIRECT3DDEVICE9 direct3DDevice9, CONST D3DPRESENT_PARAMETERS* CONST presentationParameters ) noexcept;

    static HRESULT STDMETHODCALLTYPE direct3DDevice9Present( CONST LPDIRECT3DDEVICE9 direct3DDevice9,
                                                             CONST LPRECT            sourceRect,
                                                             CONST LPRECT            destRect,
                                                             CONST HWND              destWindowOverride,
                                                             CONST LPRGNDATA         dirtyRegion ) noexcept;

    static HRESULT STDMETHODCALLTYPE dXGISwapChainPresent( CONST IDXGISwapChain* CONST dXGISwapChain,
                                                           CONST UINT                  syncInterval,
                                                           CONST UINT                  flags ) noexcept;

    static HRESULT STDMETHODCALLTYPE dXGISwapChainResizeBuffers( CONST IDXGISwapChain* CONST dXGISwapChain,
                                                                 CONST UINT                  bufferCount,
                                                                 CONST UINT                  width,
                                                                 CONST UINT                  height,
                                                                 CONST DXGI_FORMAT           newFormat,
                                                                 CONST UINT                  swapChainFlags ) noexcept;

    _NODISCARD bool hookRTTS() noexcept;
    void            hookDirect3D9() noexcept;
    void            hookDirect3D9RTSS() noexcept;
    void            hookDirect3D11() noexcept;
    void            hookDirect3D11RTTS() noexcept;

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

    const li::detail::win::LDR_DATA_TABLE_ENTRY_T*  ldrDataTableEntry = nullptr;
    utilities::Option<utilities::MinHook<2>, false> hooks;
};

} // namespace core

} // namespace orion
