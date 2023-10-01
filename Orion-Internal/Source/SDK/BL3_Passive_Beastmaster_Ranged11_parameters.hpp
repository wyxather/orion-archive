#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged11_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.NewFunction_1
struct UPassive_Beastmaster_Ranged11_C_NewFunction_1_Params
{
};

// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.CalculateAbilityState
struct UPassive_Beastmaster_Ranged11_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.RandomChanceByGrade
struct UPassive_Beastmaster_Ranged11_C_RandomChanceByGrade_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnResumed
struct UPassive_Beastmaster_Ranged11_C_OnResumed_Params
{
};

// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnCausedDamage_Ranged11
struct UPassive_Beastmaster_Ranged11_C_OnCausedDamage_Ranged11_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnActivated
struct UPassive_Beastmaster_Ranged11_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.ExecuteUbergraph_Passive_Beastmaster_Ranged11
struct UPassive_Beastmaster_Ranged11_C_ExecuteUbergraph_Passive_Beastmaster_Ranged11_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
