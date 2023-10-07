#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_EnvFxMaster.BP_EnvFxMaster_C
// (Actor)

class UClass* ABP_EnvFxMaster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnvFxMaster_C");

	return Clss;
}


// BP_EnvFxMaster_C BP_EnvFxMaster.Default__BP_EnvFxMaster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnvFxMaster_C* ABP_EnvFxMaster_C::GetDefaultObj()
{
	static class ABP_EnvFxMaster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnvFxMaster_C*>(ABP_EnvFxMaster_C::StaticClass()->DefaultObject);

	return Default;
}

}


