#include "dependencies/imgui/imgui_impl_dx11.h"
#include "dependencies/imgui/imgui_impl_dx9.h"
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
            ldr = enumerator.value;
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
            ldr = enumerator.value;
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
    if ( ldr == nullptr )
    {
        return;
    }
    if ( _wcsicmp( ldr->BaseDllName.Buffer, xorstr_( L"d3d11.dll" ) ) == 0 )
    {
        return hookDirect3D11();
    }
    if ( _wcsicmp( ldr->BaseDllName.Buffer, xorstr_( L"d3d9.dll" ) ) == 0 )
    {
        return hookDirect3D9();
    }
}

void orion::core::Renderer::unhook() noexcept
{
    const auto backendRendererName = ImGui::GetIO().BackendRendererName;
    if ( backendRendererName == nullptr )
    {
        return;
    }
    if ( utilities::String::strcmp( xorstr_( "imgui_impl_dx11" ), backendRendererName ) == 0 )
    {
        context.getGui().getPostProcess2()->invalidateDeviceObjects();
        ImGui_ImplDX11_Shutdown();
    }
    else if ( utilities::String::strcmp( xorstr_( "imgui_impl_dx9" ), backendRendererName ) == 0 )
    {
        context.getGui().getPostProcess()->invalidateDeviceObjects();
        ImGui_ImplDX9_Shutdown();
    }
}

int orion::core::Renderer::getUserInput( const char* text, const char* caption ) noexcept
{
    return context.getUser32().messageBoxA(
        context.getUser32().gadgetAddress, nullptr, text, caption, MB_YESNOCANCEL | MB_ICONQUESTION );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::direct3DDevice9Reset(
    CONST LPDIRECT3DDEVICE9 direct3DDevice9, CONST D3DPRESENT_PARAMETERS* CONST presentationParameters ) noexcept
{
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]]
    {
        return context.getRenderer().hooks->stdcall<0, HRESULT>( direct3DDevice9, presentationParameters );
    }
    context.getGui().getPostProcess()->invalidateDeviceObjects();
    ImGui_ImplDX9_InvalidateDeviceObjects();
    const auto result = context.getRenderer().hooks->stdcall<0, HRESULT>( direct3DDevice9, presentationParameters );
    ImGui_ImplDX9_CreateDeviceObjects();
    context.getGui().getPostProcess()->createDeviceObjects();
    return result;
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::direct3DDevice9Present( CONST LPDIRECT3DDEVICE9 direct3DDevice9,
                                                                         CONST LPRECT            sourceRect,
                                                                         CONST LPRECT            destRect,
                                                                         CONST HWND              destWindowOverride,
                                                                         CONST LPRGNDATA         dirtyRegion ) noexcept
{
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]]
    {
        ImGui_ImplDX9_Init( direct3DDevice9 );
        context.getGui().getPostProcess().emplace( *direct3DDevice9 );
        context.getGui().getPostProcess()->createDeviceObjects();
    }
    ImGui_ImplDX9_NewFrame();
    Platform::newFrame();
    ImGui::NewFrame();
    context.getGui().draw(
        []() noexcept
        {
            context.getGui().getPostProcess()->draw( *ImGui::GetWindowDrawList() );
        } );
    ImGui::ShowDemoWindow();
    ImGui::EndFrame();
    if ( direct3DDevice9->BeginScene() == D3D_OK ) [[likely]]
    {
        ImGui::Render();
        ImGui_ImplDX9_RenderDrawData( ImGui::GetDrawData() );
        direct3DDevice9->EndScene();
    }
    return context.getRenderer().hooks->stdcall<1, HRESULT>(
        direct3DDevice9, sourceRect, destRect, destWindowOverride, dirtyRegion );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::dXGISwapChainPresent( IDXGISwapChain* CONST dXGISwapChain,
                                                                       CONST UINT            syncInterval,
                                                                       CONST UINT            flags ) noexcept
{
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]]
    {
        if ( ID3D11Device * d3D11Device {};
             dXGISwapChain->GetDevice( IID_ID3D11Device, (void**)( &d3D11Device ) ) == S_OK ) [[likely]]
        {
            ID3D11DeviceContext* d3D11DeviceContext;
            d3D11Device->GetImmediateContext( &d3D11DeviceContext );
            ImGui_ImplDX11_Init( d3D11Device, d3D11DeviceContext );
            context.getGui().getPostProcess2().emplace( *dXGISwapChain, *d3D11Device, *d3D11DeviceContext );
            context.getGui().getPostProcess2()->createDeviceObjects();
            d3D11DeviceContext->Release();
            d3D11Device->Release();
        }
    }
    ImGui_ImplDX11_NewFrame();
    Platform::newFrame();
    ImGui::NewFrame();
    context.getGui().getPostProcess2()->setRenderTarget();
    context.getGui().draw(
        []() noexcept
        {
            context.getGui().getPostProcess2()->draw( *ImGui::GetWindowDrawList() );
        } );
    ImGui::ShowDemoWindow();
    ImGui::Render();
    ImGui_ImplDX11_RenderDrawData( ImGui::GetDrawData() );
    return context.getRenderer().hooks->stdcall<0, HRESULT>( dXGISwapChain, syncInterval, flags );
}

HRESULT STDMETHODCALLTYPE orion::core::Renderer::dXGISwapChainResizeBuffers( CONST IDXGISwapChain* CONST dXGISwapChain,
                                                                             CONST UINT                  bufferCount,
                                                                             CONST UINT                  width,
                                                                             CONST UINT                  height,
                                                                             CONST DXGI_FORMAT           newFormat,
                                                                             CONST UINT swapChainFlags ) noexcept
{
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]]
    {
        return context.getRenderer().hooks->stdcall<1, HRESULT>(
            dXGISwapChain, bufferCount, width, height, newFormat, swapChainFlags );
    }
    context.getGui().getPostProcess2()->invalidateDeviceObjects();
    ImGui_ImplDX11_InvalidateDeviceObjects();
    const auto result = context.getRenderer().hooks->stdcall<1, HRESULT>(
        dXGISwapChain, bufferCount, width, height, newFormat, swapChainFlags );
    ImGui_ImplDX11_CreateDeviceObjects();
    context.getGui().getPostProcess2()->createDeviceObjects();
    return result;
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
    const utilities::RetSpoofInvoker<decltype( &Direct3DCreate9 )> direct3DCreate9 =
        LI_FUNC( Direct3DCreate9 )::in_safe( ldr->DllBase );
    if ( direct3DCreate9 == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find Direct3DCreate9." ) );
        return;
    }
    const auto direct3D9Gadget = utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( *ldr ) );
    if ( direct3D9Gadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for DirectX9." ) );
        return;
    }
    IDirect3D9* const direct3D9 = direct3DCreate9( direct3D9Gadget, D3D_SDK_VERSION );
    if ( direct3D9 == nullptr ) [[unlikely]]
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
    IDirect3DDevice9* direct3DDevice9 {};
    if ( direct3D9->CreateDevice( D3DADAPTER_DEFAULT,
                                  D3DDEVTYPE::D3DDEVTYPE_NULLREF,
                                  window.handle,
                                  D3DCREATE_SOFTWARE_VERTEXPROCESSING | D3DCREATE_DISABLE_DRIVER_MANAGEMENT,
                                  &d3DPresentParameters,
                                  &direct3DDevice9 ) != D3D_OK ) [[unlikely]]
    {
        direct3D9->Release();
        log::error( xorstr_( "Failed to create IDirect3DDevice9." ) );
        return;
    }
    if ( !hookDirect3D9RTSS() )
    {
        const auto virtualMethod = *(void***)( direct3DDevice9 );
        hooks.emplace( direct3D9Gadget );
        if ( !hooks->hookAt( 0, virtualMethod[16], &direct3DDevice9Reset ) ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to hook IDirect3DDevice9::Reset." ) );
        }
        if ( !hooks->hookAt( 1, virtualMethod[17], &direct3DDevice9Present ) ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to hook IDirect3DDevice9::Present." ) );
        }
    }
    direct3DDevice9->Release();
    direct3D9->Release();
}

bool orion::core::Renderer::hookDirect3D9RTSS() noexcept
{
#ifndef _WIN64
    const auto rttsEnumerator = LI_MOD( "rtsshooks.dll" )::enumerator();
#else
    const auto rttsEnumerator = LI_MOD( "rtsshooks64.dll" )::enumerator();
#endif
    if ( ( rttsEnumerator.value == rttsEnumerator.head ) || ( rttsEnumerator.value->DllBase == nullptr ) )
    {
        return false;
    }
    const auto rttsBytes = utilities::Memory::getModuleBytes( *rttsEnumerator.value );
#ifndef _WIN64
    auto direct3DDevice9ResetDetour = utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 40 D8 45 13 00">::find( rttsBytes );
    if ( direct3DDevice9ResetDetour == nullptr )
    {
        direct3DDevice9ResetDetour =
            utilities::Memory::Pattern<"68 ?? ?? ?? ?? 50 57 E8 ?? ?? ?? ?? 83 C4 24 83 3D">::find( rttsBytes );
        if ( direct3DDevice9ResetDetour != nullptr ) [[unlikely]]
        {
            direct3DDevice9ResetDetour = *(std::uint8_t**)( ( std::uintptr_t )( direct3DDevice9ResetDetour ) + 1 );
        }
    }
#else
    const auto direct3DDevice9ResetDetour = utilities::Memory::Pattern<
        "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 F0 0F BA 2D E7 D9 45 03 00 48 8B DA">::
        find( rttsBytes );
#endif
    if ( direct3DDevice9ResetDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDirect3DDevice9::Reset (Detour)." ) );
        return false;
    }
#ifndef _WIN64
    auto direct3DDevice9PresentDetour =
        utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 78 D6 45 13 00">::find( rttsBytes );
    if ( direct3DDevice9PresentDetour == nullptr )
    {
        direct3DDevice9PresentDetour = utilities::Memory::Pattern<
            "68 ?? ?? ?? ?? 50 57 E8 ?? ?? ?? ?? 83 C4 24 85 C0 74 10 83 3D ?? ?? ?? ?? ?? BD 01 00 00 00 74 02 8B DD "
            "83 3D ?? ?? ?? ?? ?? 74 34 A1 ?? ?? ?? ?? 85 C0 74 2B 8B 0D ?? ?? ?? ?? 68 ?? ?? ?? ?? 51 56 68 ?? ?? ?? "
            "?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 50 57 E8 ?? ?? ?? ?? 83 C4 24 A1 ?? ?? ?? ?? 85 C0 74 2B "
            "8B 15 ?? ?? ?? ?? 68 ?? ?? ?? ?? 52 56 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 50 57 "
            "E8 ?? ?? ?? ?? 83 C4 24 83 3D">::find( rttsBytes );
        if ( direct3DDevice9PresentDetour != nullptr ) [[unlikely]]
        {
            direct3DDevice9PresentDetour = *(std::uint8_t**)( ( std::uintptr_t )( direct3DDevice9PresentDetour ) + 1 );
        }
    }
#else
    const auto direct3DDevice9PresentDetour =
        utilities::Memory::Pattern<"48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 41 55 41 56 48 "
                                   "83 EC 30 F0 0F BA 2D DD D9 45 03 00 49 8B E9 4D 8B E0 4C 8B EA">::find( rttsBytes );
#endif
    if ( direct3DDevice9PresentDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDirect3DDevice9::Present (Detour)." ) );
        return false;
    }
    const auto rttsGadget = utilities::Memory::Pattern<"FF 23">::find( rttsBytes );
    if ( rttsGadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for IDirect3DDevice9 (Detour)." ) );
        return false;
    }
    hooks.emplace( rttsGadget );
    if ( !hooks->hookAt( 0, direct3DDevice9ResetDetour, &direct3DDevice9Reset ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirect3DDevice9::Reset (Detour)." ) );
    }
    if ( !hooks->hookAt( 1, direct3DDevice9PresentDetour, &direct3DDevice9Present ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDirect3DDevice9::Present (Detour)." ) );
    }
    return true;
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
        utilities::RetSpoofInvoker<decltype( &D3D11CreateDeviceAndSwapChain )>>( ldr->DllBase );
    if ( d3D11CreateDeviceAndSwapChain == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find D3D11CreateDeviceAndSwapChain." ) );
        return;
    }
    const auto direct3D11 = utilities::Memory::Pattern<"FF 23">::find( utilities::Memory::getModuleBytes( *ldr ) );
    if ( direct3D11 == nullptr ) [[unlikely]]
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
    IDXGISwapChain*      dXGISwapChain {};
    ID3D11Device*        d3D11Device {};
    ID3D11DeviceContext* d3D11DeviceContext {};
    if ( d3D11CreateDeviceAndSwapChain( direct3D11,
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
                                        &dXGISwapChain,
                                        &d3D11Device,
                                        &d3DFeatureLevel,
                                        &d3D11DeviceContext ) != S_OK ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to create ID3D11Device & IDXGISwapChain." ) );
        return;
    }
    if ( !hookDirect3D11RTTS() )
    {
        const auto virtualMethod = *(void***)( dXGISwapChain );
        hooks.emplace( direct3D11 );
        if ( !hooks->hookAt( 0, virtualMethod[8], &dXGISwapChainPresent ) ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to hook IDXGISwapChain::Present." ) );
        }
        if ( !hooks->hookAt( 1, virtualMethod[13], &dXGISwapChainResizeBuffers ) ) [[unlikely]]
        {
            log::error( xorstr_( "Failed to hook IDXGISwapChain::ResizeBuffers." ) );
        }
    }
    d3D11DeviceContext->Release();
    d3D11Device->Release();
    dXGISwapChain->Release();
}

bool orion::core::Renderer::hookDirect3D11RTTS() noexcept
{
#ifndef _WIN64
    const auto rttsEnumerator = LI_MOD( "rtsshooks.dll" )::enumerator();
#else
    const auto rttsEnumerator = LI_MOD( "rtsshooks64.dll" )::enumerator();
#endif
    if ( ( rttsEnumerator.value == rttsEnumerator.head ) || ( rttsEnumerator.value->DllBase == nullptr ) )
    {
        return false;
    }
    const auto rttsBytes = utilities::Memory::getModuleBytes( *rttsEnumerator.value );
#ifndef _WIN64
    const auto dXGISwapChainPresentDetour = utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 38">::find( rttsBytes );
#else
    const auto dXGISwapChainPresentDetour = utilities::Memory::Pattern<
        "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 48 83 EC 20 F0 0F BA 2D B1 D6">::
        find( rttsBytes );
#endif
    if ( dXGISwapChainPresentDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDXGISwapChain::Present (Detour)." ) );
        return false;
    }
#ifndef _WIN64
    const auto dXGISwapChainResizeBuffersDetour = utilities::Memory::Pattern<"9C 60 F0 0F BA 2D 00">::find( rttsBytes );
#else
    const auto dXGISwapChainResizeBuffersDetour =
        utilities::Memory::Pattern<"48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 54 41 55 41 56 41 57 48 83 EC "
                                   "30 F0 0F BA 2D AF D3 45 03 00 4D 8B E1 4D 8B E8 4C 8B F2 4C 8B">::find( rttsBytes );
#endif
    if ( dXGISwapChainResizeBuffersDetour == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find IDXGISwapChain::ResizeBuffers (Detour)." ) );
        return false;
    }
    const auto rttsGadget = utilities::Memory::Pattern<"FF 23">::find( rttsBytes );
    if ( rttsGadget == nullptr ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to find gadget for IDXGISwapChain (Detour)." ) );
        return false;
    }
    hooks.emplace( rttsGadget );
    if ( !hooks->hookAt( 0, dXGISwapChainPresentDetour, &dXGISwapChainPresent ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDXGISwapChain::Present (Detour)." ) );
    }
    if ( !hooks->hookAt( 1, dXGISwapChainResizeBuffersDetour, &dXGISwapChainResizeBuffers ) ) [[unlikely]]
    {
        log::error( xorstr_( "Failed to hook IDXGISwapChain::ResizeBuffers (Detour)." ) );
    }
    return true;
}

void orion::core::to_json( nlohmann::json& json, const Renderer& renderer ) noexcept
{
    json = {
        { xorstr_( "ldr" ), reinterpret_cast<std::uintptr_t>( renderer.ldr ) },
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
