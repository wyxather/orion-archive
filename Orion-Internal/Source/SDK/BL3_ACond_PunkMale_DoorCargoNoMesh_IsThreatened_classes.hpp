#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACond_PunkMale_DoorCargoNoMesh_IsThreatened_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ACond_PunkMale_DoorCargoNoMesh_IsThreatened.ACond_PunkMale_DoorCargoNoMesh_IsThreatened_C
// 0x0000 (0x0078 - 0x0078)
class UACond_PunkMale_DoorCargoNoMesh_IsThreatened_C : public UGbxAction_ConditionContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ACond_PunkMale_DoorCargoNoMesh_IsThreatened.ACond_PunkMale_DoorCargoNoMesh_IsThreatened_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
