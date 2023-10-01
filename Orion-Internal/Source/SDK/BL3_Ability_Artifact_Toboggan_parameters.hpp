#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Toboggan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.OnActivated
struct UAbility_Artifact_Toboggan_C_OnActivated_Params
{
};

// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.OnDeactivated
struct UAbility_Artifact_Toboggan_C_OnDeactivated_Params
{
};

// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.WeaponFired
struct UAbility_Artifact_Toboggan_C_WeaponFired_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.StartedSliding
struct UAbility_Artifact_Toboggan_C_StartedSliding_Params
{
};

// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.BubbleExpired
struct UAbility_Artifact_Toboggan_C_BubbleExpired_Params
{
};

// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.ExecuteUbergraph_Ability_Artifact_Toboggan
struct UAbility_Artifact_Toboggan_C_ExecuteUbergraph_Ability_Artifact_Toboggan_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
