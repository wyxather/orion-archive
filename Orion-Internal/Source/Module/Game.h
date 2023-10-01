#pragma once

#include "Hooks.h"

class BaseFileSystem;
class Client;
class ClientMode;
class Cvar;
class Engine;
class EngineSound;
class EngineTrace;
class Entity;
class EntityList;
class GameEventManager;
class GameMovement;
class GameUI;
class GlobalVars;
class InputSystem;
class Localize;
class MaterialSystem;
class MemAlloc;
class ModelInfo;
class ModelRender;
class MoveData;
class MoveHelper;
class NetworkStringTableContainer;
class PanoramaUIEngine;
class PhysicsSurfaceProps;
class PlayerResource;
class Prediction;
class RenderView;
class SoundEmitter;
class StudioRender;
class Surface;

class Game
{
public:
	explicit Game() noexcept;
	~Game() noexcept;

	auto hook() noexcept -> void;
	auto unhook() noexcept -> void;

	auto draw() noexcept -> void;
	auto invalidate() noexcept -> void;

	struct
	{
		BaseFileSystem* baseFileSystem;
		Client* client;
		Cvar* cvar;
		Engine* engine;
		EngineSound* engineSound;
		EngineTrace* engineTrace;
		EntityList* entityList;
		GameEventManager* gameEventManager;
		GameMovement* gameMovement;
		GameUI* gameUI;
		InputSystem* inputSystem;
		Localize* localize;
		MaterialSystem* materialSystem;
		MemAlloc* memAlloc;
		ModelInfo* modelInfo;
		ModelRender* modelRender;
		NetworkStringTableContainer* networkStringTableContainer;
		PanoramaUIEngine* panoramaUIEngine;
		PhysicsSurfaceProps* physicsSurfaceProps;
		Prediction* prediction;
		RenderView* renderView;
		SoundEmitter* soundEmitter;
		StudioRender* studioRender;
		Surface* surface;

	} interfaces;

	struct
	{
		ClientMode* clientMode;
		GlobalVars* globalVars;

		MoveData* moveData;
		MoveHelper* moveHelper;
		std::int32_t* predictionRandomSeed;

		std::uintptr_t getImageDataRGBASVG;
		std::uintptr_t constructImage;
		void(__thiscall* constructImageInit)(void*, std::size_t);

		bool(__thiscall* isOtherEnemy)(const Entity*, const Entity*);

		PlayerResource** playerResource;
		const wchar_t* (__thiscall* getDecoratedPlayerName)(PlayerResource* pr, int index, wchar_t* buffer, int buffsize, int flags);

		struct
		{
			std::uintptr_t playerBoneCache;

		} offsets;

	} memory;

	struct
	{
		HookType client;
		HookType clientMode;
		HookType engine;
		HookType surface;

	} hooks;

};

inline std::optional<Game> game;