#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Wildfire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C
// 0x0150 (0x0300 - 0x01B0)
class UPassiveSkill_Siren_Wildfire_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       SpreadChance;                                             // 0x01B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       SpreadChancePerStack;                                     // 0x01D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEnvQueryParams                             FindSpreadTarget;                                         // 0x01E8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      Target;                                                   // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PreviousTarget;                                           // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              TargetList;                                               // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      BeamData;                                                 // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StatusEffectDuration;                                     // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StatusEffectDamagePerSecond;                              // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Wildfire;// 0x02D8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C");
		return ptr;
	}


	void OnActivated();
	void WildfireOnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec);
	void WildfireOnCausedMaxResource(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType);
	void OpenWildfireGates();
	void CloseWildfireGates();
	void ExecuteUbergraph_PassiveSkill_Siren_Wildfire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
