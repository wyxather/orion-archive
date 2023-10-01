#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_GenerateTerror_Melee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_Passive_GenerateTerror_Melee.Ability_All_Passive_GenerateTerror_Melee_C.OnActivated
struct UAbility_All_Passive_GenerateTerror_Melee_C_OnActivated_Params
{
};

// Function Ability_All_Passive_GenerateTerror_Melee.Ability_All_Passive_GenerateTerror_Melee_C.CausedDamage
struct UAbility_All_Passive_GenerateTerror_Melee_C_CausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_All_Passive_GenerateTerror_Melee.Ability_All_Passive_GenerateTerror_Melee_C.ExecuteUbergraph_Ability_All_Passive_GenerateTerror_Melee
struct UAbility_All_Passive_GenerateTerror_Melee_C_ExecuteUbergraph_Ability_All_Passive_GenerateTerror_Melee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
