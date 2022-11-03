#include "Orion.h"
#include "Module/Window.h"
#include "Module/Console.h"
#include "Module/Hooks.h"
#include "Module/Renderer.h"
#include "Module/Input.h"
#include "Module/Config.h"
#include "Module/Gui.h"
#include "Module/Game.h"

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

Application::Application(HMODULE handle) noexcept : id{ LI_FN(GetCurrentProcessId)() }, handle{ handle } {}

Application::~Application() noexcept
{
	game.reset();
	gui.reset();
	config.reset();
	input.reset();
	renderer.reset();
	hooks.reset();
	console.reset();
	window.reset();

	id = {};
	handle = {};
}

auto Application::load() noexcept -> void
{
	window.emplace();
	console.emplace();
	hooks.emplace();
	renderer.emplace();
	input.emplace();
	config.emplace();
	gui.emplace();
	game.emplace();

	window->hook();
}

auto Application::start() noexcept -> void
{
	config->init();

	renderer->hook();
	input->hook();
	game->hook();

	Hooks::enable();
}

auto Application::exit() const noexcept -> void
{
	[[maybe_unused]] static const auto once = [&]() noexcept {

		game->unhook();
		input->unhook();
		renderer->unhook();

		Hooks::disable();

		window->unhook();

		std::unique_ptr<void, std::function<void(HANDLE)>> thread(
			LI_FN(CreateThread)(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(&Application::unload), handle, 0, nullptr),
			[](HANDLE handle) noexcept
			{
				if (handle != nullptr)
					LI_FN(CloseHandle)(handle);
			});

		return false;
	}();
}

auto __stdcall Application::unload(HMODULE handle) noexcept -> void
{
	LI_FN(Sleep)(100);

	app.reset();

	_CRT_INIT(handle, DLL_PROCESS_DETACH, nullptr);
	LI_FN(FreeLibraryAndExitThread)(handle, 0);
}