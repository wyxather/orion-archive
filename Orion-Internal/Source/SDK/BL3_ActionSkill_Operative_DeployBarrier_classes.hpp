#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_DeployBarrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C
// 0x0028 (0x02A0 - 0x0278)
class UActionSkill_Operative_DeployBarrier_C : public UOakActionAbility_Barrier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)
	bool                                               FailedToSpawnBarrier;                                     // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BestLaidPlans;                                            // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0282(0x0006) MISSED OFFSET
	struct FDataTableValueHandle                       BestLaidPlains;                                           // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C");
		return ptr;
	}


	void IsHoldingBarrier(bool* res);
	void RefillBarrierHealth(bool* res);
	void GiveBarrierHealth(float Health, float* New_Health);
	void GetBarrierReference(class AActor** Barrier);
	void GetBarrierHealthPercent(float* HealthPercent);
	bool ShouldStopAbilityOnPawnSlotComponentAttach();
	class AOperativeBarrier* SpawnNewBarrier(struct FTransform* Transform);
	float GetCooldownRestartPercent();
	void StartHoldingBarrier(class AActor* Player);
	void ActivateHighlyUnstable();
	void ActivateHighlyUnstableFromCarry();
	void OnStartActionAbility();
	void DeployNewBarrierInHand(class AActor* Player);
	void TryDropPickup();
	void DeployNewBarrierAroundPlayer();
	void OnStopActionAbility();
	void ExecuteUbergraph_ActionSkill_Operative_DeployBarrier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
