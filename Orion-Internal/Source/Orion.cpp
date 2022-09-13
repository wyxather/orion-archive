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

Orion::Application::Application(HMODULE handle) noexcept : id{ LI_FN(GetCurrentProcessId)() }, handle{ handle } {}

Orion::Application::~Application() noexcept
{
	game.reset();
	input.reset();
	m_gui.reset();
	m_config.reset();
	renderer.reset();
	console.reset();
	window.reset();
	m_hooks.reset();

	id = {};
	handle = {};
}

void Orion::Application::load() noexcept
{
	m_hooks = std::make_unique<Module::Hooks>(*this);
	window.emplace();
	console.emplace();
	renderer.emplace();
	m_config = std::make_unique<Module::Config>(*this);
	m_gui = std::make_unique<Module::Gui>(*this);
	input.emplace();
	game.emplace();

	window->hook();
}

bool Orion::Application::start() const noexcept
{
	m_config->init();

	renderer->hook();
	input->hook();
	game->hook();
	Module::Hooks::enable();

	return true;
}

void Orion::Application::exit() const noexcept
{
	game->unhook();
	input->unhook();
	renderer->unhook();
	Module::Hooks::disable();

	window->unhook();
	
	std::unique_ptr<void, std::function<void(HANDLE)>> thread(
		LI_FN(CreateThread)(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(&Application::unload), handle, NULL, nullptr),
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