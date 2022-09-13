#include "Orion.h"
#include "Module/Hooks.h"
#include "Module/Window.h"
#include "Module/Console.h"
#include "Module/Renderer.h"
#include "Module/Config.h"
#include "Module/Gui.h"
#include "Module/Input.h"
#include "Module/Game.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

Orion::Application::Application(HMODULE handle) noexcept : id{ LI_FN(GetCurrentProcessId)() }, m_handle{ handle } {}

Orion::Application::~Application() noexcept
{
	game.reset();
	m_input.reset();
	m_gui.reset();
	m_config.reset();
	renderer.reset();
	console.reset();
	window.reset();
	m_hooks.reset();

	id = {};
	m_handle = {};
}

void Orion::Application::load() noexcept
{
	m_hooks = std::make_unique<Module::Hooks>(*this);
	window.emplace();
	console.emplace();
	renderer.emplace();
	m_config = std::make_unique<Module::Config>(*this);
	m_gui = std::make_unique<Module::Gui>(*this);
	m_input = std::make_unique<Module::Input>(*this);
	game.emplace();

	window->hook();
}

bool Orion::Application::start() const noexcept
{
	m_config->init();

	renderer->hook();
	m_input->hook();
	game->hook();
	Module::Hooks::enable();

	return true;
}

void Orion::Application::exit() const noexcept
{
	game->unhook();
	m_input->unhook();
	renderer->unhook();
	Module::Hooks::disable();

	window->unhook();

	std::unique_ptr<void, std::function<void(HANDLE)>> thread(
		LI_FN(CreateThread)(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(&Application::unload), m_handle, NULL, nullptr),
		[](HANDLE handle) noexcept
		{
			if (handle != nullptr)
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