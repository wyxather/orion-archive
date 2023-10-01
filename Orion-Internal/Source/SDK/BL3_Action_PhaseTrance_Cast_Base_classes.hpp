#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Cast_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C
// 0x0037 (0x02F0 - 0x02B9)
class UAction_PhaseTrance_Cast_Base_C : public UAction_Phasetrance_Common_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      BodyMesh;                                                 // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   HeadMesh;                                                 // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      GhostArms;                                                // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      PhaseCastProjectileClass;                                 // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C");
		return ptr;
	}


	void CacheSummonMeshes();
	void FirePhaseCastProjectile();
	void ResetCastMesh();
	void StartCastSummonAnimation();
	void AN_PerformCastFeedback();
	void AN_CreateCastProjectile();
	void OnBegin(class AActor** Actor);
	void TriggerActionSkillReactDialogue();
	void TriggerActionSkillUseDialogue();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void AN_PerformCastCS_Part1();
	void AN_PerformCastCS_Part2();
	void PlayPhaseTranceHandEffects();
	void ExecuteUbergraph_Action_PhaseTrance_Cast_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
