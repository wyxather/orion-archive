#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond10_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C
// 0x00B8 (0x0268 - 0x01B0)
class UPassive_Beastmaster_Bond10_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_HitAndRun9;// 0x01B8(0x0028)
	class AActor*                                      DominateTarget;                                           // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       BeastTag;                                                 // 0x01E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       UnDesiredTags;                                            // 0x0208(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              DominateTargets;                                          // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FStatusEffectInstanceReference              StatusEffect_HealthDegen;                                 // 0x0238(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      ActorToDominate;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                DominateDuration;                                         // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	class UGbxAction*                                  CoordinatedEffect_Dominate;                               // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Bond10.Passive_Beastmaster_Bond10_C");
		return ptr;
	}


	void OnRep_DominateTarget();
	void DetermineTargetClassification(int* FinalDurationScalar);
	void RemoveDominateTargetFromList(class AActor* NewTarget);
	bool TryApplyDominate(class UDamageSource* DamageSource, class UObject* Instigator, class AActor* Target, class AActor** ActorToDominate);
	void AddDominateTargetToList(class AActor* NewTarget);
	void HandleDominateTimerFinished(class UObject* InSpecTimer, EOakAbilityTimerResult InResult);
	void DoHealthPercentDamage();
	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec* Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void OnDeath_DominateTarget_HitRun9(class AActor* DamageReceiver, class AActor* DamageCauser);
	void EndDomination();
	void OnCausedDamage_HitAndRun9(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void DoDominateExplosion();
	void OnActivated();
	void ExecuteUbergraph_Passive_Beastmaster_Bond10(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
