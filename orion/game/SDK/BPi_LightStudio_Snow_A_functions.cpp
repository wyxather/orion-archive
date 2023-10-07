#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_LightStudio_Snow_A.BPi_LightStudio_Snow_A_C
// (Actor)

class UClass* ABPi_LightStudio_Snow_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_LightStudio_Snow_A_C");

	return Clss;
}


// BPi_LightStudio_Snow_A_C BPi_LightStudio_Snow_A.Default__BPi_LightStudio_Snow_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_LightStudio_Snow_A_C* ABPi_LightStudio_Snow_A_C::GetDefaultObj()
{
	static class ABPi_LightStudio_Snow_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_LightStudio_Snow_A_C*>(ABPi_LightStudio_Snow_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


