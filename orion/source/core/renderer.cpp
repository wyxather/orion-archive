#include "source/context.h"

orion::core::Renderer::Renderer( const imports::Kernel32& kernel32,
                                 const imports::User32&   user32,
                                 const Platform&          platform ) noexcept
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
    switch ( type )
    {
    case Type::Direct3D9:
        hookDirect3D9();
        break;
    default:
        break;
    }
}

void orion::core::Renderer::unhook() noexcept
{
}

int orion::core::Renderer::getUserInput( const char* text, const char* caption ) noexcept
{
    return context.getUser32().messageBoxA(
        context.getPlatform().getWindowHandle(), text, caption, MB_YESNOCANCEL | MB_ICONQUESTION );
}

void orion::core::Renderer::hookDirect3D9() noexcept
{
    const WindowClass windowClass;
    if ( !windowClass.isRegistered() )
    {
        log::error( xorstr_( "Failed to register window class." ) );
        return;
    }
    const Window window( windowClass );
    if ( !window.isCreated() )
    {
        log::error( xorstr_( "Failed to create window." ) );
        return;
    }
    const auto direct3DCreate9 = LI_FUNC( "Direct3DCreate9" )::in<LPDIRECT3D9( WINAPI* )( std::uint32_t )>( handle );
    if ( direct3DCreate9 == nullptr )
    {
        log::error( xorstr_( "Failed to find Direct3DCreate9." ) );
        return;
    }
    const Microsoft::WRL::ComPtr<IDirect3D9> direct3d9 = direct3DCreate9( D3D_SDK_VERSION );
    if ( direct3d9.Get() == nullptr )
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
                                  device.GetAddressOf() ) != D3D_OK )
    {
        log::error( xorstr_( "Failed to create IDirect3DDevice9." ) );
        return;
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
          context.getUser32().defWindowProcA,
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
    if ( isRegistered() )
    {
        context.getUser32().unregisterClassA( value.lpszClassName, value.hInstance );
    }
}

bool orion::core::Renderer::WindowClass::isRegistered() const noexcept
{
    return atom != 0;
}

orion::core::Renderer::Window::Window( const WindowClass& windowClass ) noexcept
    : handle { context.getUser32().createWindowExA( 0,
                                                    windowClass.value.lpszClassName,
                                                    xorstr_( "     " ),
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
    if ( isCreated() )
    {
        context.getUser32().destroyWindow( handle );
    }
}

bool orion::core::Renderer::Window::isCreated() const noexcept
{
    return handle != nullptr;
}
