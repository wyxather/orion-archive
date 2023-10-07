#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_InHouse_SpotLight_L.BP_InHouse_SpotLight_L_C
// (Actor)

class UClass* ABP_InHouse_SpotLight_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InHouse_SpotLight_L_C");

	return Clss;
}


// BP_InHouse_SpotLight_L_C BP_InHouse_SpotLight_L.Default__BP_InHouse_SpotLight_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_InHouse_SpotLight_L_C* ABP_InHouse_SpotLight_L_C::GetDefaultObj()
{
	static class ABP_InHouse_SpotLight_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_InHouse_SpotLight_L_C*>(ABP_InHouse_SpotLight_L_C::StaticClass()->DefaultObject);

	return Default;
}

}


