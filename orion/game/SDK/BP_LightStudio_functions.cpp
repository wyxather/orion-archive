#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_LightStudio.BP_LightStudio_C
// (Actor)

class UClass* ABP_LightStudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LightStudio_C");

	return Clss;
}


// BP_LightStudio_C BP_LightStudio.Default__BP_LightStudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LightStudio_C* ABP_LightStudio_C::GetDefaultObj()
{
	static class ABP_LightStudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LightStudio_C*>(ABP_LightStudio_C::StaticClass()->DefaultObject);

	return Default;
}

}


