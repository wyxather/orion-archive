#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_11_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.CalculateAbilityState
struct UPassive_Siren_DLCSkill_10_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.OnActivated
struct UPassive_Siren_DLCSkill_10_C_OnActivated_Params
{
};

// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.DLCSkill10_OnCausedDeath
struct UPassive_Siren_DLCSkill_10_C_DLCSkill10_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.DLCSkill10_OnCausedAnyDamage
struct UPassive_Siren_DLCSkill_10_C_DLCSkill10_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.SetupData
struct UPassive_Siren_DLCSkill_10_C_SetupData_Params
{
};

// Function Passive_Siren_DLCSkill_11.Passive_Siren_DLCSkill_10_C.ExecuteUbergraph_Passive_Siren_DLCSkill_11
struct UPassive_Siren_DLCSkill_10_C_ExecuteUbergraph_Passive_Siren_DLCSkill_11_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
