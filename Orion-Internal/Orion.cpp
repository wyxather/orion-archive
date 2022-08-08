#include "Orion.h"
#include "Module/Window.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

Orion::Application::Application(HMODULE handle) noexcept : m_handle{ handle } {}

void Orion::Application::load() noexcept
{
	instance->m_window = std::make_unique<Window>();
	instance->m_window->hook();
}

void Orion::Application::exit() const noexcept
{
	instance->m_window->unhook();

	std::unique_ptr<void, decltype(&CloseHandle)> thread
	{
		CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(&Application::unload), instance->m_handle, 0, nullptr),
		&CloseHandle
	};
}

void Orion::Application::unload(HMODULE handle) noexcept
{
	Sleep(100);
	instance.reset();
	_CRT_INIT(handle, DLL_PROCESS_DETACH, nullptr);
	FreeLibraryAndExitThread(handle, 0);
}

Orion::Application::~Application() noexcept
{
	m_window.reset();
	m_handle = {};
}