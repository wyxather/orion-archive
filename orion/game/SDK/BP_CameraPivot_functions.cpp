#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_CameraPivot.BP_CameraPivot_C
// (Actor)

class UClass* ABP_CameraPivot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraPivot_C");

	return Clss;
}


// BP_CameraPivot_C BP_CameraPivot.Default__BP_CameraPivot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CameraPivot_C* ABP_CameraPivot_C::GetDefaultObj()
{
	static class ABP_CameraPivot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CameraPivot_C*>(ABP_CameraPivot_C::StaticClass()->DefaultObject);

	return Default;
}

}


