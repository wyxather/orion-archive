#include "Window.h"

Orion::Module::Window::Window() noexcept :
	m_id{ LI_FN(GetCurrentProcessId)() }
{
	LI_FN(EnumWindows)(reinterpret_cast<WNDENUMPROC>(&Window::enumerate), reinterpret_cast<LPARAM>(this));
}

Orion::Module::Window::~Window() noexcept
{
	m_id = {};
	m_handle = {};
	m_proc = {};
}

void Orion::Module::Window::hook() noexcept
{
	m_proc.asLongPtr = LI_FN(SetWindowLongPtr)(m_handle, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&Window::proc));
}

void Orion::Module::Window::unhook() noexcept
{
	LI_FN(SetWindowLongPtr)(m_handle, GWLP_WNDPROC, m_proc.asLongPtr);
}

BOOL Orion::Module::Window::enumerate(HWND handle, Window* window) noexcept
{
	DWORD windowThreadProcessId{};
	if (!(LI_FN(GetWindowThreadProcessId)(handle, &windowThreadProcessId)) || window->m_id != windowThreadProcessId)
		return 1;

	TCHAR className[MAX_PATH]{}, windowText[MAX_PATH]{};
	if (!(LI_FN(GetClassName)(handle, className, MAX_PATH)) || !(LI_FN(GetWindowText)(handle, windowText, MAX_PATH)))
		return 1;

	if (LI_FN(MessageBox)(nullptr, windowText, className, MB_YESNO | MB_ICONINFORMATION) != IDYES)
		return 1;

	window->m_handle = handle;

	return 0;
}

#include "Orion.h"

LRESULT Orion::Module::Window::proc(HWND handle, UINT message, WPARAM wParam, LPARAM lParam) noexcept
{
	if (message == WM_KEYUP) {
		switch (wParam) {
		case VK_END: instance->exit(); break;
		}
	}
	return LI_FN(CallWindowProc).cached()(instance->getWindow()->m_proc.asWndProc, handle, message, wParam, lParam);
}