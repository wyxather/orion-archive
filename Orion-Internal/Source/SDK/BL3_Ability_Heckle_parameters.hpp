#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Heckle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Heckle.Ability_Heckle_C.OnActivated
struct UAbility_Heckle_C_OnActivated_Params
{
};

// Function Ability_Heckle.Ability_Heckle_C.OnDeactivated
struct UAbility_Heckle_C_OnDeactivated_Params
{
};

// Function Ability_Heckle.Ability_Heckle_C.ExecuteUbergraph_Ability_Heckle
struct UAbility_Heckle_C_ExecuteUbergraph_Ability_Heckle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
