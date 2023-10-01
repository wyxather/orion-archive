#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora_OPE_L02_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_CM_Ixora_OPE_L02.Ability_CM_Ixora_OPE_L02_C.OnActivated
struct UAbility_CM_Ixora_OPE_L02_C_OnActivated_Params
{
};

// Function Ability_CM_Ixora_OPE_L02.Ability_CM_Ixora_OPE_L02_C.OperativeIxoraCM_OnCausedAnyDamage
struct UAbility_CM_Ixora_OPE_L02_C_OperativeIxoraCM_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_CM_Ixora_OPE_L02.Ability_CM_Ixora_OPE_L02_C.ExecuteUbergraph_Ability_CM_Ixora_OPE_L02
struct UAbility_CM_Ixora_OPE_L02_C_ExecuteUbergraph_Ability_CM_Ixora_OPE_L02_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
