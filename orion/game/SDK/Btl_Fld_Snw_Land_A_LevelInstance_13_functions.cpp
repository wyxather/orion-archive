#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass Btl_Fld_Snw_Land_A_LevelInstance_13.Btl_Fld_Snw_Land_A_C
// (Actor)

class UClass* ABtl_Fld_Snw_Land_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Btl_Fld_Snw_Land_A_C");

	return Clss;
}


// Btl_Fld_Snw_Land_A_C Btl_Fld_Snw_Land_A_LevelInstance_13.Default__Btl_Fld_Snw_Land_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABtl_Fld_Snw_Land_A_C* ABtl_Fld_Snw_Land_A_C::GetDefaultObj()
{
	static class ABtl_Fld_Snw_Land_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABtl_Fld_Snw_Land_A_C*>(ABtl_Fld_Snw_Land_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


