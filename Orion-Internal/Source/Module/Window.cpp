#include "Window.h"
#include "Gui.h"
#include "Input.h"
#include "Orion.h"
#include "../Dependencies/ImGui/imgui_impl_win32.h"

LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

Window::Window(Type type, std::uint32_t className, std::uint32_t windowText) noexcept :
	type{ type },
	hash{ className, windowText },
	handle{ nullptr },
	originalProc{ nullptr }
{
	ImGui::CreateContext();
	LI_FN(EnumWindows)(reinterpret_cast<WNDENUMPROC>(&Window::enumerate), reinterpret_cast<LPARAM>(this));
}

Window::~Window() noexcept
{
	ImGui::DestroyContext();
	type = {};
	hash = {};
	handle = {};
	originalProc = {};
}

auto Window::hook() noexcept -> void
{
	ImGui_ImplWin32_Init(handle);
	originalProc.asLongPtr = LI_FN(SetWindowLongPtr)(handle, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&Window::proc));
}

auto Window::unhook() noexcept -> void
{
	LI_FN(SetWindowLongPtr)(handle, GWLP_WNDPROC, originalProc.asLongPtr);
	ImGui_ImplWin32_Shutdown();
}

auto __stdcall Window::enumerate(HWND handle, Window* window) noexcept -> BOOL
{
	if (DWORD id; !(LI_FN(GetWindowThreadProcessId)(handle, &id)) || id != app->id)
		return 1;

	switch (window->type) {

	case Type::AUTO:
	{
		if (std::array<TCHAR, 260> className, windowText;
			!(LI_FN(GetClassName)(handle, className.data(), static_cast<int>(className.size()))) ||
			!(LI_FN(GetWindowText)(handle, windowText.data(), static_cast<int>(windowText.size()))) ||
			LI_FN(MessageBox)(nullptr, windowText.data(), className.data(), MB_YESNO | MB_ICONINFORMATION) != IDYES)
			return 1;
	}
	break;

	case Type::CLASSNAME:
	{
		if (std::array<CHAR, 260> className;
			!(LI_FN(GetClassNameA)(handle, className.data(), static_cast<int>(className.size()))) ||
			window->hash[0] != Orion::Fnv<"">::run(className.data()))
			return 1;
	}
	break;

	case Type::WINDOWTEXT:
	{
		if (std::array<CHAR, 260> windowText;
			!(LI_FN(GetWindowTextA)(handle, windowText.data(), static_cast<int>(windowText.size()))) ||
			window->hash[1] != Orion::Fnv<"">::run(windowText.data()))
			return 1;
	}
	break;

	case Type::BOTH:
	{
		if (std::array<CHAR, 260> className, windowText;
			!(LI_FN(GetClassNameA)(handle, className.data(), static_cast<int>(className.size()))) ||
			!(LI_FN(GetWindowTextA)(handle, windowText.data(), static_cast<int>(windowText.size()))) ||
			window->hash[0] != Orion::Fnv<"">::run(className.data()) ||
			window->hash[1] != Orion::Fnv<"">::run(windowText.data()))
			return 1;
	}
	break;

	}

	window->handle = handle;

	return 0;
}

auto __stdcall Window::proc(HWND handle, UINT message, WPARAM wParam, LPARAM lParam) noexcept -> LRESULT
{
	static const auto once = []() noexcept {
		Application::start();
		return false;
	}();
	switch (message) {
	case WM_KEYUP:
	{
		switch (wParam) {
		case VK_END: app->exit(); break;
		case VK_INSERT: gui->toggle(); break;
		}
	}
	break;
	case WM_DESTROY: app->exit(); break;
	}
	if (gui->isOpen()) {
		switch (input->getType()) {
		case Input::Type::DINPUT8:
			if (ImGui_ImplWin32_WndProcHandler(handle, message, wParam, lParam))
				return FALSE;
			break;
		default:
		{
			ImGui_ImplWin32_WndProcHandler(handle, message, wParam, lParam);
			switch (message) {
			case WM_LBUTTONDOWN: case WM_LBUTTONDBLCLK:
			case WM_RBUTTONDOWN: case WM_RBUTTONDBLCLK:
			case WM_MBUTTONDOWN: case WM_MBUTTONDBLCLK:
			case WM_XBUTTONDOWN: case WM_XBUTTONDBLCLK:
			case WM_LBUTTONUP:
			case WM_RBUTTONUP:
			case WM_MBUTTONUP:
			case WM_XBUTTONUP:
			case WM_MOUSEWHEEL:
			case WM_MOUSEHWHEEL:
			case WM_KEYDOWN:
			case WM_KEYUP:
			case WM_SYSKEYDOWN:
			case WM_SYSKEYUP:
			case WM_CHAR:
				return FALSE;
			}
		}
		break;
		}
	}
	return LI_FN(CallWindowProc).cached()(window->originalProc.asWndProc, handle, message, wParam, lParam);
}