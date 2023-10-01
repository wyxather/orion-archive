#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Tink_Turret_Death1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Tink_Turret_Death1.AHitReact_Tink_Turret_Death1_C
// 0x0018 (0x0230 - 0x0218)
class UAHitReact_Tink_Turret_Death1_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   TurretMesh;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      MySelf;                                                   // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Tink_Turret_Death1.AHitReact_Tink_Turret_Death1_C");
		return ptr;
	}


	void DeathExplosion1();
	void DeathExplosion2();
	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_AHitReact_Tink_Turret_Death1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
