#include "source/context.h"

orion::core::Renderer::Renderer( [[maybe_unused]] const imports::Ntdll&    ntdll,
                                 [[maybe_unused]] const imports::Kernel32& kernel32,
                                 [[maybe_unused]] const imports::User32&   user32 ) noexcept
{
    auto enumerator = LI_MOD( "d3d11.dll" )::enumerator();
    if ( ( enumerator.value != enumerator.head ) && ( enumerator.value->DllBase != nullptr ) )
    {
        switch ( getUserInput( xorstr_( "DirectX11" ), xorstr_( "Renderer" ) ) )
        {
        case IDYES:
            ldrDataTableEntry = enumerator.value;
            [[fallthrough]];
        case IDCANCEL:
            return;
        default:
            break;
        }
    }
    enumerator = LI_MOD( "d3d9.dll" )::enumerator();
    if ( ( enumerator.value != enumerator.head ) && ( enumerator.value->DllBase != nullptr ) )
    {
        switch ( getUserInput( xorstr_( "DirectX9" ), xorstr_( "Renderer" ) ) )
        {
        case IDYES:
            ldrDataTableEntry = enumerator.value;
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
    if ( ldrDataTableEntry == nullptr )
    {
        return;
    }
    if ( hookRTTS() )
    {
        return;
    }
    if ( _wcsicmp( ldrDataTableEntry->BaseDllName.Buffer, xorstr_( L"d3d11.dll" ) ) == 0 )
    {
        return hookDirect3D11();
    }
    if ( _wcsicmp( ldrDataTableEntry->BaseDllName.Buffer, xorstr_( L"d3d9.dll" ) ) == 0 )
    {
        return hookDirect3D9();
    }
}

void orion::core::Renderer::unhook() noexcept
{
}

int orion::core::Renderer::getUserInput( const char* text, const char* caption ) noexcept
{
    return context.getUser32().messageBoxA(
        context.getUser32().gadgetAddress, nullptr, text, caption, MB_YESNOCANCEL | MB_ICONQUESTION );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::direct3DDevice9Reset(
    CONST LPDIRECT3DDEVICE9 direct3DDevice9, CONST D3DPRESENT_PARAMETERS* CONST presentationParameters ) noexcept
{
    return context.getRenderer().hooks->stdcall<0, HRESULT>( direct3DDevice9, presentationParameters );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::direct3DDevice9Present( CONST LPDIRECT3DDEVICE9 direct3DDevice9,
                                                                         CONST LPRECT            sourceRect,
                                                                         CONST LPRECT            destRect,
                                                                         CONST HWND              destWindowOverride,
                                                                         CONST LPRGNDATA         dirtyRegion ) noexcept
{
    return context.getRenderer().hooks->stdcall<1, HRESULT>(
        direct3DDevice9, sourceRect, destRect, destWindowOverride, dirtyRegion );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::dXGISwapChainPresent( CONST IDXGISwapChain* CONST dXGISwapChain,
                                                                       CONST UINT                  syncInterval,
                                                                       CONST UINT                  flags ) noexcept
{
    return context.getRenderer().hooks->stdcall<0, HRESULT>( dXGISwapChain, syncInterval, flags );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::dXGISwapChainResizeBuffers( CONST IDXGISwapChain* CONST dXGISwapChain,
                                                                             CONST UINT                  bufferCount,
                                                                             CONST UINT                  width,
                                                                             CONST UINT                  height,
                                                                             CONST DXGI_FORMAT           newFormat,
                                                                             CONST UINT swapChainFlags ) noexcept
{
    return context.getRenderer().hooks->stdcall<1, HRESULT>(
        dXGISwapChain, bufferCount, width, height, newFormat, swapChainFlags );
}

bool orion::core::Renderer::hookRTTS() noexcept
{
#ifndef _WIN64
    if ( const auto enumerator = LI_MOD( "rtsshooks.dll" )::enumerator();
         ( enumerator.value != enumerator.head ) && ( enumerator.value->DllBase != nullptr ) )
#else
    if ( const auto enumerator = LI_MOD( "rtsshooks64.dll" )::enumerator();
         ( enumerator.value != enumerator.head ) && ( enumerator.value->DllBase != nullptr ) )
#endif
    {
        if ( _wcsicmp( ldrDataTableEntry->BaseDllName.Buffer, xorstr_( L"d3d11.dll" ) ) == 0 )
        {
            ldrDataTableEntry = enumerator.value;
            hookDirect3D11RTTS();
        }
        else if ( _wcsicmp( ldrDataTableEntry->BaseDllName.Buffer, xorstr_( L"d3d9.dll" ) ) == 0 )
        {
            ldrDataTableEntry = enumerator.value;
            hookDirect3D9RTSS();
        }
        return true;
    }
    return false;
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
    const auto direct3DCreate9 =
        LI_FUNC( Direct3DCreate9 )::in_safe<utilities::RetSpoofInvoker<decltype( &Direct3DCreate9 )>>(
            ldrDataTableEntry->DllBase );
    if ( direct3DCreate9 == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find Direct3DCreate9." ) );
        return;
    }
    const auto gadget =
        utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( *ldrDataTableEntry ) );
    if ( gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for DirectX9." ) );
        return;
    }
    const Microsoft::WRL::ComPtr<IDirect3D9> direct3d9 = direct3DCreate9( gadget, D3D_SDK_VERSION );
    if ( direct3d9.Get() == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create IDirect3D9." ) );
        return;
    }
    D3DPRESENT_PARAMETERS d3DPresentParameters {
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
    Microsoft::WRL::ComPtr<IDirect3DDevice9> direct3DDevice9;
    if ( direct3d9->CreateDevice( D3DADAPTER_DEFAULT,
                                  D3DDEVTYPE::D3DDEVTYPE_NULLREF,
                                  window.handle,
                                  D3DCREATE_SOFTWARE_VERTEXPROCESSING | D3DCREATE_DISABLE_DRIVER_MANAGEMENT,
                                  &d3DPresentParameters,
                                  direct3DDevice9.GetAddressOf() ) != D3D_OK ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create IDirect3DDevice9." ) );
        return;
    }
    const auto virtualMethod = *reinterpret_cast<void***>( direct3DDevice9.Get() );
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
    const auto moduleBytes = utilities::Memory::getModuleBytes( *ldrDataTableEntry );
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
    const auto d3D11CreateDeviceAndSwapChain = LI_FUNC( D3D11CreateDeviceAndSwapChain )::in_safe<
        utilities::RetSpoofInvoker<decltype( &D3D11CreateDeviceAndSwapChain )>>( ldrDataTableEntry->DllBase );
    if ( d3D11CreateDeviceAndSwapChain == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find D3D11CreateDeviceAndSwapChain." ) );
        return;
    }
    const auto gadget =
        utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( *ldrDataTableEntry ) );
    if ( gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for DirectX11." ) );
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
    if ( d3D11CreateDeviceAndSwapChain( gadget,
                                        nullptr,
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
    const auto moduleBytes = utilities::Memory::getModuleBytes( *ldrDataTableEntry );
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
        { xorstr_( "ldrDataTableEntry" ), reinterpret_cast<std::uintptr_t>( renderer.ldrDataTableEntry ) },
        { xorstr_( "hooks" ), renderer.hooks },
    };
}

orion::core::Renderer::WindowClass::WindowClass() noexcept
    :  value {
          sizeof( value ),
          CS_HREDRAW | CS_VREDRAW,
          context.getNtdll().ntdllDefWindowProc_A,
          0,
          0,
          context.getKernel32().getModuleHandleA( context.getNtdll().gadgetAddress, nullptr ),
          nullptr,
          nullptr,
          nullptr,
          nullptr,
          xorstr_( "     " ),
          nullptr,
      },
      atom( context.getUser32().registerClassExA( context.getUser32().gadgetAddress, &value ) )
{
}

orion::core::Renderer::WindowClass::~WindowClass() noexcept
{
    if ( isRegistered() ) [[likely]]
    {
        if ( context.getUser32().unregisterClassA(
                 context.getUser32().gadgetAddress, reinterpret_cast<LPCSTR>( LOWORD( atom ) ), value.hInstance ) == 0 )
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
    : handle { context.getUser32().createWindowExA( context.getUser32().gadgetAddress,
                                                    0,
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
        if ( context.getUser32().destroyWindow( context.getUser32().gadgetAddress, handle ) == 0 ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to destroy window." ) );
        }
    }
}

bool orion::core::Renderer::Window::isCreated() const noexcept
{
    return ( handle != nullptr );
}
