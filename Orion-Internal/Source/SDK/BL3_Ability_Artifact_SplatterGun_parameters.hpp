#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_SplatterGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.Ammo Return
struct UAbility_Artifact_SplatterGun_C_Ammo_Return_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.OnActivated
struct UAbility_Artifact_SplatterGun_C_OnActivated_Params
{
};

// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.StartSlide
struct UAbility_Artifact_SplatterGun_C_StartSlide_Params
{
};

// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.EndSlide
struct UAbility_Artifact_SplatterGun_C_EndSlide_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.ExecuteUbergraph_Ability_Artifact_SplatterGun
struct UAbility_Artifact_SplatterGun_C_ExecuteUbergraph_Ability_Artifact_SplatterGun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
