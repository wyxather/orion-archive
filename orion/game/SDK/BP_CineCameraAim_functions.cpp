#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_CineCameraAim.BP_CineCameraAim_C
// (Actor)

class UClass* ABP_CineCameraAim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CineCameraAim_C");

	return Clss;
}


// BP_CineCameraAim_C BP_CineCameraAim.Default__BP_CineCameraAim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CineCameraAim_C* ABP_CineCameraAim_C::GetDefaultObj()
{
	static class ABP_CineCameraAim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CineCameraAim_C*>(ABP_CineCameraAim_C::StaticClass()->DefaultObject);

	return Default;
}

}


