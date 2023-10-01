#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora_GUN_L01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.CalculateAbilityState
struct UAbility_CM_Ixora_GUN_L01_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.OnActivated
struct UAbility_CM_Ixora_GUN_L01_C_OnActivated_Params
{
};

// Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.GunnerIxoraClassMod_OnCausedElementalEffect
struct UAbility_CM_Ixora_GUN_L01_C_GunnerIxoraClassMod_OnCausedElementalEffect_Params
{
	class AActor*                                      Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C.ExecuteUbergraph_Ability_CM_Ixora_GUN_L01
struct UAbility_CM_Ixora_GUN_L01_C_ExecuteUbergraph_Ability_CM_Ixora_GUN_L01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
