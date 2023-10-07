#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_Flipbook_Grass_B_MA_Snow.BPi_Flipbook_Grass_B_MA_Snow_C
// (Actor)

class UClass* ABPi_Flipbook_Grass_B_MA_Snow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_Flipbook_Grass_B_MA_Snow_C");

	return Clss;
}


// BPi_Flipbook_Grass_B_MA_Snow_C BPi_Flipbook_Grass_B_MA_Snow.Default__BPi_Flipbook_Grass_B_MA_Snow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_Flipbook_Grass_B_MA_Snow_C* ABPi_Flipbook_Grass_B_MA_Snow_C::GetDefaultObj()
{
	static class ABPi_Flipbook_Grass_B_MA_Snow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_Flipbook_Grass_B_MA_Snow_C*>(ABPi_Flipbook_Grass_B_MA_Snow_C::StaticClass()->DefaultObject);

	return Default;
}

}


