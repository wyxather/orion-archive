#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Grasp_ConstantNova_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointTriggerEffect
struct UAbility_Siren_Grasp_ConstantNova_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.TriggerNova
struct UAbility_Siren_Grasp_ConstantNova_C_TriggerNova_Params
{
};

// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointRemoveEffect
struct UAbility_Siren_Grasp_ConstantNova_C_AnointRemoveEffect_Params
{
};

// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.StartTriggeringNovas
struct UAbility_Siren_Grasp_ConstantNova_C_StartTriggeringNovas_Params
{
};

// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointGraspEnded
struct UAbility_Siren_Grasp_ConstantNova_C_AnointGraspEnded_Params
{
	bool*                                              Killed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova
struct UAbility_Siren_Grasp_ConstantNova_C_ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
