#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SpawnMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnMesh.BP_SpawnMesh_C
// 0x0018 (0x04E8 - 0x04D0)
class ABP_SpawnMesh_C : public AOakActionSpawnPoint_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BlackFogPlane;                                            // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Use_BlackFog_Plane;                                       // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	float                                              BlackFogDepth;                                            // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnMesh.BP_SpawnMesh_C");
		return ptr;
	}


	void UserConstructionScript();
	void SpawnMesh_TriggerDestruction();
	void ExecuteUbergraph_BP_SpawnMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
