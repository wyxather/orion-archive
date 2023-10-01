#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Too_Angry_To_Die_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDamageInFFYL
struct UAbility_GuardianRank_Too_Angry_To_Die_C_OnDamageInFFYL_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnActivated
struct UAbility_GuardianRank_Too_Angry_To_Die_C_OnActivated_Params
{
};

// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDownStateStart
struct UAbility_GuardianRank_Too_Angry_To_Die_C_OnDownStateStart_Params
{
};

// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDownStateEnd
struct UAbility_GuardianRank_Too_Angry_To_Die_C_OnDownStateEnd_Params
{
};

// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.ExecuteUbergraph_Ability_GuardianRank_Too_Angry_To_Die
struct UAbility_GuardianRank_Too_Angry_To_Die_C_ExecuteUbergraph_Ability_GuardianRank_Too_Angry_To_Die_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
