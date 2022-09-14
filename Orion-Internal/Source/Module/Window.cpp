#include "Window.h"
#include "Gui.h"
#include "Input.h"
#include "Orion.h"
#include "../Dependencies/ImGui/imgui_impl_win32.h"

LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

Window::Window() noexcept
{
	ImGui::CreateContext();
	LI_FN(EnumWindows)(reinterpret_cast<WNDENUMPROC>(&Window::enumerate), reinterpret_cast<LPARAM>(this));
}

Window::~Window() noexcept
{
	ImGui::DestroyContext();
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

auto Window::enumerate(HWND handle, Window* window) noexcept -> BOOL
{
	if (DWORD id; !(LI_FN(GetWindowThreadProcessId)(handle, &id)) || id != Orion::instance->id)
		return 1;
	if (std::array<TCHAR, 260> className, windowText; !(LI_FN(GetClassName)(handle, className.data(), static_cast<int>(className.size()))) || !(LI_FN(GetWindowText)(handle, windowText.data(), static_cast<int>(windowText.size()))) || LI_FN(MessageBox)(nullptr, windowText.data(), className.data(), MB_YESNO | MB_ICONINFORMATION) != IDYES)
		return 1;
	window->handle = handle;
	return 0;
}

LRESULT Window::proc(HWND handle, UINT message, WPARAM wParam, LPARAM lParam) noexcept
{
	static const auto once = Orion::instance->start();
	if (message == WM_KEYUP) {
		switch (wParam) {
		case VK_END:  Orion::instance->exit(); break;
		case VK_INSERT: gui->toggle(); break;
		}
	}
	if (once) {
		if (gui->isOpen()) {
			switch (input->getType()) {
			case Input::Type::DINPUT8:
				if (ImGui_ImplWin32_WndProcHandler(handle, message, wParam, lParam))
					return FALSE;
				break;
			default:
				return ImGui_ImplWin32_WndProcHandler(handle, message, wParam, lParam) ? FALSE : TRUE;
			}
		}
	}
	return LI_FN(CallWindowProc).cached()(window->originalProc.asWndProc, handle, message, wParam, lParam);
}