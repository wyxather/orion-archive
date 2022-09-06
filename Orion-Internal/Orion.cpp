#include "Orion.h"
#include "Module/Hooks.h"
#include "Module/Window.h"
#include "Module/Console.h"
#include "Module/Renderer.h"
#include "Module/Gui.h"
#include "Module/Config.h"
#include "Module/Input.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

Orion::Application::Application(HMODULE handle) noexcept :
	m_id{ LI_FN(GetCurrentProcessId)() },
	m_handle{ handle }
{
	m_hooks = std::make_unique<Module::Hooks>(*this);
	m_window = std::make_unique<Module::Window>(*this);
	m_console = std::make_unique<Module::Console>(*this);
	m_renderer = std::make_unique<Module::Renderer>(*this);
	m_config = std::make_unique<Module::Config>(*this);
	m_gui = std::make_unique<Module::Gui>(*this);
	m_input = std::make_unique<Module::Input>(*this);
}

Orion::Application::~Application() noexcept
{
	m_input.reset();
	m_gui.reset();
	m_config.reset();
	m_renderer.reset();
	m_console.reset();
	m_window.reset();
	m_hooks.reset();
	m_handle = {};
}

void Orion::Application::load() const noexcept
{
	m_window->hook();
}

bool Orion::Application::start() const noexcept
{
	m_config->init();

	m_renderer->hook();
	m_input->hook();
	Module::Hooks::enable();

	return true;
}

void Orion::Application::exit() const noexcept
{
	m_input->unhook();
	m_renderer->unhook();
	Module::Hooks::disable();

	m_window->unhook();

	std::unique_ptr<void, std::function<void(HANDLE)>> thread(
		LI_FN(CreateThread)(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(&Application::unload), m_handle, NULL, nullptr),
		[](HANDLE handle) noexcept
		{
			if (handle)
				LI_FN(CloseHandle)(handle);
		});
}

void Orion::Application::unload(HMODULE handle) noexcept
{
	LI_FN(Sleep)(100);

	instance.reset();

	_CRT_INIT(handle, DLL_PROCESS_DETACH, nullptr);
	LI_FN(FreeLibraryAndExitThread)(handle, EXIT_SUCCESS);
}