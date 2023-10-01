#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.CanHealPet
struct UPassive_Beastmaster_Bond3_C_CanHealPet_Params
{
	class UObject*                                     DamageInst;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.DoPetHeal
struct UPassive_Beastmaster_Bond3_C_DoPetHeal_Params
{
};

// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.OnActivated
struct UPassive_Beastmaster_Bond3_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.OnCausedDamage_Bond3
struct UPassive_Beastmaster_Bond3_C_OnCausedDamage_Bond3_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.OnAbilityTimerEnded
struct UPassive_Beastmaster_Bond3_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_Bond3.Passive_Beastmaster_Bond3_C.ExecuteUbergraph_Passive_Beastmaster_Bond3
struct UPassive_Beastmaster_Bond3_C_ExecuteUbergraph_Passive_Beastmaster_Bond3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
