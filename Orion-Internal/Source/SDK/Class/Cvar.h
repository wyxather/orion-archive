#pragma once

#include "Class.h"

class Color;
class ConVar;

class Cvar // CCvar : CBaseAppSystem<ICvar>, ICvar, IAppSystem;
{
public:
	INCONSTRUCTIBLE(Cvar);

	enum __vftable
	{
		// class IAppSystem
		Connect,
		Disconnect,
		QueryInterface,
		Init,
		Shutdown,
		GetDependencies,
		GetTier,
		Reconnect,
		IsSingleton,

		// class ICvar
		AllocateDLLIdentifier,
		RegisterConCommand,
		UnregisterConCommand,
		UnregisterConCommands,
		GetCommandLineValue,
		FindCommandBase,
		FindCommandBase2,
		FindVar,
		FindVar2,
		FindCommand,
		FindCommand2,
		InstallGlobalChangeCallback,
		RemoveGlobalChangeCallback,
		CallGlobalChangeCallbacks,
		InstallConsoleDisplayFunc,
		RemoveConsoleDisplayFunc,
		ConsoleColorPrintf,
		ConsolePrintf,
		ConsoleDPrintf,
		RevertFlaggedConVars,
		InstallCVarQuery,
		PublishToVXConsole,
		SetMaxSplitScreenSlots,
		GetMaxSplitScreenSlots,
		AddSplitScreenConVars,
		RemoveSplitScreenConVars,
		GetConsoleDisplayFuncCount,
		GetConsoleText,
		IsMaterialThreadSetAllowed,
		QueueMaterialThreadSetValue,
		QueueMaterialThreadSetValue2,
		QueueMaterialThreadSetValue3,
		HasQueuedMaterialThreadConVarSets,
		ProcessQueuedMaterialThreadConVarSets,
		__vftable
	};

	VIRTUAL_METHOD(__vftable::FindVar, findVar, __stdcall, ConVar*, (const char* name), (this, name));
	VIRTUAL_METHOD(__vftable::ConsoleColorPrintf, consoleColorPrintf, __stdcall, template<typename ...Args>, void, (const Color& color, const char* format, Args... args), (this, std::cref(color), format, args...));
};