#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged1.Passive_Beastmaster_Ranged1_C.OnActivated
struct UPassive_Beastmaster_Ranged1_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Ranged1.Passive_Beastmaster_Ranged1_C.CausedDamage_Ranged1
struct UPassive_Beastmaster_Ranged1_C_CausedDamage_Ranged1_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_Ranged1.Passive_Beastmaster_Ranged1_C.ResetLNTClamp
struct UPassive_Beastmaster_Ranged1_C_ResetLNTClamp_Params
{
};

// Function Passive_Beastmaster_Ranged1.Passive_Beastmaster_Ranged1_C.OnAbilityTimerEnded
struct UPassive_Beastmaster_Ranged1_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_Ranged1.Passive_Beastmaster_Ranged1_C.ExecuteUbergraph_Passive_Beastmaster_Ranged1
struct UPassive_Beastmaster_Ranged1_C_ExecuteUbergraph_Passive_Beastmaster_Ranged1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
