#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_PunkMale_DoorCargoNoMesh_Passive1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ASpawn_PunkMale_DoorCargoNoMesh_Passive1.ASpawn_PunkMale_DoorCargoNoMesh_Passive1_C
// 0x0000 (0x01C0 - 0x01C0)
class UASpawn_PunkMale_DoorCargoNoMesh_Passive1_C : public UGbxAction_SpawnAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ASpawn_PunkMale_DoorCargoNoMesh_Passive1.ASpawn_PunkMale_DoorCargoNoMesh_Passive1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
