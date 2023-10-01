#include "dependencies/imgui/imgui_impl_dx11.h"
#include "dependencies/imgui/imgui_impl_dx9.h"
#include "source/orion.h"

using Microsoft::WRL::ComPtr;
using orion::core::Renderer;
using orion::hooks::CallConv;
using orion::utilities::Memory;
using orion::utilities::String;

namespace {

    class RegClassEx final {
        const WNDCLASSEX& window_class_ex;
        const ATOM atom =
            orion::orion.get_user32().register_class_ex(&window_class_ex);

    public:
        NON_COPYABLE(RegClassEx)
        NON_MOVEABLE(RegClassEx)

        constexpr explicit RegClassEx(const WNDCLASSEX& window_class_ex
        ) noexcept :
            window_class_ex(window_class_ex) {}

        constexpr ~RegClassEx() noexcept {
            if (atom != 0) {
                orion::orion.get_user32().unregister_class(
                    window_class_ex.lpszClassName,
                    window_class_ex.hInstance
                );
            }
        }

        NODISCARD constexpr explicit operator bool() const noexcept {
            return atom != 0;
        }
    };

    class WindowEx final {
        const HWND handle;

    public:
        NON_COPYABLE(WindowEx)
        NON_MOVEABLE(WindowEx)

        constexpr explicit WindowEx(const WNDCLASSEX& window_class_ex) noexcept
            :
            handle {orion::orion.get_user32().create_window_ex(
                0,
                window_class_ex.lpszClassName,
                TEXT(" "),
                WS_OVERLAPPEDWINDOW,
                0,
                0,
                100,
                100,
                nullptr,
                nullptr,
                window_class_ex.hInstance,
                nullptr
            )} {}

        constexpr ~WindowEx() noexcept {
            if (handle != nullptr) {
                orion::orion.get_user32().destroy_window(handle);
            }
        }

        NODISCARD constexpr explicit operator bool() const noexcept {
            return handle != nullptr;
        }

        NODISCARD constexpr explicit(false) operator HWND() const noexcept {
            return handle;
        }
    };

}  // namespace

class Renderer::DirectX9 final {
    NON_CONSTRUCTIBLE(DirectX9)

    friend Renderer;

    static auto STDMETHODCALLTYPE reset(
        const LPDIRECT3DDEVICE9 device,
        const D3DPRESENT_PARAMETERS* const params
    ) noexcept -> HRESULT {
        if (ImGui::GetIO().BackendRendererUserData != nullptr) {
            orion.get_game().invalidate();
            orion.get_gui().invalidate();
            ImGui_ImplDX9_InvalidateDeviceObjects();
            const auto result =
                orion.get_renderer().get_hooks().stdcall<16, HRESULT>(
                    device,
                    params
                );
            ImGui_ImplDX9_CreateDeviceObjects();
            orion.get_gui().validate();
            orion.get_game().validate();
            return result;
        }
        return orion.get_renderer().get_hooks().stdcall<16, HRESULT>(
            device,
            params
        );
    }

    static auto STDMETHODCALLTYPE present(
        const LPDIRECT3DDEVICE9 device,
        const LPRECT src,
        const LPRECT dst,
        const HWND window,
        const LPRGNDATA dirty_region
    ) noexcept -> HRESULT {
        orion.get_platform().imgui_new_frame();
        if (ImGui::GetIO().BackendRendererUserData == nullptr) {
            ImGui_ImplDX9_Init(device);
            ImGui_ImplDX9_NewFrame();
            orion.get_gui().init();
            orion.get_game().init();
        } else {
            ImGui_ImplDX9_NewFrame();
            ImGui::NewFrame();
            orion.get_gui().draw();
            orion.get_game().draw();
            ImGui::EndFrame();
            if (device->BeginScene() == D3D_OK) {
                ImGui::Render();
                ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
                device->EndScene();
            }
        }
        return orion.get_renderer()
            .get_hooks()
            .stdcall<17, HRESULT>(device, src, dst, window, dirty_region);
    }
};

class Renderer::DirectX11 final {
    NON_CONSTRUCTIBLE(DirectX11)

    friend Renderer;

    static auto STDMETHODCALLTYPE resize_buffers(
        IDXGISwapChain* const swapchain,
        const UINT count,
        const UINT width,
        const UINT height,
        const DXGI_FORMAT format,
        const UINT flags
    ) noexcept -> HRESULT {
        if (ImGui::GetIO().BackendRendererUserData != nullptr) {
            orion.get_game().invalidate();
            orion.get_gui().invalidate();
            ImGui_ImplDX11_InvalidateDeviceObjects();
            const auto result =
                orion.get_renderer().get_hooks().stdcall<13, HRESULT>(
                    swapchain,
                    count,
                    width,
                    height,
                    format,
                    flags
                );
            ImGui_ImplDX11_CreateDeviceObjects();
            orion.get_gui().validate();
            orion.get_game().validate();
            return result;
        }
        return orion.get_renderer().get_hooks().stdcall<13, HRESULT>(
            swapchain,
            count,
            width,
            height,
            format,
            flags
        );
    }

    static auto STDMETHODCALLTYPE present(
        IDXGISwapChain* const swapchain,
        const UINT sync_interval,
        const UINT flags
    ) noexcept -> HRESULT {
        orion.get_platform().imgui_new_frame();
        if (ImGui::GetIO().BackendRendererUserData == nullptr) {
            ComPtr<ID3D11Device> device;
            if (swapchain->GetDevice(IID_PPV_ARGS(device.GetAddressOf()))
                == S_OK) {
                ComPtr<ID3D11DeviceContext> device_context;
                device->GetImmediateContext(device_context.GetAddressOf());
                ImGui_ImplDX11_Init(
                    swapchain,
                    device.Get(),
                    device_context.Get()
                );
                ImGui_ImplDX11_NewFrame();
                orion.get_gui().init();
                orion.get_game().init();
            }
        } else {
            ImGui_ImplDX11_NewFrame();
            ImGui::NewFrame();
            orion.get_gui().draw();
            orion.get_game().draw();
            ImGui::EndFrame();
            ImGui::Render();
            ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
        }
        return orion.get_renderer().get_hooks().stdcall<8, HRESULT>(
            swapchain,
            sync_interval,
            flags
        );
    }
};

Renderer::Renderer(const Type type) noexcept {
    const auto& kernel32 = orion.get_kernel32();
    switch (type) {
        case Type::DirectX11: {
            if (handle = kernel32.get_module_handle_a(String<"d3d11.dll">());
                handle != nullptr) {
                this->type.emplace(type);
            }
            break;
        }
        case Type::DirectX9: {
            if (handle = kernel32.get_module_handle_a(String<"d3d9.dll">());
                handle != nullptr) {
                this->type.emplace(type);
            }
            break;
        }
    }
}

Renderer::Renderer(const Enumerate enumerate) noexcept {
    const auto& kernel32 = orion.get_kernel32();
    switch (enumerate) {
        case Enumerate::Auto: {
            if (handle = kernel32.get_module_handle_a(String<"d3d11.dll">());
                handle != nullptr) {
                type.emplace(Type::DirectX11);
                break;
            }
            if (handle = kernel32.get_module_handle_a(String<"d3d9.dll">());
                handle != nullptr) {
                type.emplace(Type::DirectX9);
                break;
            }
            break;
        }
        case Enumerate::Manual: {
            if (handle = kernel32.get_module_handle_a(String<"d3d11.dll">());
                handle != nullptr) {
                const auto& user32 = orion.get_user32();
                const auto input = user32.message_box_a(
                    orion.get_platform().get_window_handle(),
                    String<"DirectX11">(),
                    String<"Renderer">(),
                    MB_YESNOCANCEL | MB_ICONQUESTION
                );
                switch (input) {
                    case IDYES:
                        type.emplace(Type::DirectX11);
                        [[fallthrough]];
                    case IDCANCEL:
                        return;
                    default:
                        break;
                }
            }
            if (handle = kernel32.get_module_handle_a(String<"d3d9.dll">());
                handle != nullptr) {
                const auto& user32 = orion.get_user32();
                const auto input = user32.message_box_a(
                    orion.get_platform().get_window_handle(),
                    String<"DirectX9">(),
                    String<"Renderer">(),
                    MB_YESNOCANCEL | MB_ICONQUESTION
                );
                switch (input) {
                    case IDYES:
                        type.emplace(Type::DirectX9);
                        [[fallthrough]];
                    case IDCANCEL:
                        return;
                    default:
                        break;
                }
            }
            break;
        }
    }
}

Renderer::~Renderer() noexcept {
    if (ImGui::GetCurrentContext() == nullptr) {
        return;
    }
    if (ImGui::GetIO().BackendRendererUserData == nullptr) {
        return;
    }
    if (!type.has_value()) {
        return;
    }
    switch (type.value()) {
        case Type::DirectX11:
            ImGui_ImplDX11_Shutdown();
            break;
        case Type::DirectX9:
            ImGui_ImplDX9_Shutdown();
            break;
    }
}

auto Renderer::hook() noexcept -> void {
    if (!type.has_value()) {
        return;
    }
    const auto& kernel32 = orion.get_kernel32();
    switch (type.value()) {
        case Type::DirectX11: {
            const WNDCLASSEX window_class_ex {
                sizeof(WNDCLASSEX),
                CS_HREDRAW | CS_VREDRAW,
                DefWindowProc,
                0,
                0,
                kernel32.get_module_handle_a(nullptr),
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                TEXT(" "),
                nullptr
            };
            const RegClassEx reg_class_ex {window_class_ex};
            if (!reg_class_ex) {
                break;
            }
            const WindowEx window_ex {window_class_ex};
            if (!window_ex) {
                break;
            }
            const auto create_device_and_swapchain = reinterpret_cast<
                HRESULT(WINAPI*)(IDXGIAdapter*, D3D_DRIVER_TYPE, HMODULE, UINT, const D3D_FEATURE_LEVEL*, UINT, UINT, const DXGI_SWAP_CHAIN_DESC*, IDXGISwapChain**, ID3D11Device**, D3D_FEATURE_LEVEL*, ID3D11DeviceContext**)>(
                kernel32.get_proc_address(
                    handle,
                    String<"D3D11CreateDeviceAndSwapChain">()
                )
            );
            if (create_device_and_swapchain == nullptr) {
                break;
            }
            D3D_FEATURE_LEVEL feature_level;
            const DXGI_SWAP_CHAIN_DESC swapchain_desc {
                DXGI_MODE_DESC {
                    100,
                    100,
                    DXGI_RATIONAL {60, 1},
                    DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM,
                    DXGI_MODE_SCANLINE_ORDER::
                        DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED,
                    DXGI_MODE_SCALING::DXGI_MODE_SCALING_UNSPECIFIED
                },
                DXGI_SAMPLE_DESC {1, 0},
                DXGI_USAGE_RENDER_TARGET_OUTPUT,
                1,
                window_ex,
                TRUE,
                DXGI_SWAP_EFFECT::DXGI_SWAP_EFFECT_DISCARD,
                DXGI_SWAP_CHAIN_FLAG::DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH
            };
            ComPtr<IDXGISwapChain> swapchain;
            ComPtr<ID3D11Device> device;
            ComPtr<ID3D11DeviceContext> device_context;
            if (create_device_and_swapchain(
                    nullptr,
                    D3D_DRIVER_TYPE::D3D_DRIVER_TYPE_HARDWARE,
                    nullptr,
                    0,
                    std::array<D3D_FEATURE_LEVEL, 2> {
                        D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_10_1,
                        D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_11_0
                    }
                        .data(),
                    2,
                    D3D11_SDK_VERSION,
                    &swapchain_desc,
                    swapchain.GetAddressOf(),
                    device.GetAddressOf(),
                    &feature_level,
                    device_context.GetAddressOf()
                )
                != S_OK) {
                break;
            }
            std::array<std::uintptr_t, 205> table {};
            for (std::size_t i = 0; i < 18; i++)
                table[i] = (*reinterpret_cast<decltype(table)::value_type**>(
                    swapchain.Get()
                ))[i];
            for (std::size_t i = 18; i < 61; i++)
                table[i] = (*reinterpret_cast<decltype(table)::value_type**>(
                    device.Get()
                ))[i];
            for (std::size_t i = 61; i < 205; i++)
                table[i] = (*reinterpret_cast<decltype(table)::value_type**>(
                    device_context.Get()
                ))[i];
            hooks.emplace(
                table.data(),
                Memory::Pattern<"FF 23">().find(Memory::get_module_bytes(handle)
                )
            );
            hooks->hook_at(8, &DirectX11::present);
            hooks->hook_at(13, &DirectX11::resize_buffers);
            break;
        }
        case Type::DirectX9: {
            const WNDCLASSEX window_class_ex {
                sizeof(WNDCLASSEX),
                CS_HREDRAW | CS_VREDRAW,
                DefWindowProc,
                0,
                0,
                kernel32.get_module_handle_a(nullptr),
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                TEXT(" "),
                nullptr
            };
            const RegClassEx reg_class_ex {window_class_ex};
            if (!reg_class_ex) {
                break;
            }
            const WindowEx window_ex {window_class_ex};
            if (!window_ex) {
                break;
            }
            const auto direct3d_create9 =
                reinterpret_cast<LPDIRECT3D9(WINAPI*)(std::uint32_t)>(
                    kernel32
                        .get_proc_address(handle, String<"Direct3DCreate9">())
                );
            if (direct3d_create9 == nullptr) {
                break;
            }
            const ComPtr<IDirect3D9> direct3d9 =
                direct3d_create9(D3D_SDK_VERSION);
            if (direct3d9.Get() == nullptr) {
                break;
            }
            D3DPRESENT_PARAMETERS params {
                0,
                0,
                D3DFORMAT::D3DFMT_UNKNOWN,
                0,
                D3DMULTISAMPLE_TYPE::D3DMULTISAMPLE_NONE,
                0,
                D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD,
                window_ex,
                TRUE,
                FALSE,
                D3DFORMAT::D3DFMT_UNKNOWN,
                0,
                0,
                D3DPRESENT_INTERVAL_ONE
            };
            ComPtr<IDirect3DDevice9> device;
            if (direct3d9->CreateDevice(
                    D3DADAPTER_DEFAULT,
                    D3DDEVTYPE::D3DDEVTYPE_NULLREF,
                    window_ex,
                    D3DCREATE_SOFTWARE_VERTEXPROCESSING
                        | D3DCREATE_DISABLE_DRIVER_MANAGEMENT,
                    &params,
                    device.GetAddressOf()
                )
                != D3D_OK) {
                break;
            }
            hooks.emplace(
                reinterpret_cast<void**>(device.Get()),
                Memory::Pattern<"FF 23">().find(Memory::get_module_bytes(handle)
                )
            );
            hooks->hook_at(16, &DirectX9::reset);
            hooks->hook_at(17, &DirectX9::present);
            break;
        }
    }
}

auto Renderer::unhook() noexcept -> void {
    if (hooks.has_value()) {
        hooks->restore();
    }
}
