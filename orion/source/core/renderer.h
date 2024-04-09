#pragma once

#include <initguid.h>
//
#include <d3d11.h>
#include <d3d9.h>

#include "source/utility/minhook.h"
#include "source/utility/windows.h"

namespace orion {

    namespace utility {

        class Module;

    }

    namespace import {

        class Ntdll;
        class Kernel32;
        class User32;

    }  // namespace import

    namespace core {

        class Renderer final {
        private:
            const utility::Module *module = nullptr;
            utility::MinHook<2> minhook;

        public:
            explicit Renderer(
                const import::Ntdll &ntdll,
                const import::Kernel32 &kernel32,
                const import::User32 &user32
            ) noexcept;

            Renderer(Renderer &&) = delete;
            Renderer &operator=(Renderer &&) = delete;

            Renderer(const Renderer &) = delete;
            Renderer &operator=(const Renderer &) = delete;

            auto hook() noexcept -> void;
            auto unhook() const noexcept -> void;

        private:
            class WindowClass final {
            public:
                WNDCLASSEXA value;
                ATOM atom;

                explicit WindowClass() noexcept;

                ~WindowClass() noexcept;

                WindowClass(WindowClass &&) = delete;
                WindowClass &operator=(WindowClass &&) = delete;

                WindowClass(const WindowClass &) = delete;
                WindowClass &operator=(const WindowClass &) = delete;

                [[nodiscard]] auto is_registered() const noexcept -> bool;
            };

            class Window final {
            public:
                HWND handle;

                explicit Window(const WindowClass &window_class) noexcept;

                ~Window() noexcept;

                Window(Window &&) = delete;
                Window &operator=(Window &&) = delete;

                Window(const Window &) = delete;
                Window &operator=(const Window &) = delete;

                [[nodiscard]] auto is_created() const noexcept -> bool;
            };

            auto hook_d3d9() noexcept -> void;
            [[nodiscard]] auto hook_d3d9_rtss() noexcept -> bool;

            auto hook_d3d11() noexcept -> void;
            [[nodiscard]] auto hook_d3d11_rtss() noexcept -> bool;

            [[nodiscard]] static auto get_user_input(
                const wchar_t *module_full_name,
                const wchar_t *module_name
            ) noexcept -> int;

            static auto STDMETHODCALLTYPE direct3ddevice9_reset(
                LPDIRECT3DDEVICE9 direct3ddevice9,
                const D3DPRESENT_PARAMETERS *presentation_parameters
            ) noexcept -> HRESULT;

            static auto STDMETHODCALLTYPE direct3ddevice9_present(
                LPDIRECT3DDEVICE9 direct3ddevice9,
                LPRECT src_rect,
                LPRECT dst_rect,
                HWND dst_window_override,
                LPRGNDATA dirty_region
            ) noexcept -> HRESULT;

            static auto STDMETHODCALLTYPE dxgiswapchain_present(
                IDXGISwapChain *dxgiswapchain,
                UINT sync_interval,
                UINT flags
            ) noexcept -> HRESULT;

            static auto STDMETHODCALLTYPE dxgiswapchain_resizebuffers(
                IDXGISwapChain *dxgiswapchain,
                UINT buffer_count,
                UINT width,
                UINT height,
                DXGI_FORMAT new_format,
                UINT swapchain_flags
            ) noexcept -> HRESULT;
        };

    }  // namespace core

}  // namespace orion
