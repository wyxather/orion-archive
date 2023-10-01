#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_ShieldOfThought_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C
// 0x0158 (0x0308 - 0x01B0)
class UPassiveSkill_Siren_ShieldOfThought_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       Ricochet_Chance;                                          // 0x01B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       Action_Skill_Ricochet_Chance;                             // 0x01D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEnvQueryParams                             FindRicochetTarget;                                       // 0x01E8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              Targets;                                                  // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FDataTableValueHandle                       Ricochet_Damage;                                          // 0x02B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       Action_Skill_Ricochet_damage;                             // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Deflection;// 0x02E0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_ShieldOfThought.PassiveSkill_Siren_ShieldOfThought_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void IsAffectedByActionSkill(class AActor* Actor, bool* res);
	void OnActivated();
	void SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_PassiveSkill_Siren_ShieldOfThought(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
