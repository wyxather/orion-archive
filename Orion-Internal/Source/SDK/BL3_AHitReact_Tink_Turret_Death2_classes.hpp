#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Tink_Turret_Death2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C
// 0x0018 (0x0230 - 0x0218)
class UAHitReact_Tink_Turret_Death2_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   TurretMesh;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Tink_Turret_Death2.AHitReact_Tink_Turret_Death2_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExplodeTurret();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_AHitReact_Tink_Turret_Death2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
