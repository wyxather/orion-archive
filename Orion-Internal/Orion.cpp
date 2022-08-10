#include "Orion.h"
#include "Module/Window.h"
#include "Module/Console.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

Orion::Application::Application(HMODULE handle) noexcept :
	m_id{ LI_FN(GetCurrentProcessId)() },
	m_handle{ handle }
{
	m_window = std::make_unique<Module::Window>(*this);
	m_console = std::make_unique<Module::Console>(*this);
}

Orion::Application::~Application() noexcept
{
	m_console.reset();
	m_window.reset();
	m_handle = {};
}

void Orion::Application::load() noexcept
{
	instance->m_window->hook();
}

void Orion::Application::exit() const noexcept
{
	instance->m_window->unhook();

	std::unique_ptr<void, decltype(&CloseHandle)> thread
	{
		LI_FN(CreateThread)(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(&Application::unload), instance->m_handle, NULL, nullptr),
		LI_FN(CloseHandle).get()
	};
}

void Orion::Application::unload(HMODULE handle) noexcept
{
	LI_FN(Sleep)(100);

	instance.reset();

	_CRT_INIT(handle, DLL_PROCESS_DETACH, nullptr);
	LI_FN(FreeLibraryAndExitThread)(handle, EXIT_SUCCESS);
}