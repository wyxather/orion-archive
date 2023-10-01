#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Siren_DLCSkill_WalkingPotato_Attack_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C
// 0x00C9 (0x0A91 - 0x09C8)
class AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C : public AProj_Siren_DLCSkill_WalkingPotato_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	class UOakTriggerComponent*                        FFYLTrigger;                                              // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEnvQueryParams                             EQSFindPlayerTarget;                                      // 0x09D8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerTargetFound;                                        // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C");
		return ptr;
	}


	void DamageScalar(float* res);
	void GetOrbAreaDamageType(class UClass** res);
	void UserConstructionScript();
	void OnOrbStateSending();
	void BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
