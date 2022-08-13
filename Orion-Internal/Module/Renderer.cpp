#include "Renderer.h"
#include "Hooks.h"
#include "Orion.h"
#include "Dependencies/ImGui/imgui_impl_win32.h"
#include "Dependencies/ImGui/imgui_impl_dx9.h"
#include "Dependencies/ImGui/imgui_impl_dx11.h"
#include <d3d9.h>

using namespace Orion::Module;

namespace
{
	namespace D3D9
	{
		HRESULT __stdcall Reset(
			const LPDIRECT3DDEVICE9 pDevice,
			const D3DPRESENT_PARAMETERS* pPresentationParameters
		) noexcept
		{
			ImGui_ImplDX9_InvalidateDeviceObjects();
			static const auto& hook = Orion::instance->getHooks()[Orion::Fnv<"Renderer">::value];
			return hook.get<
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
			ImGui_ImplDX9_NewFrame();
			ImGui_ImplWin32_NewFrame();
			ImGui::NewFrame();
			{

			}
			ImGui::EndFrame();
			ImGui::Render();
			if (pDevice->BeginScene() == D3D_OK) {
				ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
				pDevice->EndScene();
			}
			static const auto& hook = Orion::instance->getHooks()[Orion::Fnv<"Renderer">::value];
			return hook.get<
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
}

Renderer::Renderer(const Application& app) noexcept :
	m_app{ app },
	m_hooks{ app.getHooks() }
{
	{
		String<"d3d9.dll"> moduleName;
		m_handle = LI_FN(GetModuleHandleA)(moduleName.get());
		if (m_handle && LI_FN(MessageBoxA)(nullptr, moduleName.get(), moduleName.get(), MB_YESNO | MB_ICONINFORMATION) == IDYES) {
			m_type = Type::D3D9;
			return;
		}
	}
	{
		String<"d3d11.dll"> moduleName;
		m_handle = LI_FN(GetModuleHandleA)(moduleName.get());
		if (m_handle && LI_FN(MessageBoxA)(nullptr, moduleName.get(), moduleName.get(), MB_YESNO | MB_ICONINFORMATION) == IDYES) {
			m_type = Type::D3D11;
			return;
		}
	}
}

void Renderer::hook() noexcept
{
	switch (m_type) {

	case Type::D3D9:
	{
		WNDCLASSEX windowClass{};
		windowClass.cbSize = sizeof(windowClass);
		windowClass.style = CS_HREDRAW | CS_VREDRAW;
		windowClass.lpfnWndProc = LI_FN(DefWindowProc).get();
		windowClass.cbClsExtra = 0;
		windowClass.cbWndExtra = 0;
		windowClass.hInstance = LI_FN(GetModuleHandle)(nullptr);
		windowClass.hIcon = nullptr;
		windowClass.hCursor = nullptr;
		windowClass.hbrBackground = nullptr;
		windowClass.lpszMenuName = nullptr;
		windowClass.lpszClassName = TEXT(" ");
		windowClass.hIconSm = nullptr;

		LI_FN(RegisterClassEx)(&windowClass);
		const auto window = LI_FN(CreateWindowEx)(NULL, windowClass.lpszClassName, TEXT(" "), WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, nullptr, nullptr, windowClass.hInstance, nullptr);

		String<"Direct3DCreate9"> procName;
		const auto direct3DCreate9 = LI_FN(GetProcAddress)(m_handle, procName.get());
		const auto direct3D9 = ((LPDIRECT3D9(__stdcall*)(std::uint32_t))(direct3DCreate9))(D3D_SDK_VERSION);

		D3DPRESENT_PARAMETERS params{};
		params.BackBufferWidth = 0;
		params.BackBufferHeight = 0;
		params.BackBufferFormat = D3DFORMAT::D3DFMT_UNKNOWN;
		params.BackBufferCount = 0;
		params.MultiSampleType = D3DMULTISAMPLE_TYPE::D3DMULTISAMPLE_NONE;
		params.MultiSampleQuality = 0;
		params.SwapEffect = D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD;
		params.hDeviceWindow = window;
		params.Windowed = TRUE;
		params.EnableAutoDepthStencil = FALSE;
		params.AutoDepthStencilFormat = D3DFORMAT::D3DFMT_UNKNOWN;
		params.Flags = NULL;
		params.FullScreen_RefreshRateInHz = 0;
		params.PresentationInterval = D3DPRESENT_INTERVAL_ONE;

		LPDIRECT3DDEVICE9 device{};
		if (direct3D9->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE::D3DDEVTYPE_NULLREF, window, D3DCREATE_SOFTWARE_VERTEXPROCESSING | D3DCREATE_DISABLE_DRIVER_MANAGEMENT, &params, &device) != D3D_OK) {
			direct3D9->Release();
			LI_FN(DestroyWindow)(window);
			LI_FN(UnregisterClass)(windowClass.lpszClassName, windowClass.hInstance);
			return;
		}

		auto&& hook = m_hooks[Fnv<"Renderer">::value];
		hook.init(device);
		hook.hookAt(16, &D3D9::Reset);
		hook.hookAt(17, &D3D9::Present);

		device->Release();
		direct3D9->Release();

		LI_FN(DestroyWindow)(window);
		LI_FN(UnregisterClass)(windowClass.lpszClassName, windowClass.hInstance);
	}
	break;

	}
}

void Renderer::unhook() noexcept
{
	m_hooks[Fnv<"Renderer">::value].restore();

	if (ImGui::GetIO().BackendRendererName) {
		switch (m_type) {
		case Type::D3D9:
			ImGui_ImplDX9_Shutdown();
			break;
		case Type::D3D11:
			ImGui_ImplDX11_Shutdown();
			break;
		}
	}
}

Renderer::~Renderer() noexcept
{
	m_type = {};
	m_handle = {};
}