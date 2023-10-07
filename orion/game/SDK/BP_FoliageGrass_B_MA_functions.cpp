#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_FoliageGrass_B_MA.BP_FoliageGrass_B_MA_C
// (Actor)

class UClass* ABP_FoliageGrass_B_MA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FoliageGrass_B_MA_C");

	return Clss;
}


// BP_FoliageGrass_B_MA_C BP_FoliageGrass_B_MA.Default__BP_FoliageGrass_B_MA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FoliageGrass_B_MA_C* ABP_FoliageGrass_B_MA_C::GetDefaultObj()
{
	static class ABP_FoliageGrass_B_MA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FoliageGrass_B_MA_C*>(ABP_FoliageGrass_B_MA_C::StaticClass()->DefaultObject);

	return Default;
}

}


