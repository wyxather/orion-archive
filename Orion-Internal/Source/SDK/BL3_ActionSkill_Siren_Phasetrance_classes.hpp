#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Siren_Phasetrance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C
// 0x0110 (0x0418 - 0x0308)
class UActionSkill_Siren_Phasetrance_C : public UOakActionAbility_PhaseTrance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0008) (Transient, DuplicateTransient)
	bool                                               Web_Missed;                                               // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	struct FEnvQueryParams                             SpreadGraspEQS;                                           // 0x0318(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_ActionSkill_Siren_Phasetrance;// 0x03D0(0x0028)
	int                                                GraspKillCount;                                           // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                EssenceProjectilesRemaining;                              // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AProj_Siren_DLCSkill_WalkingPotato_Base_C*   DLCSkillOrb;                                              // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Phasetrance_RecallOrb;                                    // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Siren_Phasetrance.ActionSkill_Siren_Phasetrance_C");
		return ptr;
	}


	void GetDLCSkillOrb(class AProj_Siren_DLCSkill_WalkingPotato_Base_C** res);
	void RegisterDLCSkillOrb(class AProj_Siren_DLCSkill_WalkingPotato_Base_C* Orb, bool* res);
	void DoEffect_Quicken(const struct FOakPhaseTranceEffectSpec& Spec, bool* res);
	EGbxAbilityState CalculateAbilityState();
	void GetSingularityRadius(const struct FPhaseTranceActivationComboData& ComboData, float* res);
	void GetEssenceDurationAdjust(float* res);
	void TryFindNewEssenceGraspTarget(class AActor* LastGraspTarget);
	void OnWebGraspMissed();
	void OnKilledGraspedEnemy(class AActor* Killer, class AGbxCharacter* Target);
	void AdjustLeechDamage(float StartingDamage, float* FinalDamage);
	void FindLeechTarget(class AActor** res);
	void GetLeechTarget(class AActor** res);
	void DoEffect_SoulSap(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes);
	void DoEffect_Allure(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes);
	void DoEffect_StillnessOfMind(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes);
	void DoEffect_BrightStar(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes);
	void DoEffect_Glamour(const struct FOakPhaseTranceEffectSpec& Spec, bool* bRes);
	bool DoEffect(struct FOakPhaseTranceEffectSpec* Spec);
	void CreateAttackActionRegisters(TArray<struct FGbxActionRegister>* res);
	bool ShouldAbortActivation(unsigned char* OutAbortCode);
	class FString GetActionSkillWidgetKeyframe();
	void ResetCounters();
	bool GetMaxCooldownModifier(EGbxAttributeModifierType* ModifierType, float* Value);
	void FindSpreadTarget(class AActor** res);
	void StartAttack();
	float Calculate_Leech_Heal_Amount(float Damage, bool Don_t_Adjust);
	float GetCooldownRestartPercent();
	void OnStartActionAbility();
	void OnActivated();
	void RecallOrb();
	void ExecuteUbergraph_ActionSkill_Siren_Phasetrance(int EntryPoint);
	void Phasetrance_RecallOrb__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
