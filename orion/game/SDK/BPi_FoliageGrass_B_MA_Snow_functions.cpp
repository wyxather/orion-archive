#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BPi_FoliageGrass_B_MA_Snow.BPi_FoliageGrass_B_MA_Snow_C
// (Actor)

class UClass* ABPi_FoliageGrass_B_MA_Snow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_FoliageGrass_B_MA_Snow_C");

	return Clss;
}


// BPi_FoliageGrass_B_MA_Snow_C BPi_FoliageGrass_B_MA_Snow.Default__BPi_FoliageGrass_B_MA_Snow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPi_FoliageGrass_B_MA_Snow_C* ABPi_FoliageGrass_B_MA_Snow_C::GetDefaultObj()
{
	static class ABPi_FoliageGrass_B_MA_Snow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPi_FoliageGrass_B_MA_Snow_C*>(ABPi_FoliageGrass_B_MA_Snow_C::StaticClass()->DefaultObject);

	return Default;
}

}


