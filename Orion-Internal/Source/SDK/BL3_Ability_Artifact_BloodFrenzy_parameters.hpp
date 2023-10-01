#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_BloodFrenzy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_BloodFrenzy.Ability_Artifact_BloodFrenzy_C.Ammo Return
struct UAbility_Artifact_BloodFrenzy_C_Ammo_Return_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_BloodFrenzy.Ability_Artifact_BloodFrenzy_C.OnActivated
struct UAbility_Artifact_BloodFrenzy_C_OnActivated_Params
{
};

// Function Ability_Artifact_BloodFrenzy.Ability_Artifact_BloodFrenzy_C.OnHitEnemy_BloodFrenzy
struct UAbility_Artifact_BloodFrenzy_C_OnHitEnemy_BloodFrenzy_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Artifact_BloodFrenzy.Ability_Artifact_BloodFrenzy_C.ExecuteUbergraph_Ability_Artifact_BloodFrenzy
struct UAbility_Artifact_BloodFrenzy_C_ExecuteUbergraph_Ability_Artifact_BloodFrenzy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
