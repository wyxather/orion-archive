#include "Game.h"
#include "Console.h"
#include "Gui.h"
#include "SDK/LocalPlayer.h"
#include "SDK/Datamaps.h"
#include "SDK/Netvars.h"
#include "SDK/WeaponIcon.h"
#include "SDK/GameData.h"
#include "SDK/Enum/FrameStage.h"
#include "SDK/Class/Client.h"
#include "SDK/Class/ClientMode.h"
#include "SDK/Class/Engine.h"
#include "SDK/Class/GlobalVars.h"
#include "SDK/Class/InputSystem.h"
#include "SDK/Class/Surface.h"
#include "SDK/Class/UserCmd.h"
#include "Hacks/EnginePrediction.h"
#include "Hacks/Misc.h"
#include "Hacks/Visuals.h"

using Orion::findPattern;
using Orion::relativeToAbsolute;

namespace
{
	template <stb::compiletime_string_wrapper moduleName, stb::compiletime_string_wrapper interfaceName, typename InterfaceType>
	constexpr auto getInterface(InterfaceType&& value) noexcept
	{
		Orion::String<moduleName> m_name;
		Orion::String<interfaceName> i_name;

		if (const auto moduleHandle = LI_FN(GetModuleHandleA)(m_name.get())) {
			Orion::String<"CreateInterface"> p_name;
			using ReturnType = std::remove_reference<InterfaceType>::type;
			if (const auto createInterface = reinterpret_cast<std::add_pointer_t<ReturnType __cdecl(const char* name, int* code)>>(LI_FN(GetProcAddress)(moduleHandle, p_name.get()))) {
				if (const auto result = createInterface(i_name.get(), nullptr)) {
					value = result;
					return;
				}
			}
		}

		value = nullptr;

		Orion::String<"Failed to find interface "> begin;
		Orion::String<"!"> end;

		LI_FN(MessageBoxA)(nullptr, std::string{ std::string{ begin.get() } + i_name.get() + end.get() }.c_str(), m_name.get(), MB_OK | MB_ICONERROR);
	}

	template <stb::compiletime_string_wrapper moduleName, stb::compiletime_string_wrapper interfaceName, typename InterfaceType>
	constexpr auto getExport(InterfaceType&& value) noexcept
	{
		Orion::String<moduleName> m_name;
		Orion::String<interfaceName> i_name;

		if (const auto moduleHandle = LI_FN(GetModuleHandleA)(m_name.get())) {
			using ReturnType = std::remove_reference<InterfaceType>::type;
			value = *reinterpret_cast<ReturnType*>(LI_FN(GetProcAddress)(moduleHandle, i_name.get()));
			if (value)
				return;
		}

		Orion::String<"Failed to find interface "> begin;
		Orion::String<"!"> end;

		LI_FN(MessageBoxA)(nullptr, std::string{ std::string{ begin.get() } + i_name.get() + end.get() }.c_str(), m_name.get(), MB_OK | MB_ICONERROR);
	}

	auto __stdcall frameStageNotify(FrameStage stage) noexcept
	{
		if (localPlayer) {
			static const auto once = []() noexcept {
				Datamaps::install();
				return false;
			}();
		}

		switch (stage) {

		case FrameStage::START:
		{
			GameData::update();
		}
		break;

		}

		game->hooks.client.call<Client::__vftable::FrameStageNotify, void, Hooks::Function::THISCALL>(stage);
	}

	auto __stdcall createMove(float inputSampleTime, UserCmd* cmd) noexcept
	{
		const auto result = game->hooks.clientMode.call<ClientMode::__vftable::CreateMove, bool, Hooks::Function::THISCALL>(inputSampleTime, cmd);

		if (!cmd->commandNumber)
			return result;

		static auto previousViewAngles = cmd->viewangles;
		const auto currentViewAngles = cmd->viewangles;

		game->memory.globalVars->serverTime(*cmd);
		Misc::bunnyHop(*cmd);

		EnginePrediction::run(*cmd);

		auto viewAnglesDelta = cmd->viewangles - previousViewAngles;
		viewAnglesDelta.normalize();

		cmd->viewangles = previousViewAngles + viewAnglesDelta;
		cmd->viewangles.normalize();

		Misc::fixMovement(*cmd, currentViewAngles.y);

		cmd->viewangles.x = std::clamp(cmd->viewangles.x, -89.f, 89.f);
		cmd->viewangles.y = std::clamp(cmd->viewangles.y, -180.f, 180.f);
		cmd->viewangles.z = 0;
		cmd->forwardmove = std::clamp(cmd->forwardmove, -450.f, 450.f);
		cmd->sidemove = std::clamp(cmd->sidemove, -450.f, 450.f);

		previousViewAngles = cmd->viewangles;

		return false;
	}

	auto __stdcall getScreenAspectRatio(int width, int height) noexcept
	{
		if (Misc::aspectRatio() != 0.f)
			return Misc::aspectRatio();
		return game->hooks.engine.call<Engine::__vftable::GetScreenAspectRatio, float, Hooks::Function::THISCALL>(width, height);
	}

	auto __stdcall lockCursor() noexcept
	{
		if (gui->isOpen())
			return game->interfaces.surface->unlockCursor();
		return game->hooks.surface.call<Surface::__vftable::LockCursor, void, Hooks::Function::THISCALL>();
	}
}

Game::Game() noexcept
{
	getInterface<"filesystem_stdio", "VBaseFileSystem011">(interfaces.baseFileSystem);
	getInterface<"client", "VClient018">(interfaces.client);
	getInterface<"vstdlib", "VEngineCvar007">(interfaces.cvar);
	getInterface<"engine", "VEngineClient014">(interfaces.engine);
	getInterface<"engine", "IEngineSoundClient003">(interfaces.engineSound);
	getInterface<"engine", "EngineTraceClient004">(interfaces.engineTrace);
	getInterface<"client", "VClientEntityList003">(interfaces.entityList);
	getInterface<"engine", "GAMEEVENTSMANAGER002">(interfaces.gameEventManager);
	getInterface<"client", "GameMovement001">(interfaces.gameMovement);
	getInterface<"client", "GameUI011">(interfaces.gameUI);
	getInterface<"inputsystem", "InputSystemVersion001">(interfaces.inputSystem);
	getInterface<"localize", "Localize_001">(interfaces.localize);
	getInterface<"materialsystem", "VMaterialSystem080">(interfaces.materialSystem);
	getInterface<"engine", "VModelInfoClient004">(interfaces.modelInfo);
	getInterface<"engine", "VEngineModel016">(interfaces.modelRender);
	getInterface<"engine", "VEngineClientStringTable001">(interfaces.networkStringTableContainer);
	getInterface<"panorama", "PanoramaUIEngine001">(interfaces.panoramaUIEngine);
	getInterface<"vphysics", "VPhysicsSurfaceProps001">(interfaces.physicsSurfaceProps);
	getInterface<"client", "VClientPrediction001">(interfaces.prediction);
	getInterface<"engine", "VEngineRenderView014">(interfaces.renderView);
	getInterface<"soundemittersystem", "VSoundEmitter003">(interfaces.soundEmitter);
	getInterface<"studiorender", "VStudioRender026">(interfaces.studioRender);
	getInterface<"vguimatsurface", "VGUI_Surface031">(interfaces.surface);

	getExport<"tier0", "g_pMemAlloc">(interfaces.memAlloc);

	memory.clientMode = **reinterpret_cast<decltype(memory.clientMode)**>((*reinterpret_cast<std::uintptr_t**>(interfaces.client))[10] + 5);
	memory.globalVars = **reinterpret_cast<decltype(memory.globalVars)**>((*reinterpret_cast<std::uintptr_t**>(interfaces.client))[11] + 10);

	memory.moveData = **reinterpret_cast<decltype(memory.moveData)**>(findPattern<std::uintptr_t, "client", "moveData", "A1 ? ? ? ? F3 0F 59 CD">() + 1);
	memory.moveHelper = **reinterpret_cast<decltype(memory.moveHelper)**>(findPattern<std::uintptr_t, "client", "moveHelper", "8B 0D ? ? ? ? 8B 45 ? 51 8B D4 89 02 8B 01">() + 2);
	memory.predictionRandomSeed = *reinterpret_cast<decltype(memory.predictionRandomSeed)*>(findPattern<std::uintptr_t, "client", "predictionRandomSeed", "8B 0D ? ? ? ? BA ? ? ? ? E8 ? ? ? ? 83 C4 04">() + 2);

	memory.getImageDataRGBASVG = findPattern<decltype(memory.getImageDataRGBASVG), "panorama", "getImageDataRGBASVG", "55 8B EC 81 EC ? ? ? ? 53 8B 5D 0C">();
	memory.constructImage = findPattern<decltype(memory.constructImage), "panorama", "constructImage", "E8 ? ? ? ? 83 7D 20">();
	memory.constructImageInit = relativeToAbsolute<decltype(memory.constructImageInit)>(memory.constructImage + 1);

	memory.isOtherEnemy = relativeToAbsolute<decltype(memory.isOtherEnemy)>(findPattern<std::uintptr_t, "client", "isOtherEnemy", "8B CE E8 ? ? ? ? 02 C0">() + 3);

	memory.playerResource = *reinterpret_cast<decltype(memory.playerResource)*>(findPattern<std::uintptr_t, "client", "playerResource", "74 30 8B 35 ? ? ? ? 85 F6">() + 4);
	memory.getDecoratedPlayerName = relativeToAbsolute<decltype(memory.getDecoratedPlayerName)>(findPattern<std::uintptr_t, "client", "getDecoratedPlayerName", "E8 ? ? ? ? 66 83 3E">() + 1);

	memory.offsets.playerBoneCache = *reinterpret_cast<decltype(memory.offsets.playerBoneCache)*>(findPattern<std::uintptr_t, "client", "offsets.playerBoneCache", "8B BF ? ? ? ? 8D">() + 2);

	localPlayer = findPattern<std::uintptr_t, "client", "localPlayer", "A1 ? ? ? ? 89 45 BC 85 C0">() + 1;

	console->log<"[Interfaces]">();
	console->log<"Surface: %p">(interfaces.baseFileSystem);
	console->log<"Client: %p">(interfaces.client);
	console->log<"Cvar: %p">(interfaces.cvar);
	console->log<"Engine: %p">(interfaces.engine);
	console->log<"EngineSound: %p">(interfaces.engineSound);
	console->log<"EngineTrace: %p">(interfaces.engineTrace);
	console->log<"EntityList: %p">(interfaces.entityList);
	console->log<"GameEventManager: %p">(interfaces.gameEventManager);
	console->log<"GameMovement: %p">(interfaces.gameMovement);
	console->log<"GameUI: %p">(interfaces.gameUI);
	console->log<"InputSystem: %p">(interfaces.inputSystem);
	console->log<"Localize: %p">(interfaces.localize);
	console->log<"MaterialSystem: %p">(interfaces.materialSystem);
	console->log<"ModelInfo: %p">(interfaces.modelInfo);
	console->log<"ModelRender: %p">(interfaces.modelRender);
	console->log<"NetworkStringTableContainer: %p">(interfaces.networkStringTableContainer);
	console->log<"PanoramaUIEngine: %p">(interfaces.panoramaUIEngine);
	console->log<"PhysicsSurfaceProps: %p">(interfaces.physicsSurfaceProps);
	console->log<"Prediction: %p">(interfaces.prediction);
	console->log<"RenderView: %p">(interfaces.renderView);
	console->log<"SoundEmitter: %p">(interfaces.soundEmitter);
	console->log<"StudioRender: %p">(interfaces.studioRender);
	console->log<"Surface: %p">(interfaces.surface);
}

Game::~Game() noexcept
{
	interfaces.inputSystem->enableInput(true);
}

auto Game::hook() noexcept -> void
{
	Netvars::install();

	hooks.client.init(interfaces.client);
	hooks.client.hookAt(Client::__vftable::FrameStageNotify, &frameStageNotify);

	hooks.clientMode.init(memory.clientMode);
	hooks.clientMode.hookAt(ClientMode::__vftable::CreateMove, &createMove);

	hooks.engine.init(interfaces.engine);
	hooks.engine.hookAt(Engine::__vftable::GetScreenAspectRatio, &getScreenAspectRatio);

	hooks.surface.init(interfaces.surface);
	hooks.surface.hookAt(Surface::__vftable::LockCursor, &lockCursor);
}

auto Game::unhook() noexcept -> void
{
	hooks.client.restore();
	hooks.clientMode.restore();
	hooks.engine.restore();
	hooks.surface.restore();

	WeaponIcon::uninstall();
	Netvars::uninstall();
	Datamaps::uninstall();
}

auto Game::draw() noexcept -> void
{
	static const auto once = []() noexcept {
		WeaponIcon::install();
		return false;
	}();

	Visuals::draw();
}

auto Game::invalidate() noexcept -> void
{
	WeaponIcon::invalidate();
}