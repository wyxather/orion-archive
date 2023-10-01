#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Guardian_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Guardian.Ability_Guardian_C.OnActivated
struct UAbility_Guardian_C_OnActivated_Params
{
};

// Function Ability_Guardian.Ability_Guardian_C.OnDeactivated
struct UAbility_Guardian_C_OnDeactivated_Params
{
};

// Function Ability_Guardian.Ability_Guardian_C.ExecuteUbergraph_Ability_Guardian
struct UAbility_Guardian_C_ExecuteUbergraph_Ability_Guardian_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
