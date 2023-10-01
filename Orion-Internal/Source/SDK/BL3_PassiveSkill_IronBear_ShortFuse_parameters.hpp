#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_IronBear_ShortFuse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.NewFunction_1
struct UPassiveSkill_IronBear_ShortFuse_C_NewFunction_1_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLoc;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.OnActivated
struct UPassiveSkill_IronBear_ShortFuse_C_OnActivated_Params
{
};

// Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.CausedDamage_ShortFuse
struct UPassiveSkill_IronBear_ShortFuse_C_CausedDamage_ShortFuse_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PassiveSkill_IronBear_ShortFuse.PassiveSkill_IronBear_ShortFuse_C.ExecuteUbergraph_PassiveSkill_IronBear_ShortFuse
struct UPassiveSkill_IronBear_ShortFuse_C_ExecuteUbergraph_PassiveSkill_IronBear_ShortFuse_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
