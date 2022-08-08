#include "Window.h"
#include "Orion.h"

void Orion::Window::hook() noexcept
{
	LI_FN(EnumWindows)(&Window::enumerate, GetCurrentProcessId());
	m_proc.asLongPtr = LI_FN(SetWindowLongPtr)(m_handle, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&Window::proc));
}

void Orion::Window::unhook() noexcept
{
	LI_FN(SetWindowLongPtr)(m_handle, GWLP_WNDPROC, m_proc.asLongPtr);
}

Orion::Window::~Window() noexcept
{
	m_handle = {};
	m_proc = {};
}

BOOL Orion::Window::enumerate(HWND handle, LPARAM id) noexcept
{
	DWORD windowThreadProcessId{};
	if (!(LI_FN(GetWindowThreadProcessId)(handle, &windowThreadProcessId)) || id != windowThreadProcessId)
		return 1;

	TCHAR className[MAX_PATH]{}, windowText[MAX_PATH]{};
	if (!(LI_FN(GetClassName)(handle, className, MAX_PATH)) || !(LI_FN(GetWindowText)(handle, windowText, MAX_PATH)))
		return 1;

	if (LI_FN(MessageBox)(nullptr, windowText, className, MB_YESNO | MB_ICONINFORMATION) != IDYES)
		return 1;

	instance->getWindow()->setHandle(handle);

	return 0;
}

LRESULT Orion::Window::proc(HWND handle, UINT message, WPARAM wParam, LPARAM lParam) noexcept
{
	if (message == WM_KEYUP) {
		switch (wParam) {
		case VK_END: instance->exit(); break;
		}
	}
	return LI_FN(CallWindowProc).cached()(instance->getWindow()->m_proc.asWndProc, handle, message, wParam, lParam);
}