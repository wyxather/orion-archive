#include "renderer.h"

#include "dependencies/imgui/imgui_impl_dx11.h"
#include "dependencies/imgui/imgui_impl_dx9.h"
#include "source/orion.h"

namespace {
    class RegisterClassExWrapper final {
        const ATOM atom = 0;

    public:
        const WNDCLASSEX& window;

        explicit RegisterClassExWrapper(const WNDCLASSEX& window) noexcept :
            atom(IMPORT(RegisterClassEx)(&window)),
            window(window) {}

        constexpr ~RegisterClassExWrapper() noexcept {
            if (RegisterClassExWrapper::atom != 0)
                IMPORT(UnregisterClass)
            (RegisterClassExWrapper::window.lpszClassName,
             RegisterClassExWrapper::window.hInstance);
        }

        RegisterClassExWrapper(RegisterClassExWrapper&&) = delete;
        RegisterClassExWrapper& operator=(RegisterClassExWrapper&&) = delete;

        RegisterClassExWrapper(const RegisterClassExWrapper&) = delete;
        RegisterClassExWrapper&
        operator=(const RegisterClassExWrapper&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return RegisterClassExWrapper::atom != 0;
        }
    };

    class CreateWindowExWrapper final {
        HWND handle = nullptr;

    public:
        constexpr explicit CreateWindowExWrapper(
            const RegisterClassExWrapper& window_class
        ) noexcept {
            if (window_class)
                CreateWindowExWrapper::handle = IMPORT(CreateWindowEx)(
                    0,
                    window_class.window.lpszClassName,
                    TEXT(" "),
                    WS_OVERLAPPEDWINDOW,
                    0,
                    0,
                    100,
                    100,
                    nullptr,
                    nullptr,
                    window_class.window.hInstance,
                    nullptr
                );
        }

        constexpr ~CreateWindowExWrapper() noexcept {
            if (CreateWindowExWrapper::handle != nullptr)
                IMPORT(DestroyWindow)(CreateWindowExWrapper::handle);
        }

        CreateWindowExWrapper(CreateWindowExWrapper&&) = delete;
        CreateWindowExWrapper& operator=(CreateWindowExWrapper&&) = delete;

        CreateWindowExWrapper(const CreateWindowExWrapper&) = delete;
        CreateWindowExWrapper& operator=(const CreateWindowExWrapper&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return CreateWindowExWrapper::handle != nullptr;
        }

        [[nodiscard]] constexpr explicit(false) operator HWND() const noexcept {
            return CreateWindowExWrapper::handle;
        }
    };
}  // namespace

namespace orion::D3D9 {
    auto CALLBACK reset(
        const LPDIRECT3DDEVICE9 device,
        const D3DPRESENT_PARAMETERS* const params
    ) noexcept -> HRESULT {
        if (ImGui::GetIO().BackendRendererUserData != nullptr) {
            orion.get_game().invalidate();
            orion.get_gui().invalidate();
            ImGui_ImplDX9_InvalidateDeviceObjects();
            const auto result =
                orion.get_renderer()
                    .get_hooks()
                    .get<16, HRESULT, hooks::CallConv::StdCall>(
                        device,
                        params
                    );
            ImGui_ImplDX9_CreateDeviceObjects();
            orion.get_gui().validate();
            orion.get_game().validate();
            return result;
        }
        return orion.get_renderer()
            .get_hooks()
            .get<16, HRESULT, hooks::CallConv::StdCall>(device, params);
    }

    auto CALLBACK present(
        const LPDIRECT3DDEVICE9 device,
        const LPRECT src,
        const LPRECT dst,
        const HWND window,
        const LPRGNDATA dirty_region
    ) noexcept -> HRESULT {
        orion.get_platform().imgui_new_frame();

        if (ImGui::GetIO().BackendRendererUserData == nullptr) {
            ImGui_ImplDX9_Init(device);
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
            .get<17, HRESULT, hooks::CallConv::StdCall>(
                device,
                src,
                dst,
                window,
                dirty_region
            );
    }
}  // namespace orion::D3D9

namespace orion::D3D11 {
    auto CALLBACK resize_buffers(
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
                orion.get_renderer()
                    .get_hooks()
                    .get<13, HRESULT, hooks::CallConv::StdCall>(
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
        return orion.get_renderer()
            .get_hooks()
            .get<13, HRESULT, hooks::CallConv::StdCall>(
                swapchain,
                count,
                width,
                height,
                format,
                flags
            );
    }

    auto CALLBACK present(
        IDXGISwapChain* const swapchain,
        const UINT sync_interval,
        const UINT flags
    ) noexcept -> HRESULT {
        orion.get_platform().imgui_new_frame();

        if (ImGui::GetIO().BackendRendererUserData == nullptr) {
            Microsoft::WRL::ComPtr<ID3D11Device> device;
            if (swapchain->GetDevice(IID_PPV_ARGS(device.GetAddressOf()))
                == S_OK) {
                Microsoft::WRL::ComPtr<ID3D11DeviceContext> device_context;
                device->GetImmediateContext(device_context.GetAddressOf());
                ImGui_ImplDX11_Init(
                    swapchain,
                    device.Get(),
                    device_context.Get()
                );
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
        return orion.get_renderer()
            .get_hooks()
            .get<8, HRESULT, hooks::CallConv::StdCall>(
                swapchain,
                sync_interval,
                flags
            );
    }
}  // namespace orion::D3D11

orion::Renderer::Renderer(const Type type) noexcept {
    switch (type) {
        case Type::D3D11: {
            if (Renderer::handle =
                    IMPORT(GetModuleHandleA)(utilities::String<"d3d11.dll">());
                Renderer::handle != nullptr)
                Renderer::type.emplace(type);
            break;
        }
        case Type::D3D9: {
            if (Renderer::handle =
                    IMPORT(GetModuleHandleA)(utilities::String<"d3d9.dll">());
                Renderer::handle != nullptr)
                Renderer::type.emplace(type);
            break;
        }
    }
}

orion::Renderer::Renderer(const Enumerate enumerate) noexcept {
    switch (enumerate) {
        case Enumerate::AUTO: {
            if (Renderer::handle =
                    IMPORT(GetModuleHandleA)(utilities::String<"d3d11.dll">());
                Renderer::handle != nullptr) {
                Renderer::type.emplace(Renderer::Type::D3D11);
                break;
            }
            if (Renderer::handle =
                    IMPORT(GetModuleHandleA)(utilities::String<"d3d9.dll">());
                Renderer::handle != nullptr) {
                Renderer::type.emplace(Renderer::Type::D3D9);
                break;
            }
            break;
        }
        case Enumerate::MANUAL: {
            if (Renderer::handle =
                    IMPORT(GetModuleHandleA)(utilities::String<"d3d11.dll">());
                Renderer::handle != nullptr
                && IMPORT(MessageBoxA)(
                       nullptr,
                       utilities::String<"D3D11">(),
                       utilities::String<"Renderer">(),
                       MB_YESNO | MB_ICONINFORMATION
                   ) == IDYES) {
                Renderer::type.emplace(Renderer::Type::D3D11);
                break;
            }
            if (Renderer::handle =
                    IMPORT(GetModuleHandleA)(utilities::String<"d3d9.dll">());
                Renderer::handle != nullptr
                && IMPORT(MessageBoxA)(
                       nullptr,
                       utilities::String<"D3D9">(),
                       utilities::String<"Renderer">(),
                       MB_YESNO | MB_ICONINFORMATION
                   ) == IDYES) {
                Renderer::type.emplace(Renderer::Type::D3D9);
                break;
            }
            break;
        }
    }
}

orion::Renderer::~Renderer() noexcept {
    if (ImGui::GetCurrentContext() == nullptr)
        return;

    if (ImGui::GetIO().BackendRendererUserData != nullptr) {
        switch (Renderer::type.value()) {
            case Type::D3D11:
                ImGui_ImplDX11_Shutdown();
                break;
            case Type::D3D9:
                ImGui_ImplDX9_Shutdown();
                break;
        }
    }
}

auto orion::Renderer::hook() noexcept -> void {
    switch (Renderer::type.value()) {
        case Type::D3D11: {
            const WNDCLASSEX window_class(
                sizeof(WNDCLASSEX),
                CS_HREDRAW | CS_VREDRAW,
                DefWindowProc,
                0,
                0,
                IMPORT(GetModuleHandle)(nullptr),
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                TEXT(" "),
                nullptr
            );

            const RegisterClassExWrapper register_class(window_class);
            if (!register_class)
                break;

            const CreateWindowExWrapper window(register_class);
            if (!window)
                break;

            const auto create_device_and_swapchain =
                (HRESULT(WINAPI*)(IDXGIAdapter*, D3D_DRIVER_TYPE, HMODULE, UINT, const D3D_FEATURE_LEVEL*, UINT, UINT, const DXGI_SWAP_CHAIN_DESC*, IDXGISwapChain**, ID3D11Device**, D3D_FEATURE_LEVEL*, ID3D11DeviceContext**))(
                    IMPORT(GetProcAddress)(
                        Renderer::handle,
                        utilities::String<"D3D11CreateDeviceAndSwapChain">()
                    )
                );

            if (create_device_and_swapchain == nullptr)
                break;

            D3D_FEATURE_LEVEL feature_level;

            const DXGI_SWAP_CHAIN_DESC swapchain_desc(
                DXGI_MODE_DESC(
                    100,
                    100,
                    DXGI_RATIONAL(60, 1),
                    DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM,
                    DXGI_MODE_SCANLINE_ORDER::
                        DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED,
                    DXGI_MODE_SCALING::DXGI_MODE_SCALING_UNSPECIFIED
                ),
                DXGI_SAMPLE_DESC(1, 0),
                DXGI_USAGE_RENDER_TARGET_OUTPUT,
                1,
                window,
                TRUE,
                DXGI_SWAP_EFFECT::DXGI_SWAP_EFFECT_DISCARD,
                DXGI_SWAP_CHAIN_FLAG::DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH
            );

            Microsoft::WRL::ComPtr<IDXGISwapChain> swapchain;
            Microsoft::WRL::ComPtr<ID3D11Device> device;
            Microsoft::WRL::ComPtr<ID3D11DeviceContext> orion;

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
                    orion.GetAddressOf()
                )
                != S_OK)
                break;

            std::array<std::uintptr_t, 205> table {};
            for (std::size_t i = 0; i < 18; i++)
                table[i] =
                    (*(decltype(table)::value_type**)(swapchain.Get()))[i];
            for (std::size_t i = 18; i < 61; i++)
                table[i] = (*(decltype(table)::value_type**)(device.Get()))[i];
            for (std::size_t i = 61; i < 205; i++)
                table[i] = (*(decltype(table)::value_type**)(orion.Get()))[i];

            Renderer::hooks.emplace(table.data());
            Renderer::hooks->hook_at(8, &D3D11::present);
            Renderer::hooks->hook_at(13, &D3D11::resize_buffers);
            break;
        }
        case Type::D3D9: {
            const WNDCLASSEX window_class(
                sizeof(WNDCLASSEX),
                CS_HREDRAW | CS_VREDRAW,
                DefWindowProc,
                0,
                0,
                IMPORT(GetModuleHandle)(nullptr),
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                TEXT(" "),
                nullptr
            );

            const RegisterClassExWrapper register_class(window_class);
            if (!register_class)
                break;

            const CreateWindowExWrapper window(register_class);
            if (!window)
                break;

            const auto direct3d_create9 =
                (LPDIRECT3D9(WINAPI*)(std::uint32_t))(IMPORT(GetProcAddress)(
                    Renderer::handle,
                    utilities::String<"Direct3DCreate9">()
                ));
            if (direct3d_create9 == nullptr)
                break;

            const Microsoft::WRL::ComPtr<IDirect3D9> direct3d9 =
                direct3d_create9(D3D_SDK_VERSION);
            if (direct3d9.Get() == nullptr)
                break;

            D3DPRESENT_PARAMETERS params(
                0,
                0,
                D3DFORMAT::D3DFMT_UNKNOWN,
                0,
                D3DMULTISAMPLE_TYPE::D3DMULTISAMPLE_NONE,
                0,
                D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD,
                window,
                TRUE,
                FALSE,
                D3DFORMAT::D3DFMT_UNKNOWN,
                0,
                0,
                D3DPRESENT_INTERVAL_ONE
            );

            Microsoft::WRL::ComPtr<IDirect3DDevice9> device;
            if (direct3d9->CreateDevice(
                    D3DADAPTER_DEFAULT,
                    D3DDEVTYPE::D3DDEVTYPE_NULLREF,
                    window,
                    D3DCREATE_SOFTWARE_VERTEXPROCESSING
                        | D3DCREATE_DISABLE_DRIVER_MANAGEMENT,
                    &params,
                    device.GetAddressOf()
                )
                != D3D_OK)
                break;

            Renderer::hooks.emplace((void**)(device.Get()));
            Renderer::hooks->hook_at(16, &D3D9::reset);
            Renderer::hooks->hook_at(17, &D3D9::present);
            break;
        }
    }
}

auto orion::Renderer::unhook() const noexcept -> void {
    if (!Renderer::hooks.has_value())
        return;
    Renderer::hooks->restore();
}
