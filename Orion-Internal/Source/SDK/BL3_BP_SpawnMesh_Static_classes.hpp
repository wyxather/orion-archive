#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SpawnMesh_Static_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnMesh_Static.BP_SpawnMesh_Static_C
// 0x0008 (0x04F0 - 0x04E8)
class ABP_SpawnMesh_Static_C : public ABP_SpawnMesh_C
{
public:
	class UStaticMeshComponent*                        SpawnMesh;                                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnMesh_Static.BP_SpawnMesh_Static_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
