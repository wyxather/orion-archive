#include "Renderer.h"
#include <d3d9.h>

using namespace Orion::Module;

Renderer::Renderer(const Application& app) noexcept :
	m_app{ app }
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

void Renderer::hook() const noexcept
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

		device->Release();
		direct3D9->Release();

		LI_FN(DestroyWindow)(window);
		LI_FN(UnregisterClass)(windowClass.lpszClassName, windowClass.hInstance);
	}
	break;

	}
}

void Renderer::unhook() const noexcept
{

}

Renderer::~Renderer() noexcept
{
	m_type = {};
	m_handle = {};
}