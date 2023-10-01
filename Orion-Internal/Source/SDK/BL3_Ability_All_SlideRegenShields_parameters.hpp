#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SlideRegenShields_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnActivated
struct UAbility_All_SlideRegenShields_C_OnActivated_Params
{
};

// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnDeactivated
struct UAbility_All_SlideRegenShields_C_OnDeactivated_Params
{
};

// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.BuildEnergy
struct UAbility_All_SlideRegenShields_C_BuildEnergy_Params
{
};

// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ReleaseEnergy
struct UAbility_All_SlideRegenShields_C_ReleaseEnergy_Params
{
};

// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideStart
struct UAbility_All_SlideRegenShields_C_SlideStart_Params
{
};

// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideEnd
struct UAbility_All_SlideRegenShields_C_SlideEnd_Params
{
	struct FSlideEndedDetails                          Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ExecuteUbergraph_Ability_All_SlideRegenShields
struct UAbility_All_SlideRegenShields_C_ExecuteUbergraph_Ability_All_SlideRegenShields_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
