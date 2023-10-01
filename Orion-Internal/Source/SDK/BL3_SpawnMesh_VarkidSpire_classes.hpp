#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_VarkidSpire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnMesh_VarkidSpire.SpawnMesh_VarkidSpire_C
// 0x0003 (0x04F3 - 0x04F0)
class ASpawnMesh_VarkidSpire_C : public ABP_SpawnMesh_Static_C
{
public:
	TEnumAsByte<Enum_VarkidSpire>                      VarkidSpire_Style;                                        // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ThisBoolPreventsTheUselessPropertyFromBeingEdited;        // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_VarkidSpire>                      ThisPropertyHasToExist;                                   // 0x04F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnMesh_VarkidSpire.SpawnMesh_VarkidSpire_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
