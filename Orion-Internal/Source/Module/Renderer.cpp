#include "Renderer.h"
#include "Gui.h"
#include "Game.h"
#include "Orion.h"
#include "../Dependencies/ImGui/imgui_impl_win32.h"
#include "../Dependencies/ImGui/imgui_impl_dx9.h"
#include "../Dependencies/ImGui/imgui_impl_dx11.h"
#include <d3d9.h>
#include <d3d11.h>
#include <wrl/client.h>

using Microsoft::WRL::ComPtr;

namespace
{
	namespace D3D9
	{
		HRESULT __stdcall Reset(
			const LPDIRECT3DDEVICE9 pDevice,
			const D3DPRESENT_PARAMETERS* pPresentationParameters
		) noexcept
		{
			gui->invalidate();
			game->invalidate();
			ImGui_ImplDX9_InvalidateDeviceObjects();
			return renderer->getHook().get<
				16,
				HRESULT,
				Hooks::Function::STDCALL>(
					pDevice,
					pPresentationParameters);
		}

		HRESULT __stdcall Present(
			const LPDIRECT3DDEVICE9 pDevice,
			const LPRECT pSourceRect,
			const LPRECT pDestRect,
			const HWND hDestWindowOverride,
			const LPRGNDATA pDirtyRegion
		) noexcept
		{
			static const auto imgui = ImGui_ImplDX9_Init(pDevice);
			if (imgui) {
				ImGui_ImplDX9_NewFrame();
				ImGui_ImplWin32_NewFrame();
				ImGui::NewFrame();
				{
					gui->draw();
					game->draw();
				}
				ImGui::EndFrame();
				ImGui::Render();
				if (pDevice->BeginScene() == D3D_OK) {
					ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
					pDevice->EndScene();
				}
			}
			return renderer->getHook().get<
				17,
				HRESULT,
				Hooks::Function::STDCALL>(
					pDevice,
					pSourceRect,
					pDestRect,
					hDestWindowOverride,
					pDirtyRegion);
		}
	}

	namespace D3D11
	{
		HRESULT __stdcall ResizeBuffers(
			IDXGISwapChain* const swapChain,
			const UINT bufferCount,
			const UINT width,
			const UINT height,
			const DXGI_FORMAT newFormat,
			const UINT swapChainFlags
		) noexcept
		{
			gui->invalidate();
			game->invalidate();
			ImGui_ImplDX11_InvalidateDeviceObjects();
			const auto result = renderer->getHook().get<
				13,
				HRESULT,
				Hooks::Function::STDCALL>(
					swapChain,
					bufferCount,
					width,
					height,
					newFormat,
					swapChainFlags);
			return result;
		}

		HRESULT __stdcall Present(
			IDXGISwapChain* const swapChain,
			const UINT syncInterval,
			const UINT flags
		) noexcept
		{
			static const auto imgui = [&]() noexcept
			{
				ComPtr<ID3D11Device> device;
				if (swapChain->GetDevice(IID_PPV_ARGS(device.GetAddressOf())) != S_OK)
					return false;

				ComPtr<ID3D11DeviceContext> context;
				device->GetImmediateContext(context.GetAddressOf());

				return ImGui_ImplDX11_Init(swapChain, device.Get(), context.Get());
			}();
			if (imgui) {
				ImGui_ImplDX11_NewFrame();
				ImGui_ImplWin32_NewFrame();
				ImGui::NewFrame();
				{
					gui->draw();
					game->draw();
				}
				ImGui::EndFrame();
				ImGui::Render();
				ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
			}
			return renderer->getHook().get<
				8,
				HRESULT,
				Hooks::Function::STDCALL>(
					swapChain,
					syncInterval,
					flags);
		}
	}

}

Renderer::Renderer(Type type) noexcept : handle{ nullptr }, type{ Type::NONE }
{
	Orion::String<"Renderer"> caption;

	switch (type) {

	case Type::AUTO:
	{
		{
			Orion::String<"d3d9.dll"> name;
			handle = LI_FN(GetModuleHandleA)(name.get());
			if (handle && LI_FN(MessageBoxA)(nullptr, name.get(), caption.get(), MB_YESNO | MB_ICONINFORMATION) == IDYES) {
				this->type = Type::D3D9;
				break;
			}
		}
		{
			Orion::String<"d3d11.dll"> name;
			handle = LI_FN(GetModuleHandleA)(name.get());
			if (handle && LI_FN(MessageBoxA)(nullptr, name.get(), caption.get(), MB_YESNO | MB_ICONINFORMATION) == IDYES) {
				this->type = Type::D3D11;
				break;
			}
		}
	}
	break;

	case Type::D3D9:
	{
		Orion::String<"d3d9.dll"> name;
		if (handle = LI_FN(GetModuleHandleA)(name.get()))
			this->type = Type::D3D9;
	}
	break;

	case Type::D3D11:
	{
		Orion::String<"d3d11.dll"> name;
		if (handle = LI_FN(GetModuleHandleA)(name.get()))
			this->type = Type::D3D11;
	}
	break;

	}
}

Renderer::~Renderer() noexcept
{
	type = {};
	handle = {};
}

auto Renderer::hook() noexcept -> void
{
	switch (type) {

	case Type::D3D9:
	{
		std::unique_ptr<WNDCLASSEX, std::function<void(WNDCLASSEX*)>> windowClass(
			[]() noexcept -> WNDCLASSEX*
			{
				const auto windowClass = new WNDCLASSEX();
				windowClass->cbSize = sizeof(WNDCLASSEX);
				windowClass->style = CS_HREDRAW | CS_VREDRAW;
				windowClass->lpfnWndProc = LI_FN(DefWindowProc).get();
				windowClass->cbClsExtra = 0;
				windowClass->cbWndExtra = 0;
				windowClass->hInstance = LI_FN(GetModuleHandle)(nullptr);
				windowClass->hIcon = nullptr;
				windowClass->hCursor = nullptr;
				windowClass->hbrBackground = nullptr;
				windowClass->lpszMenuName = nullptr;
				windowClass->lpszClassName = TEXT(" ");
				windowClass->hIconSm = nullptr;

				if (LI_FN(RegisterClassEx)(windowClass) == NULL) {
					delete windowClass;
					return nullptr;
				}

				return windowClass;
			}(),
				[](WNDCLASSEX* windowClass) noexcept
			{
				if (windowClass != nullptr) {
					LI_FN(UnregisterClass)(windowClass->lpszClassName, windowClass->hInstance);
					delete windowClass;
				}
			});

		if (!windowClass)
			return;

		std::unique_ptr<HWND__, std::function<void(HWND)>> window(
			LI_FN(CreateWindowEx)(NULL, windowClass->lpszClassName, TEXT(" "), WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, nullptr, nullptr, windowClass->hInstance, nullptr),
			[](HWND hWnd) noexcept
			{
				if (hWnd != nullptr)
					LI_FN(DestroyWindow)(hWnd);
			});

		if (!window)
			return;

		Orion::String<"Direct3DCreate9"> proc;
		const auto direct3DCreate9 = reinterpret_cast<LPDIRECT3D9(__stdcall*)(std::uint32_t)>(LI_FN(GetProcAddress)(handle, proc.get()));
		const ComPtr<IDirect3D9> direct3D9 = direct3DCreate9(D3D_SDK_VERSION);

		D3DPRESENT_PARAMETERS params;
		params.BackBufferWidth = 0;
		params.BackBufferHeight = 0;
		params.BackBufferFormat = D3DFORMAT::D3DFMT_UNKNOWN;
		params.BackBufferCount = 0;
		params.MultiSampleType = D3DMULTISAMPLE_TYPE::D3DMULTISAMPLE_NONE;
		params.MultiSampleQuality = 0;
		params.SwapEffect = D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD;
		params.hDeviceWindow = window.get();
		params.Windowed = TRUE;
		params.EnableAutoDepthStencil = FALSE;
		params.AutoDepthStencilFormat = D3DFORMAT::D3DFMT_UNKNOWN;
		params.Flags = NULL;
		params.FullScreen_RefreshRateInHz = 0;
		params.PresentationInterval = D3DPRESENT_INTERVAL_ONE;

		ComPtr<IDirect3DDevice9> device;
		if (direct3D9->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE::D3DDEVTYPE_NULLREF, window.get(), D3DCREATE_SOFTWARE_VERTEXPROCESSING | D3DCREATE_DISABLE_DRIVER_MANAGEMENT, &params, device.GetAddressOf()) != D3D_OK)
			return;

		renderer.init(device.Get());
		renderer.hookAt(16, &D3D9::Reset);
		renderer.hookAt(17, &D3D9::Present);
	}
	break;

	case Type::D3D11:
	{
		std::unique_ptr<WNDCLASSEX, std::function<void(WNDCLASSEX*)>> windowClass(
			[]() noexcept -> WNDCLASSEX*
			{
				const auto windowClass = new WNDCLASSEX();
				windowClass->cbSize = sizeof(WNDCLASSEX);
				windowClass->style = CS_HREDRAW | CS_VREDRAW;
				windowClass->lpfnWndProc = LI_FN(DefWindowProc).get();
				windowClass->cbClsExtra = 0;
				windowClass->cbWndExtra = 0;
				windowClass->hInstance = LI_FN(GetModuleHandle)(nullptr);
				windowClass->hIcon = nullptr;
				windowClass->hCursor = nullptr;
				windowClass->hbrBackground = nullptr;
				windowClass->lpszMenuName = nullptr;
				windowClass->lpszClassName = TEXT(" ");
				windowClass->hIconSm = nullptr;

				if (LI_FN(RegisterClassEx)(windowClass) == NULL) {
					delete windowClass;
					return nullptr;
				}

				return windowClass;
			}(),
				[](WNDCLASSEX* windowClass) noexcept
			{
				if (windowClass != nullptr) {
					LI_FN(UnregisterClass)(windowClass->lpszClassName, windowClass->hInstance);
					delete windowClass;
				}
			});

		if (!windowClass)
			return;

		std::unique_ptr<HWND__, std::function<void(HWND)>> window(
			LI_FN(CreateWindowEx)(NULL, windowClass->lpszClassName, TEXT(" "), WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, nullptr, nullptr, windowClass->hInstance, nullptr),
			[](HWND hWnd) noexcept
			{
				if (hWnd != nullptr)
					LI_FN(DestroyWindow)(hWnd);
			});

		if (!window)
			return;

		Orion::String<"D3D11CreateDeviceAndSwapChain"> proc;
		const auto createDeviceAndSwapChain = LI_FN(GetProcAddress)(handle, proc.get());

		D3D_FEATURE_LEVEL featureLevel;
		const D3D_FEATURE_LEVEL featureLevels[]{
			D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_10_1,
			D3D_FEATURE_LEVEL::D3D_FEATURE_LEVEL_11_0
		};

		DXGI_RATIONAL refreshRate;
		refreshRate.Numerator = 60;
		refreshRate.Denominator = 1;

		DXGI_MODE_DESC bufferDesc;
		bufferDesc.Width = 100;
		bufferDesc.Height = 100;
		bufferDesc.RefreshRate = refreshRate;
		bufferDesc.Format = DXGI_FORMAT::DXGI_FORMAT_R8G8B8A8_UNORM;
		bufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER::DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
		bufferDesc.Scaling = DXGI_MODE_SCALING::DXGI_MODE_SCALING_UNSPECIFIED;

		DXGI_SAMPLE_DESC sampleDesc;
		sampleDesc.Count = 1;
		sampleDesc.Quality = 0;

		DXGI_SWAP_CHAIN_DESC swapChainDesc;
		swapChainDesc.BufferDesc = bufferDesc;
		swapChainDesc.SampleDesc = sampleDesc;
		swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
		swapChainDesc.BufferCount = 1;
		swapChainDesc.OutputWindow = window.get();
		swapChainDesc.Windowed = TRUE;
		swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT::DXGI_SWAP_EFFECT_DISCARD;
		swapChainDesc.Flags = DXGI_SWAP_CHAIN_FLAG::DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

		ComPtr<IDXGISwapChain> swapChain;
		ComPtr<ID3D11Device> device;
		ComPtr<ID3D11DeviceContext> context;

		if (((HRESULT(__stdcall*)(
			IDXGIAdapter*,
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
			ID3D11DeviceContext**))(createDeviceAndSwapChain))(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0, featureLevels, 2, D3D11_SDK_VERSION, &swapChainDesc, swapChain.GetAddressOf(), device.GetAddressOf(), &featureLevel, context.GetAddressOf()) != S_OK)
			return;

		std::array<std::uintptr_t, 205> table;

		for (std::size_t i = 0; i < 18; i++)
			table[i] = (*reinterpret_cast<decltype(table)::value_type**>(swapChain.Get()))[i];

		for (std::size_t i = 18; i < 61; i++)
			table[i] = (*reinterpret_cast<decltype(table)::value_type**>(device.Get()))[i];

		for (std::size_t i = 61; i < 205; i++)
			table[i] = (*reinterpret_cast<decltype(table)::value_type**>(context.Get()))[i];

		const void* address = table.data();

		renderer.init(&address);
		renderer.hookAt(8, &D3D11::Present);
		renderer.hookAt(13, &D3D11::ResizeBuffers);
	}
	break;

	}
}

auto Renderer::unhook() noexcept -> void
{
	renderer.restore();

	if (ImGui::GetIO().BackendRendererName) {
		switch (type) {
		case Type::D3D9:
			ImGui_ImplDX9_Shutdown();
			break;
		case Type::D3D11:
			ImGui_ImplDX11_Shutdown();
			break;
		}
	}
}