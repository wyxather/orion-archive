#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora_BSM_L01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.CalculateAbilityState
struct UAbility_CM_Ixora_BSM_L01_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.BSMIxoraCM_OnCausedAnyDamage
struct UAbility_CM_Ixora_BSM_L01_C_BSMIxoraCM_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.OnActivated
struct UAbility_CM_Ixora_BSM_L01_C_OnActivated_Params
{
};

// Function Ability_CM_Ixora_BSM_L01.Ability_CM_Ixora_BSM_L01_C.ExecuteUbergraph_Ability_CM_Ixora_BSM_L01
struct UAbility_CM_Ixora_BSM_L01_C_ExecuteUbergraph_Ability_CM_Ixora_BSM_L01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
