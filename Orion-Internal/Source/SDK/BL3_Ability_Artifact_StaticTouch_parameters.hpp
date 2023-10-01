#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_StaticTouch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_StaticTouch.Ability_Artifact_StaticTouch_C.Ammo Return
struct UAbility_Artifact_StaticTouch_C_Ammo_Return_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_StaticTouch.Ability_Artifact_StaticTouch_C.StartSlide
struct UAbility_Artifact_StaticTouch_C_StartSlide_Params
{
};

// Function Ability_Artifact_StaticTouch.Ability_Artifact_StaticTouch_C.EndSlide
struct UAbility_Artifact_StaticTouch_C_EndSlide_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_StaticTouch.Ability_Artifact_StaticTouch_C.CausedDamage
struct UAbility_Artifact_StaticTouch_C_CausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Ability_Artifact_StaticTouch.Ability_Artifact_StaticTouch_C.OnActivated
struct UAbility_Artifact_StaticTouch_C_OnActivated_Params
{
};

// Function Ability_Artifact_StaticTouch.Ability_Artifact_StaticTouch_C.ExecuteUbergraph_Ability_Artifact_StaticTouch
struct UAbility_Artifact_StaticTouch_C_ExecuteUbergraph_Ability_Artifact_StaticTouch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
