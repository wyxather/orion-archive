#include "Window.h"
#include "Gui.h"
#include "Input.h"
#include "Source/Orion.h"
#include "Dependencies/ImGui/imgui_impl_win32.h"

using Orion::Module::Window;
using Orion::Module::Input;

LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

Window::Window(const Application& app) noexcept :
	m_app{ app }
{
	ImGui::CreateContext();
	LI_FN(EnumWindows)(reinterpret_cast<WNDENUMPROC>(&Window::enumerate), reinterpret_cast<LPARAM>(this));
}

Window::~Window() noexcept
{
	ImGui::DestroyContext();
	m_handle = {};
	m_proc = {};
}

void Window::hook() noexcept
{
	ImGui_ImplWin32_Init(m_handle);
	m_proc.asLongPtr = LI_FN(SetWindowLongPtr)(m_handle, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&Window::proc));
}

void Window::unhook() noexcept
{
	LI_FN(SetWindowLongPtr)(m_handle, GWLP_WNDPROC, m_proc.asLongPtr);
	ImGui_ImplWin32_Shutdown();
}

BOOL Window::enumerate(HWND handle, Window* window) noexcept
{
	if (DWORD processId{}; !(LI_FN(GetWindowThreadProcessId)(handle, &processId)) || window->m_app.getId() != processId)
		return 1;

	TCHAR className[MAX_PATH]{}, windowText[MAX_PATH]{};
	if (!(LI_FN(GetClassName)(handle, className, MAX_PATH)) || !(LI_FN(GetWindowText)(handle, windowText, MAX_PATH)))
		return 1;

	if (LI_FN(MessageBox)(nullptr, windowText, className, MB_YESNO | MB_ICONINFORMATION) != IDYES)
		return 1;

	window->m_handle = handle;

	return 0;
}

LRESULT Window::proc(HWND handle, UINT message, WPARAM wParam, LPARAM lParam) noexcept
{
	static const auto once = instance->start();
	auto&& gui = instance->getGui();
	if (message == WM_KEYUP) {
		switch (wParam) {
		case VK_END: instance->exit(); break;
		case VK_INSERT: gui.toggle(); break;
		}
	}
	if (once) {
		if (gui.isOpen()) {
			switch (instance->getInput().getType()) {
			case Input::Type::DINPUT8:
				if (ImGui_ImplWin32_WndProcHandler(handle, message, wParam, lParam))
					return FALSE;
				break;
			default:
				return ImGui_ImplWin32_WndProcHandler(handle, message, wParam, lParam) ? FALSE : TRUE;
			}
		}
	}
	return LI_FN(CallWindowProc).cached()(instance->getWindow().m_proc.asWndProc, handle, message, wParam, lParam);
}