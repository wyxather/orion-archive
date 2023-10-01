#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Beastmaster_ClassMod_Raid1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C
// 0x0120 (0x0218 - 0x00F8)
class UOakAbility_Beastmaster_ClassMod_Raid1_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Beastmaster_ClassMod_Raid1;// 0x0100(0x0028)
	struct FEnvQueryParams                             FindTargets;                                              // 0x0128(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       CooldownTime;                                             // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                          SpawnTransforms;                                          // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UOakActionAbility_RakkAttack*                RakkAttackActionSkill;                                    // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Beastmaster_ClassMod_Raid1.OakAbility_Beastmaster_ClassMod_Raid1_C");
		return ptr;
	}


	void FireRakk(class AActor* SourceActor, class AActor* TargetActor, const struct FTransform& Transform);
	void OnActivated();
	void BeastmasterClassModRaid1_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void BreakLoop();
	void ResetGate();
	void OnResumed();
	void ClassMod_Raid1_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec* Spec, struct FOakAbilityTimerResult* Result);
	void ExecuteUbergraph_OakAbility_Beastmaster_ClassMod_Raid1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
