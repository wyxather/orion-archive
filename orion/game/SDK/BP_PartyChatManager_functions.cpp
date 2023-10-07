#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_PartyChatManager.BP_PartyChatManager_C
// (Actor)

class UClass* ABP_PartyChatManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PartyChatManager_C");

	return Clss;
}


// BP_PartyChatManager_C BP_PartyChatManager.Default__BP_PartyChatManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PartyChatManager_C* ABP_PartyChatManager_C::GetDefaultObj()
{
	static class ABP_PartyChatManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PartyChatManager_C*>(ABP_PartyChatManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


