#include "source/core/renderer.h"

#include <array>
#include <cstdint>
#include <string_view>

#include "dependency/imgui/imgui_impl_dx11.h"
#include "dependency/imgui/imgui_impl_dx9.h"
#include "source/context.h"
#include "source/core/gui.h"
#include "source/import/ntdll.h"
#include "source/import/user32.h"
#include "source/utility/module.h"
#include "source/utility/pointer.h"
#include "source/utility/retspoof.h"
#include "source/utility/string.h"
#include "source/utility/xorpat.h"
#include "source/utility/xorstr.h"

using orion::core::Renderer;
using orion::utility::Module;
using orion::utility::Pointer;
using orion::utility::RetSpoof;
using orion::utility::String;
using orion::utility::XorPat;
using orion::utility::XorStr;

static constexpr auto d3d9 = XorStr<"d3d9"> {};
static constexpr auto d3d11 = XorStr<"d3d11"> {};
static constexpr auto imgui_impl_dx9 = XorStr<"imgui_impl_dx9"> {};
static constexpr auto imgui_impl_dx11 = XorStr<"imgui_impl_dx11"> {};
static constexpr auto jmp_rbx = XorPat<"FF 23", 0> {};

Renderer::Renderer(const import::Ntdll &, const import::Kernel32 &, const import::User32 &) noexcept {
    auto found_module = Module::find_module(std::string_view {
        decltype(d3d11)::access().data(),
        decltype(d3d11)::size(),
    });
    if ( found_module != nullptr ) {
        switch ( get_user_input(
            found_module->get_full_name().Buffer,
            found_module->get_name().Buffer
        ) ) {
            case IDYES:
                module = found_module;
                [[fallthrough]];
            case IDCANCEL:
                return;
            default:
                break;
        }
    }
    found_module = Module::find_module(std::string_view {
        decltype(d3d9)::access().data(),
        decltype(d3d9)::size(),
    });
    if ( found_module != nullptr ) {
        switch ( get_user_input(
            found_module->get_full_name().Buffer,
            found_module->get_name().Buffer
        ) ) {
            case IDYES:
                module = found_module;
                [[fallthrough]];
            case IDCANCEL:
                return;
            default:
                break;
        }
    }
}

auto Renderer::hook() noexcept -> void {
    if ( module == nullptr ) {
        return;
    }
    if ( module->has_same_name_case_insensitive(std::string_view {
             decltype(d3d11)::access().data(),
             decltype(d3d11)::size(),
         }) ) {
        return hook_d3d11();
    }
    if ( module->has_same_name_case_insensitive(std::string_view {
             decltype(d3d9)::access().data(),
             decltype(d3d9)::size(),
         }) ) {
        return hook_d3d9();
    }
}

auto Renderer::unhook() const noexcept -> void {
    const auto name = ImGui::GetIO().BackendRendererName;
    if ( name == nullptr ) {
        return;
    }
    if ( String<char>::strcmp(decltype(imgui_impl_dx11)::access().data(), name) == 0 ) {
        context.gui->post_process_dx11.invalidate_device_objects();
        return ImGui_ImplDX11_Shutdown();
    }
    if ( String<char>::strcmp(decltype(imgui_impl_dx9)::access().data(), name) == 0 ) {
        context.gui->post_process_dx9.invalidate_device_objects();
        return ImGui_ImplDX9_Shutdown();
    }
}

auto Renderer::hook_d3d9() noexcept -> void {
    if ( hook_d3d9_rtss() ) {
        return;
    }
    const auto window_class = WindowClass {};
    if ( !window_class.is_registered() ) [[unlikely]] {
        log::error(XorStr<"Failed to register window class.">::access().data());
        return;
    }
    const auto window = Window { window_class };
    if ( !window.is_created() ) [[unlikely]] {
        log::error(XorStr<"Failed to create window.">::access().data());
        return;
    }
    const auto direct3dcreate9 = RetSpoof<decltype(&Direct3DCreate9)> {
        module->get_export_function(XorStr<"Direct3DCreate9">::access().data())
    };
    if ( direct3dcreate9.value() == nullptr ) [[unlikely]] {
        log::error(XorStr<"Failed to find Direct3DCreate9.">::access().data());
        return;
    }
    const auto direct3d9_gadget =
        Pointer { decltype(jmp_rbx)::find(module->get_code_section()) }.value<std::uintptr_t>();
    if ( direct3d9_gadget == 0 ) [[unlikely]] {
        log::error(XorStr<"Failed to find gadget for DirectX9.">::access().data());
        return;
    }
    const auto direct3d9 = direct3dcreate9(direct3d9_gadget, D3D_SDK_VERSION);
    if ( direct3d9 == nullptr ) [[unlikely]] {
        log::error(XorStr<"Failed to create IDirect3D9.">::access().data());
        return;
    }
    auto d3dpresentparameters = D3DPRESENT_PARAMETERS {
        .BackBufferWidth = 0,
        .BackBufferHeight = 0,
        .BackBufferFormat = D3DFORMAT::D3DFMT_UNKNOWN,
        .BackBufferCount = 0,
        .MultiSampleType = D3DMULTISAMPLE_TYPE::D3DMULTISAMPLE_NONE,
        .MultiSampleQuality = 0,
        .SwapEffect = D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD,
        .hDeviceWindow = window.handle,
        .Windowed = TRUE,
        .EnableAutoDepthStencil = FALSE,
        .AutoDepthStencilFormat = D3DFORMAT::D3DFMT_UNKNOWN,
        .Flags = 0,
        .FullScreen_RefreshRateInHz = 0,
        .PresentationInterval = D3DPRESENT_INTERVAL_ONE,
    };
    auto direct3ddevice9 = LPDIRECT3DDEVICE9 {};
    if ( direct3d9->CreateDevice(
             D3DADAPTER_DEFAULT,
             D3DDEVTYPE::D3DDEVTYPE_NULLREF,
             window.handle,
             (D3DCREATE_SOFTWARE_VERTEXPROCESSING | D3DCREATE_DISABLE_DRIVER_MANAGEMENT),
             &d3dpresentparameters,
             &direct3ddevice9
         )
         != D3D_OK ) [[unlikely]] {
        direct3d9->Release();
        log::error(XorStr<"Failed to create IDirect3DDevice9.">::access().data());
        return;
    }
    const auto vmt = *(std::uintptr_t **)(direct3ddevice9);
    minhook.set_gadget_address(direct3d9_gadget);
    if ( !minhook.hook_at<0>(vmt[16], Pointer { direct3ddevice9_reset }.value<std::uintptr_t>()) )
        [[unlikely]] {
        log::error(XorStr<"Failed to hook IDirect3DDevice9::Reset.">::access().data());
    }
    if ( !minhook.hook_at<1>(vmt[17], Pointer { direct3ddevice9_present }.value<std::uintptr_t>()) )
        [[unlikely]] {
        log::error(XorStr<"Failed to hook IDirect3DDevice9::Present.">::access().data());
    }
    direct3ddevice9->Release();
    direct3d9->Release();
}

auto Renderer::hook_d3d9_rtss() noexcept -> bool {
#ifndef _WIN64
    constexpr auto rtsshooks = XorStr<"rtsshooks"> {};
    constexpr auto direct3ddevice9_resetdetour_pattern =
        XorPat<"68 ?? ?? ?? ?? 50 53 E8 ?? ?? ?? ?? 83 C4 24 83 3D", '\xC3'> {};
    constexpr auto direct3ddevice9_presentdetour_pattern = XorPat<
        "68 ?? ?? ?? ?? 50 53 E8 ?? ?? ?? ?? 83 C4 24 85 C0 74 18 39 3D ?? ?? ?? ?? B8 01 00 00 00 C7 85 EC FE FF FF "
        "01 00 00 00 0F 45 F8 83 3D ?? ?? ?? ?? ?? 74 33 A1 ?? ?? ?? ?? 85 C0 74 2A 68 ?? ?? ?? ?? FF 35 ?? ?? ?? ?? "
        "56 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 50 53 E8 ?? ?? ?? ?? 83 C4 24 A1 ?? ?? ?? ?? "
        "85 C0 74 2A 68 ?? ?? ?? ?? FF 35 ?? ?? ?? ?? 56 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? "
        "50 53 E8 ?? ?? ?? ?? 83 C4 24 83 3D",
        '\xC3'> {};
#else
    constexpr auto rtsshooks = XorStr<"rtsshooks64"> {};
    constexpr auto direct3ddevice9_resetdetour_pattern =
        XorPat<"4C 8D 05 ?? ?? ?? ?? 48 8B CE E8 ?? ?? ?? ?? 83 3D", '\xC3'> {};
    constexpr auto direct3ddevice9_presentdetour_pattern = XorPat<
        "4C 8D 05 ?? ?? ?? ?? 48 8B CE E8 ?? ?? ?? ?? 85 C0 74 0D 45 8B F7 39 3D ?? ?? ?? ?? 41 0F 45 FF 83 3D ?? ?? "
        "?? ?? ?? 74 52 8B 15 ?? ?? ?? ?? 85 D2 74 48 48 8D 05 ?? ?? ?? ?? 48 89 44 24 40 8B 05 ?? ?? ?? ?? 89 44 24 "
        "38 89 5C 24 30 48 8D 05 ?? ?? ?? ?? 48 89 44 24 28 48 8D 05 ?? ?? ?? ?? 48 89 44 24 20 4C 8D 0D ?? ?? ?? ?? "
        "4C 8D 05 ?? ?? ?? ?? 48 8B CE E8 ?? ?? ?? ?? 8B 15 ?? ?? ?? ?? 85 D2 74 48 48 8D 05 ?? ?? ?? ?? 48 89 44 24 "
        "40 8B 05 ?? ?? ?? ?? 89 44 24 38 89 5C 24 30 48 8D 05 ?? ?? ?? ?? 48 89 44 24 28 48 8D 05 ?? ?? ?? ?? 48 89 "
        "44 24 20",
        '\xC3'> {};
#endif
    const auto rtss = Module::find_module(std::string_view {
        decltype(rtsshooks)::access().data(),
        decltype(rtsshooks)::size(),
    });
    if ( rtss == nullptr ) {
        return false;
    }
    const auto rtss_code_section = rtss->get_code_section();
    auto direct3ddevice9_resetdetour =
        Pointer { decltype(direct3ddevice9_resetdetour_pattern)::find(rtss_code_section) };
    if ( direct3ddevice9_resetdetour.value() == nullptr ) [[unlikely]] {
        log::error(
            XorStr<"Failed to find IDirect3DDevice9::Reset (Detour).">::access().data()
        );
        return false;
    }
    auto direct3ddevice9_presentdetour =
        Pointer { decltype(direct3ddevice9_presentdetour_pattern)::find(rtss_code_section) };
    if ( direct3ddevice9_presentdetour.value() == nullptr ) [[unlikely]] {
        log::error(XorStr<"Failed to find IDirect3DDevice9::Present (Detour).">::access()
                       .data());
        return false;
    }
    const auto rtss_gadget =
        Pointer { decltype(jmp_rbx)::find(rtss_code_section) }.value<std::uintptr_t>();
    if ( rtss_gadget == 0 ) [[unlikely]] {
        log::error(XorStr<"Failed to find gadget for IDirect3DDevice9 (Detour).">::access()
                       .data());
        return false;
    }
    minhook.set_gadget_address(rtss_gadget);
#ifndef _WIN64
    if ( !minhook.hook_at<0>(
             direct3ddevice9_resetdetour.add(1).deref<std::uint32_t>().value<std::uintptr_t>(),
             Pointer { direct3ddevice9_reset }.value<std::uintptr_t>()
         ) )
#else
    if ( !minhook.hook_at<0>(
             direct3ddevice9_resetdetour.add(3).abs().value<std::uintptr_t>(),
             Pointer { direct3ddevice9_reset }.value<std::uintptr_t>()
         ) )

#endif
        [[unlikely]] {
        log::error(
            XorStr<"Failed to hook IDirect3DDevice9::Reset (Detour).">::access().data()
        );
    }
#ifndef _WIN64
    if ( !minhook.hook_at<1>(
             direct3ddevice9_presentdetour.add(1).deref<std::uint32_t>().value<std::uintptr_t>(),
             Pointer { direct3ddevice9_present }.value<std::uintptr_t>()
         ) )
#else
    if ( !minhook.hook_at<1>(
             direct3ddevice9_presentdetour.add(3).abs().value<std::uintptr_t>(),
             Pointer { direct3ddevice9_present }.value<std::uintptr_t>()
         ) )
#endif
        [[unlikely]] {
        log::error(XorStr<"Failed to hook IDirect3DDevice9::Present (Detour).">::access()
                       .data());
    }
    return true;
}

auto Renderer::hook_d3d11() noexcept -> void {
    if ( hook_d3d11_rtss() ) {
        return;
    }
    const auto window_class = WindowClass {};
    if ( !window_class.is_registered() ) [[unlikely]] {
        log::error(XorStr<"Failed to register window class.">::access().data());
        return;
    }
    const auto window = Window { window_class };
    if ( !window.is_created() ) [[unlikely]] {
        log::error(XorStr<"Failed to create window.">::access().data());
        return;
    }
    const auto d3d11createdeviceandswapchain =
        RetSpoof<decltype(&D3D11CreateDeviceAndSwapChain)> { module->get_export_function(
            XorStr<"D3D11CreateDeviceAndSwapChain">::access().data()
        ) };
    if ( d3d11createdeviceandswapchain.value() == nullptr ) [[unlikely]] {
        log::error(
            XorStr<"Failed to find D3D11CreateDeviceAndSwapChain.">::access().data()
        );
        return;
    }
    const auto direct3d11_gadget =
        Pointer { decltype(jmp_rbx)::find(module->get_code_section()) }.value<std::uintptr_t>();
    if ( direct3d11_gadget == 0 ) [[unlikely]] {
        log::error(XorStr<"Failed to find gadget for DirectX11.">::access().data());
        return;
    }
    auto d3dfeaturelevel = D3D_FEATURE_LEVEL {};
    const auto dxgiswapchaindesc = DXGI_SWAP_CHAIN_DESC {
        .BufferDesc =
            DXGI_MODE_DESC {
                .Width = 100,
                .Height = 100,
                .RefreshRate =
                    DXGI_RATIONAL {
                        .Numerator = 60,
                        .Denominator = 1,
                    },
                .Format = DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM,
                .ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER::DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED,
                .Scaling = DXGI_MODE_SCALING::DXGI_MODE_SCALING_UNSPECIFIED,
            },
        .SampleDesc =
            DXGI_SAMPLE_DESC {
                .Count = 1,
                .Quality = 0,
            },
        .BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT,
        .BufferCount = 1,
        .OutputWindow = window.handle,
        .Windowed = TRUE,
        .SwapEffect = DXGI_SWAP_EFFECT::DXGI_SWAP_EFFECT_DISCARD,
        .Flags = DXGI_SWAP_CHAIN_FLAG::DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH,
    };
    IDXGISwapChain *dxgiswapchain {};
    ID3D11Device *d3d11device {};
    ID3D11DeviceContext *d3d11devicecontext {};
    if ( d3d11createdeviceandswapchain(
             direct3d11_gadget,
             nullptr,
             D3D_DRIVER_TYPE::D3D_DRIVER_TYPE_HARDWARE,
             nullptr,
             0,
             std::array<D3D_FEATURE_LEVEL, 2> {
                 D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_10_1,
                 D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_11_0,
             }
                 .data(),
             2,
             D3D11_SDK_VERSION,
             &dxgiswapchaindesc,
             &dxgiswapchain,
             &d3d11device,
             &d3dfeaturelevel,
             &d3d11devicecontext
         )
         != S_OK ) [[unlikely]] {
        log::error(
            XorStr<"Failed to create ID3D11Device & IDXGISwapChain.">::access().data()
        );
        return;
    }
    const auto vmt = *(std::uintptr_t **)(dxgiswapchain);
    minhook.set_gadget_address(direct3d11_gadget);
    if ( !minhook.hook_at<0>(vmt[8], Pointer { dxgiswapchain_present }.value<std::uintptr_t>()) )
        [[unlikely]] {
        log::error(XorStr<"Failed to hook IDXGISwapChain::Present.">::access().data());
    }
    if ( !minhook.hook_at<1>(vmt[13], Pointer { dxgiswapchain_resizebuffers }.value<std::uintptr_t>()) )
        [[unlikely]] {
        log::error(
            XorStr<"Failed to hook IDXGISwapChain::ResizeBuffers.">::access().data()
        );
    }
    d3d11devicecontext->Release();
    d3d11device->Release();
    dxgiswapchain->Release();
}

auto Renderer::hook_d3d11_rtss() noexcept -> bool {
#ifndef _WIN64
    constexpr auto rtsshooks = XorStr<"rtsshooks"> {};
    constexpr auto dxgiswapchain_presentdetour_pattern = XorPat<
        "68 ?? ?? ?? ?? 50 57 E8 ?? ?? ?? ?? 83 C4 24 85 C0 74 18 6A 01 E8 ?? ?? ?? ?? 83 "
        "C4 04 83 3D ?? ?? ?? ?? ?? 74 05 E8 ?? ?? ?? ?? 83 3D ?? ?? ?? ?? ?? 75 33",
        '\xC3'> {};
    constexpr auto dxgiswapchain_resizebuffersdetour_pattern =
        XorPat<"68 ?? ?? ?? ?? 50 57 E8 ?? ?? ?? ?? 83 C4 24 68", '\xC3'> {};
#else
    constexpr auto rtsshooks = XorStr<"rtsshooks64"> {};
    constexpr auto dxgiswapchain_presentdetour_pattern = XorPat<
        "4C 8D 05 ?? ?? ?? ?? 48 8B CF E8 ?? ?? ?? ?? 85 C0 74 15 8B CD E8 ?? ?? ?? ?? 83 "
        "3D ?? ?? ?? ?? ?? 74 05 E8 ?? ?? ?? ?? 83 3D ?? ?? ?? ?? ?? 75 52",
        '\xC3'> {};
    constexpr auto dxgiswapchain_resizebuffersdetour_pattern =
        XorPat<"4C 8D 05 ?? ?? ?? ?? 48 8B CF E8 ?? ?? ?? ?? 48 8D 0D", '\xC3'> {};
#endif
    const auto rtss = Module::find_module(std::string_view {
        decltype(rtsshooks)::access().data(),
        decltype(rtsshooks)::size(),
    });
    if ( rtss == nullptr ) {
        return false;
    }
    const auto rtss_code_section = rtss->get_code_section();
    auto dxgiswapchain_presentdetour =
        Pointer { decltype(dxgiswapchain_presentdetour_pattern)::find(rtss_code_section) };
    if ( dxgiswapchain_presentdetour.value() == nullptr ) [[unlikely]] {
        log::error(
            XorStr<"Failed to find IDXGISwapChain::Present (Detour).">::access().data()
        );
        return false;
    }
    auto dxgiswapchain_resizebuffersdetour =
        Pointer { decltype(dxgiswapchain_resizebuffersdetour_pattern)::find(rtss_code_section) };
    if ( dxgiswapchain_resizebuffersdetour.value() == nullptr ) [[unlikely]] {
        log::error(XorStr<"Failed to find IDXGISwapChain::ResizeBuffers (Detour).">::access()
                       .data());
        return false;
    }
    const auto rtss_gadget =
        Pointer { decltype(jmp_rbx)::find(rtss_code_section) }.value<std::uintptr_t>();
    if ( rtss_gadget == 0 ) [[unlikely]] {
        log::error(XorStr<"Failed to find gadget for IDXGISwapChain (Detour).">::access()
                       .data());
        return false;
    }
    minhook.set_gadget_address(rtss_gadget);
#ifndef _WIN64
    if ( !minhook.hook_at<0>(
             dxgiswapchain_presentdetour.add(1).deref<std::uint32_t>().value<std::uintptr_t>(),
             Pointer { dxgiswapchain_present }.value<std::uintptr_t>()
         ) )
#else
    if ( !minhook.hook_at<0>(
             dxgiswapchain_presentdetour.add(3).abs().value<std::uintptr_t>(),
             Pointer { dxgiswapchain_present }.value<std::uintptr_t>()
         ) )
#endif
        [[unlikely]] {
        log::error(
            XorStr<"Failed to hook IDXGISwapChain::Present (Detour).">::access().data()
        );
    }
#ifndef _WIN64
    if ( !minhook.hook_at<1>(
             dxgiswapchain_resizebuffersdetour.add(1).deref<std::uint32_t>().value<std::uintptr_t>(),
             Pointer { dxgiswapchain_resizebuffers }.value<std::uintptr_t>()
         ) )
#else
    if ( !minhook.hook_at<1>(
             dxgiswapchain_resizebuffersdetour.add(3).abs().value<std::uintptr_t>(),
             Pointer { dxgiswapchain_resizebuffers }.value<std::uintptr_t>()
         ) )
#endif
        [[unlikely]] {
        log::error(XorStr<"Failed to hook IDXGISwapChain::ResizeBuffers (Detour).">::access()
                       .data());
    }
    return true;
}

auto Renderer::get_user_input(const wchar_t *const module_full_name, const wchar_t *const module_name) noexcept -> int {
    return context.user32->message_box_w(
        context.user32->gadget_address,
        nullptr,
        module_full_name,
        module_name,
        (MB_YESNOCANCEL | MB_ICONQUESTION)
    );
}

auto STDMETHODCALLTYPE Renderer::direct3ddevice9_reset(
    const LPDIRECT3DDEVICE9 direct3ddevice9,
    const D3DPRESENT_PARAMETERS *const presentation_parameters
) noexcept -> HRESULT {
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]] {
        return context.renderer->minhook.stdcall<0, HRESULT>(direct3ddevice9, presentation_parameters);
    }
    context.gui->post_process_dx9.invalidate_device_objects();
    ImGui_ImplDX9_InvalidateDeviceObjects();
    const auto result =
        context.renderer->minhook.stdcall<0, HRESULT>(direct3ddevice9, presentation_parameters);
    ImGui_ImplDX9_CreateDeviceObjects();
    context.gui->post_process_dx9.create_device_objects();
    return result;
}

auto STDMETHODCALLTYPE Renderer::direct3ddevice9_present(
    const LPDIRECT3DDEVICE9 direct3ddevice9,
    const LPRECT src_rect,
    const LPRECT dst_rect,
    const HWND dst_window_override,
    const LPRGNDATA dirty_region
) noexcept -> HRESULT {
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]] {
        ImGui_ImplDX9_Init(direct3ddevice9);
        context.gui->post_process_dx9.initialize(*direct3ddevice9);
        context.gui->post_process_dx9.create_device_objects();
    }
    ImGui_ImplDX9_NewFrame();
    Platform::new_frame();
    ImGui::NewFrame();
    context.gui->draw([]() noexcept {
        context.gui->post_process_dx9.draw(*ImGui::GetWindowDrawList());
    });
    ImGui::ShowDemoWindow();
    ImGui::EndFrame();
    if ( direct3ddevice9->BeginScene() == D3D_OK ) [[likely]] {
        ImGui::Render();
        ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
        direct3ddevice9->EndScene();
    }
    return context.renderer->minhook.stdcall<1, HRESULT>(direct3ddevice9, src_rect, dst_rect, dst_window_override, dirty_region);
}

auto STDMETHODCALLTYPE Renderer::dxgiswapchain_present(
    IDXGISwapChain *const dxgiswapchain,
    const UINT sync_interval,
    const UINT flags
) noexcept -> HRESULT {
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]] {
        if ( ID3D11Device * d3d11device {};
             dxgiswapchain->GetDevice(IID_ID3D11Device, (void **)(&d3d11device)) == S_OK )
            [[likely]] {
            ID3D11DeviceContext *d3d11devicecontext;
            d3d11device->GetImmediateContext(&d3d11devicecontext);
            ImGui_ImplDX11_Init(d3d11device, d3d11devicecontext);
            context.gui->post_process_dx11.initialize(*dxgiswapchain, *d3d11device, *d3d11devicecontext);
            context.gui->post_process_dx11.create_device_objects();
            d3d11devicecontext->Release();
            d3d11device->Release();
        }
    }
    ImGui_ImplDX11_NewFrame();
    Platform::new_frame();
    ImGui::NewFrame();
    context.gui->post_process_dx11.set_rendertarget();
    context.gui->draw([]() noexcept {
        context.gui->post_process_dx11.draw(*ImGui::GetWindowDrawList());
    });
    ImGui::ShowDemoWindow();
    ImGui::Render();
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    return context.renderer->minhook.stdcall<0, HRESULT>(dxgiswapchain, sync_interval, flags);
}

auto STDMETHODCALLTYPE Renderer::dxgiswapchain_resizebuffers(
    IDXGISwapChain *const dxgiswapchain,
    const UINT buffer_count,
    const UINT width,
    const UINT height,
    const DXGI_FORMAT new_format,
    const UINT swapchain_flags
) noexcept -> HRESULT {
    if ( ImGui::GetIO().BackendRendererUserData == nullptr ) [[unlikely]] {
        return context.renderer->minhook
            .stdcall<1, HRESULT>(dxgiswapchain, buffer_count, width, height, new_format, swapchain_flags);
    }
    context.gui->post_process_dx11.invalidate_device_objects();
    ImGui_ImplDX11_InvalidateDeviceObjects();
    const auto result =
        context.renderer->minhook.stdcall<1, HRESULT>(dxgiswapchain, buffer_count, width, height, new_format, swapchain_flags);
    ImGui_ImplDX11_CreateDeviceObjects();
    context.gui->post_process_dx11.create_device_objects();
    return result;
}

Renderer::WindowClass::WindowClass() noexcept
    : value { .cbSize = sizeof(value),
              .style = (CS_HREDRAW | CS_VREDRAW),
              .lpfnWndProc = context.ntdll->ntdll_def_window_proc_a.value(),
              .cbClsExtra = 0,
              .cbWndExtra = 0,
              .hInstance =
                  Pointer { Module::enumerate().begin()->get_dll_base() }.as<HINSTANCE__>(),
              .hIcon = nullptr,
              .hCursor = nullptr,
              .hbrBackground = nullptr,
              .lpszMenuName = nullptr,
              .lpszClassName = XorStr<"     ">::access().data(),
              .hIconSm = nullptr }
    , atom { context.user32->register_class_ex_a(context.user32->gadget_address, &value) } {}

Renderer::WindowClass::~WindowClass() noexcept {
    if ( is_registered() ) [[likely]] {
        if ( context.user32->unregister_class_a(
                 context.user32->gadget_address,
                 (LPCSTR)(std::uintptr_t)(LOWORD(atom)),
                 value.hInstance
             )
             == 0 ) [[unlikely]] {
            log::error(XorStr<"Failed to unregister window class.">::access().data());
        }
    }
}

auto Renderer::WindowClass::is_registered() const noexcept -> bool {
    return atom != 0;
}

Renderer::Window::Window(const WindowClass &window_class) noexcept
    : handle { context.user32->create_window_ex_a(
          context.user32->gadget_address,
          0,
          (LPCSTR)(std::uintptr_t)(LOWORD(window_class.atom)),
          nullptr,
          WS_OVERLAPPEDWINDOW,
          0,
          0,
          100,
          100,
          nullptr,
          nullptr,
          window_class.value.hInstance,
          nullptr
      ) } {}

Renderer::Window::~Window() noexcept {
    if ( is_created() ) [[likely]] {
        if ( context.user32->destroy_window(context.user32->gadget_address, handle) == 0 )
            [[unlikely]] {
            log::error(XorStr<"Failed to destroy window.">::access().data());
        }
    }
}

auto Renderer::Window::is_created() const noexcept -> bool {
    return handle != nullptr;
}
