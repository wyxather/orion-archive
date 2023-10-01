#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_SkagDen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnMesh_SkagDen.SpawnMesh_SkagDen_C
// 0x0000 (0x04F0 - 0x04F0)
class ASpawnMesh_SkagDen_C : public ABP_SpawnMesh_Static_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnMesh_SkagDen.SpawnMesh_SkagDen_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
