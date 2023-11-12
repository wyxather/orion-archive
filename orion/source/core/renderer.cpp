#include "source/context.h"

orion::core::Renderer::Renderer( const imports::Kernel32& kernel32,
                                 const imports::Ntdll&    ntdll,
                                 const imports::User32&   user32 ) noexcept
{
    if ( handle = LI_MOD( "d3d11.dll" )::safe<decltype( handle )>(); handle != nullptr )
    {
        switch ( getUserInput( xorstr_( "DirectX11" ), xorstr_( "Renderer" ) ) )
        {
        case IDYES:
            type = Type::Direct3D11;
            [[fallthrough]];
        case IDCANCEL:
            return;
        default:
            break;
        }
    }
    if ( handle = LI_MOD( "d3d9.dll" )::safe<decltype( handle )>(); handle != nullptr )
    {
        switch ( getUserInput( xorstr_( "DirectX9" ), xorstr_( "Renderer" ) ) )
        {
        case IDYES:
            type = Type::Direct3D9;
            [[fallthrough]];
        case IDCANCEL:
            return;
        default:
            break;
        }
    }
}

void orion::core::Renderer::hook() noexcept
{
#ifndef _WIN64
    if ( handle = LI_MOD( "rtsshooks.dll" )::safe<HMODULE>(); handle != nullptr )
#else
    if ( handle = LI_MOD( "rtsshooks64.dll" )::safe<HMODULE>(); handle != nullptr )
#endif
    {
        switch ( type )
        {
        case Type::Direct3D11:
            hookDirect3D11RTTS();
            break;
        case Type::Direct3D9:
            hookDirect3D9RTSS();
            break;
        default:
            break;
        }
    }
    else
    {
        switch ( type )
        {
        case Type::Direct3D11:
            hookDirect3D11();
            break;
        case Type::Direct3D9:
            hookDirect3D9();
            break;
        default:
            break;
        }
    }
}

void orion::core::Renderer::unhook() noexcept
{
}

int orion::core::Renderer::getUserInput( const char* text, const char* caption ) noexcept
{
    return context.getUser32().messageBoxA( nullptr, text, caption, MB_YESNOCANCEL | MB_ICONQUESTION );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::direct3DDevice9Reset(
    CONST LPDIRECT3DDEVICE9 device, CONST D3DPRESENT_PARAMETERS* CONST presentationParameters ) noexcept
{
    return context.getRenderer().hooks->stdcall<0, HRESULT>( device, presentationParameters );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::direct3DDevice9Present( CONST LPDIRECT3DDEVICE9 device,
                                                                         CONST LPRECT            sourceRect,
                                                                         CONST LPRECT            destRect,
                                                                         CONST HWND              destWindowOverride,
                                                                         CONST LPRGNDATA         dirtyRegion ) noexcept
{
    return context.getRenderer().hooks->stdcall<1, HRESULT>(
        device, sourceRect, destRect, destWindowOverride, dirtyRegion );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::dXGISwapChainPresent( CONST IDXGISwapChain* CONST swapChain,
                                                                       CONST UINT                  syncInterval,
                                                                       CONST UINT                  flags ) noexcept
{
    return context.getRenderer().hooks->stdcall<0, HRESULT>( swapChain, syncInterval, flags );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::dXGISwapChainResizeBuffers( CONST IDXGISwapChain* CONST swapChain,
                                                                             CONST UINT                  bufferCount,
                                                                             CONST UINT                  width,
                                                                             CONST UINT                  height,
                                                                             CONST DXGI_FORMAT           newFormat,
                                                                             CONST UINT swapChainFlags ) noexcept
{
    return context.getRenderer().hooks->stdcall<1, HRESULT>(
        swapChain, bufferCount, width, height, newFormat, swapChainFlags );
}

void orion::core::Renderer::hookDirect3D9() noexcept
{
    const WindowClass windowClass;
    if ( !windowClass.isRegistered() ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to register window class." ) );
        return;
    }
    const Window window( windowClass );
    if ( !window.isCreated() ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create window." ) );
        return;
    }
    const auto direct3DCreate9 = LI_FUNC( Direct3DCreate9 )::in_safe<LPDIRECT3D9( WINAPI* )( std::uint32_t )>( handle );
    if ( direct3DCreate9 == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find Direct3DCreate9." ) );
        return;
    }
    const Microsoft::WRL::ComPtr<IDirect3D9> direct3d9 = direct3DCreate9( D3D_SDK_VERSION );
    if ( direct3d9.Get() == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create IDirect3D9." ) );
        return;
    }
    D3DPRESENT_PARAMETERS params {
        0,
        0,
        D3DFORMAT::D3DFMT_UNKNOWN,
        0,
        D3DMULTISAMPLE_TYPE::D3DMULTISAMPLE_NONE,
        0,
        D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD,
        window.handle,
        TRUE,
        FALSE,
        D3DFORMAT::D3DFMT_UNKNOWN,
        0,
        0,
        D3DPRESENT_INTERVAL_ONE,
    };
    Microsoft::WRL::ComPtr<IDirect3DDevice9> device;
    if ( direct3d9->CreateDevice( D3DADAPTER_DEFAULT,
                                  D3DDEVTYPE::D3DDEVTYPE_NULLREF,
                                  window.handle,
                                  D3DCREATE_SOFTWARE_VERTEXPROCESSING | D3DCREATE_DISABLE_DRIVER_MANAGEMENT,
                                  &params,
                                  device.GetAddressOf() ) != D3D_OK ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create IDirect3DDevice9." ) );
        return;
    }
    const auto gadget =
        utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( context.getKernel32(), handle ) );
    if ( gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for IDirect3DDevice9." ) );
        return;
    }
    const auto virtualMethod = *reinterpret_cast<void***>( device.Get() );
    hooks.emplace( gadget );
    if ( !hooks->hookAt( 0, virtualMethod[16], &direct3DDevice9Reset ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirect3DDevice9::Reset." ) );
    }
    if ( !hooks->hookAt( 1, virtualMethod[17], &direct3DDevice9Present ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirect3DDevice9::Present." ) );
    }
}

void orion::core::Renderer::hookDirect3D9RTSS() noexcept
{
    const auto moduleBytes = utilities::Memory::getModuleBytes( context.getKernel32(), handle );
#ifndef _WIN64
    const auto direct3DDevice9ResetDetour =
        utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 40 D8 45 13 00">::find( moduleBytes );
#else
    const auto direct3DDevice9ResetDetour = utilities::Memory::Pattern<
        "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 F0 0F BA 2D E7 D9 45 03 00 48 8B DA">::
        find( moduleBytes );
#endif
    if ( direct3DDevice9ResetDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDirect3DDevice9::Reset (Detour)." ) );
        return;
    }
#ifndef _WIN64
    const auto direct3DDevice9PresentDetour =
        utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 78 D6 45 13 00">::find( moduleBytes );
#else
    const auto direct3DDevice9PresentDetour = utilities::Memory::Pattern<
        "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 41 55 41 56 48 "
        "83 EC 30 F0 0F BA 2D DD D9 45 03 00 49 8B E9 4D 8B E0 4C 8B EA">::find( moduleBytes );
#endif
    if ( direct3DDevice9PresentDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDirect3DDevice9::Present (Detour)." ) );
        return;
    }
    const auto gadget = utilities::Memory::Pattern<"FF 23">::find( moduleBytes );
    if ( gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for IDirect3DDevice9 (Detour)." ) );
        return;
    }
    hooks.emplace( gadget );
    if ( !hooks->hookAt( 0, direct3DDevice9ResetDetour, &direct3DDevice9Reset ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirect3DDevice9::Reset (Detour)." ) );
    }
    if ( !hooks->hookAt( 1, direct3DDevice9PresentDetour, &direct3DDevice9Present ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirect3DDevice9::Present (Detour)." ) );
    }
}

void orion::core::Renderer::hookDirect3D11() noexcept
{
    const WindowClass windowClass;
    if ( !windowClass.isRegistered() ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to register window class." ) );
        return;
    }
    const Window window( windowClass );
    if ( !window.isCreated() ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create window." ) );
        return;
    }
    const auto d3D11CreateDeviceAndSwapChain =
        LI_FUNC( D3D11CreateDeviceAndSwapChain )::in_safe<HRESULT( WINAPI* )( IDXGIAdapter*,
                                                                              D3D_DRIVER_TYPE,
                                                                              HMODULE,
                                                                              UINT,
                                                                              const D3D_FEATURE_LEVEL*,
                                                                              UINT,
                                                                              UINT,
                                                                              const DXGI_SWAP_CHAIN_DESC*,
                                                                              IDXGISwapChain**,
                                                                              ID3D11Device**,
                                                                              D3D_FEATURE_LEVEL*,
                                                                              ID3D11DeviceContext** )>( handle );
    if ( d3D11CreateDeviceAndSwapChain == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find D3D11CreateDeviceAndSwapChain." ) );
        return;
    }
    D3D_FEATURE_LEVEL          d3DFeatureLevel;
    const DXGI_SWAP_CHAIN_DESC dXGISwapChainDesc {
        DXGI_MODE_DESC {
            100,
            100,
            DXGI_RATIONAL { 60, 1 },
            DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM,
            DXGI_MODE_SCANLINE_ORDER::DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED,
            DXGI_MODE_SCALING::DXGI_MODE_SCALING_UNSPECIFIED,
        },
        DXGI_SAMPLE_DESC { 1, 0 },
        DXGI_USAGE_RENDER_TARGET_OUTPUT,
        1,
        window.handle,
        TRUE,
        DXGI_SWAP_EFFECT::DXGI_SWAP_EFFECT_DISCARD,
        DXGI_SWAP_CHAIN_FLAG::DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH,
    };
    Microsoft::WRL::ComPtr<IDXGISwapChain>      dXGISwapChain;
    Microsoft::WRL::ComPtr<ID3D11Device>        d3D11Device;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext> d3D11DeviceContext;
    if ( d3D11CreateDeviceAndSwapChain( nullptr,
                                        D3D_DRIVER_TYPE::D3D_DRIVER_TYPE_HARDWARE,
                                        nullptr,
                                        0,
                                        std::array<D3D_FEATURE_LEVEL, 2> { D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_10_1,
                                                                           D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_11_0 }
                                            .data(),
                                        2,
                                        D3D11_SDK_VERSION,
                                        &dXGISwapChainDesc,
                                        dXGISwapChain.GetAddressOf(),
                                        d3D11Device.GetAddressOf(),
                                        &d3DFeatureLevel,
                                        d3D11DeviceContext.GetAddressOf() ) != S_OK ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create ID3D11Device & IDXGISwapChain." ) );
        return;
    }
    const auto gadget =
        utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( context.getKernel32(), handle ) );
    if ( gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for IDXGISwapChain." ) );
        return;
    }
    const auto virtualMethod = *reinterpret_cast<void***>( dXGISwapChain.Get() );
    hooks.emplace( gadget );
    if ( !hooks->hookAt( 0, virtualMethod[8], &dXGISwapChainPresent ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDXGISwapChain::Present." ) );
    }
    if ( !hooks->hookAt( 1, virtualMethod[13], &dXGISwapChainResizeBuffers ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDXGISwapChain::ResizeBuffers." ) );
    }
}

void orion::core::Renderer::hookDirect3D11RTTS() noexcept
{
    const auto moduleBytes = utilities::Memory::getModuleBytes( context.getKernel32(), handle );
#ifndef _WIN64
    const auto dXGISwapChainPresentDetour = utilities::Memory::Pattern<
        "81 EC 40 01 00 00 A1 B0 70 0A 10 33 C4 89 84 24 3C 01 00 00 53 56 57 8B BC 24 50 01 00 00 68 C0">::
        find( moduleBytes );
#else
    const auto dXGISwapChainPresentDetour = utilities::Memory::Pattern<
        "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 48 83 EC 20 F0 0F BA 2D B1 D6">::
        find( moduleBytes );
#endif
    if ( dXGISwapChainPresentDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDXGISwapChain::Present (Detour)." ) );
        return;
    }
#ifndef _WIN64
    const auto dXGISwapChainResizeBuffersDetour =
        utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 00 DD 45 13 00 73 24 FF 15 68">::find( moduleBytes );
#else
    const auto dXGISwapChainResizeBuffersDetour = utilities::Memory::Pattern<
        "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 54 41 55 41 56 41 57 48 83 EC "
        "30 F0 0F BA 2D AF D3 45 03 00 4D 8B E1 4D 8B E8 4C 8B F2 4C 8B">::find( moduleBytes );
#endif
    if ( dXGISwapChainResizeBuffersDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDXGISwapChain::ResizeBuffers (Detour)." ) );
        return;
    }
    const auto gadget = utilities::Memory::Pattern<"FF 23">::find( moduleBytes );
    if ( gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for IDXGISwapChain (Detour)." ) );
        return;
    }
    hooks.emplace( gadget );
    if ( !hooks->hookAt( 0, dXGISwapChainPresentDetour, &dXGISwapChainPresent ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDXGISwapChain::Present (Detour)." ) );
    }
    if ( !hooks->hookAt( 1, dXGISwapChainResizeBuffersDetour, &dXGISwapChainResizeBuffers ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDXGISwapChain::ResizeBuffers (Detour)." ) );
    }
}

void orion::core::to_json( nlohmann::json& json, const Renderer& renderer ) noexcept
{
    json = {
        { xorstr_( "type" ), renderer.type },
        { xorstr_( "handle" ), reinterpret_cast<std::uintptr_t>( renderer.handle ) },
    };
}

orion::core::Renderer::WindowClass::WindowClass() noexcept
    :  value {
          sizeof( value ),
          CS_HREDRAW | CS_VREDRAW,
          context.getNtdll().ntdllDefWindowProc_A,
          0,
          0,
          context.getKernel32().getModuleHandleA( nullptr ),
          nullptr,
          nullptr,
          nullptr,
          nullptr,
          xorstr_( "     " ),
          nullptr,
      },
      atom( context.getUser32().registerClassExA( &value ) )
{
}

orion::core::Renderer::WindowClass::~WindowClass() noexcept
{
    if ( isRegistered() ) [[likely]]
    {
        if ( context.getUser32().unregisterClassA( reinterpret_cast<LPCSTR>( LOWORD( atom ) ), value.hInstance ) == 0 )
            [[unlikely]]
        {
            log::error( xorstr_( "Failed to unregister window class." ) );
        }
    }
}

bool orion::core::Renderer::WindowClass::isRegistered() const noexcept
{
    return ( atom != 0 );
}

orion::core::Renderer::Window::Window( const WindowClass& windowClass ) noexcept
    : handle { context.getUser32().createWindowExA( 0,
                                                    reinterpret_cast<LPCSTR>( LOWORD( windowClass.atom ) ),
                                                    nullptr,
                                                    WS_OVERLAPPEDWINDOW,
                                                    0,
                                                    0,
                                                    100,
                                                    100,
                                                    nullptr,
                                                    nullptr,
                                                    windowClass.value.hInstance,
                                                    nullptr ) }
{
}

orion::core::Renderer::Window::~Window() noexcept
{
    if ( isCreated() ) [[likely]]
    {
        if ( context.getUser32().destroyWindow( handle ) == 0 ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to destroy window." ) );
        }
    }
}

bool orion::core::Renderer::Window::isCreated() const noexcept
{
    return ( handle != nullptr );
}
