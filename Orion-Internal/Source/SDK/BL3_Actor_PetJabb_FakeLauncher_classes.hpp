#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Actor_PetJabb_FakeLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Actor_PetJabb_FakeLauncher.Actor_PetJabb_FakeLauncher_C
// 0x0018 (0x0470 - 0x0458)
class AActor_PetJabb_FakeLauncher_C : public AActor
{
public:
	class UGbxSkeletalMeshComponent*                   GbxSkeletalMesh;                                          // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     GameplayTasks;                                            // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         GbxAction;                                                // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Actor_PetJabb_FakeLauncher.Actor_PetJabb_FakeLauncher_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
