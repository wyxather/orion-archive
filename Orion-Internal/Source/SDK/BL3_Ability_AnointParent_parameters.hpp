#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveCDM
struct UAbility_AnointParent_C_AnointRemoveCDM_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointRegisterCDM
struct UAbility_AnointParent_C_AnointRegisterCDM_Params
{
	bool                                               Register;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointRemoveEffect
struct UAbility_AnointParent_C_AnointRemoveEffect_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointTriggerEffect
struct UAbility_AnointParent_C_AnointTriggerEffect_Params
{
	bool                                               TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillReadied
struct UAbility_AnointParent_C_AnointOnActionSkillReadied_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillActivated
struct UAbility_AnointParent_C_AnointOnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointOnActionSkillCoolingDown
struct UAbility_AnointParent_C_AnointOnActionSkillCoolingDown_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnPlayerAbilitySlotChanged
struct UAbility_AnointParent_C_AnointParent_OnPlayerAbilitySlotChanged_Params
{
	class UOakPlayerAbilitySlotData*                   SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SetBinds
struct UAbility_AnointParent_C_AnointParent_SetBinds_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillCoolingDown
struct UAbility_AnointParent_C_AnointParent_OnActionSkillCoolingDown_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillActivated
struct UAbility_AnointParent_C_AnointParent_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OnActionSkillReadied
struct UAbility_AnointParent_C_AnointParent_OnActionSkillReadied_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_BeastmasterActionSkillActivated
struct UAbility_AnointParent_C_AnointParent_BeastmasterActionSkillActivated_Params
{
	TEnumAsByte<Enum_BeastmasterActionSkill>           ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_OperativeActionSkillActivated
struct UAbility_AnointParent_C_AnointParent_OperativeActionSkillActivated_Params
{
	TEnumAsByte<EOperativeGadgets>                     ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_SirenPhaseGraspedEnemy
struct UAbility_AnointParent_C_AnointParent_SirenPhaseGraspedEnemy_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPhaseTranceElementalType                          Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_PhaseGraspEnded
struct UAbility_AnointParent_C_AnointParent_PhaseGraspEnded_Params
{
	bool                                               Killed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutStarted
struct UAbility_AnointParent_C_AnointParent_HulkedOutStarted_Params
{
	bool                                               res;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_AnointParent.Ability_AnointParent_C.AnointParent_HulkedOutEnded
struct UAbility_AnointParent_C_AnointParent_HulkedOutEnded_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.OnDeactivated
struct UAbility_AnointParent_C_OnDeactivated_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.OnActivated
struct UAbility_AnointParent_C_OnActivated_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.BindBeastmasterEvents
struct UAbility_AnointParent_C_BindBeastmasterEvents_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.BindOperativeEvents
struct UAbility_AnointParent_C_BindOperativeEvents_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.BindSirenEvents
struct UAbility_AnointParent_C_BindSirenEvents_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.BindGunnerEvents
struct UAbility_AnointParent_C_BindGunnerEvents_Params
{
};

// Function Ability_AnointParent.Ability_AnointParent_C.ExecuteUbergraph_Ability_AnointParent
struct UAbility_AnointParent_C_ExecuteUbergraph_Ability_AnointParent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
