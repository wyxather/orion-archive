#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_AnointParent.Ability_AnointParent_C
// 0x00C9 (0x01C1 - 0x00F8)
class UAbility_AnointParent_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class UOakPlayerAbilityManagerComponent*           OakPlayerAbilityManager;                                  // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UOakPlayerAbilityEventHub*                   PlayerAbilityEventHub;                                    // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent;// 0x0110(0x0028)
	class UStatusEffectData*                           AnointmentEffect;                                         // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAttributeInitializationData                AnointmentDuration;                                       // 0x0140(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AnointBeastmaster;                                        // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointGunner;                                             // 0x0179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointOperative;                                          // 0x017A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointSiren;                                              // 0x017B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointBeastmasterHulkOutSuccessful;                       // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointOnSkillUse;                                         // 0x017D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointOnSkillEnded;                                       // 0x017E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointOnSkillReadied;                                     // 0x017F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_AnointParent;// 0x0180(0x0028)
	class UConditionalDamageModifier*                  AnointConditionalDamageMod;                               // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnointCDMOakDamageCauser;                                 // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowFakeGrasp;                                           // 0x01B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01B2(0x0006) MISSED OFFSET
	struct FTimerHandle                                RemoveAnointEffectTimer;                                  // 0x01B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PhasegrapsSuccess;                                        // 0x01C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent.Ability_AnointParent_C");
		return ptr;
	}


	void AnointRemoveCDM();
	void AnointRegisterCDM(bool Register, bool* res);
	void AnointRemoveEffect();
	void AnointTriggerEffect(bool TriggerEffect, bool* res);
	void AnointOnActionSkillReadied(class UOakActionAbility* ActionAbility, bool* res);
	void AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res);
	void AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res);
	void AnointParent_OnPlayerAbilitySlotChanged(class UOakPlayerAbilitySlotData* SlotData);
	void AnointParent_SetBinds();
	void AnointParent_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility);
	void AnointParent_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void AnointParent_OnActionSkillReadied(class UOakActionAbility* ActionAbility);
	void AnointParent_BeastmasterActionSkillActivated(TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill);
	void AnointParent_OperativeActionSkillActivated(TEnumAsByte<EOperativeGadgets> ActionSkill);
	void AnointParent_SirenPhaseGraspedEnemy(class AActor* Enemy, EPhaseTranceElementalType Element);
	void AnointParent_PhaseGraspEnded(bool Killed);
	void AnointParent_HulkedOutStarted(bool res);
	void AnointParent_HulkedOutEnded();
	void OnDeactivated();
	void OnActivated();
	void BindBeastmasterEvents();
	void BindOperativeEvents();
	void BindSirenEvents();
	void BindGunnerEvents();
	void ExecuteUbergraph_Ability_AnointParent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
