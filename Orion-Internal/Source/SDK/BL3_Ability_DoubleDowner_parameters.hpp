#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_DoubleDowner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnActivated
struct UAbility_DoubleDowner_C_OnActivated_Params
{
};

// Function Ability_DoubleDowner.Ability_DoubleDowner_C.Downed
struct UAbility_DoubleDowner_C_Downed_Params
{
};

// Function Ability_DoubleDowner.Ability_DoubleDowner_C.Upped
struct UAbility_DoubleDowner_C_Upped_Params
{
};

// Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnDeactivated
struct UAbility_DoubleDowner_C_OnDeactivated_Params
{
};

// Function Ability_DoubleDowner.Ability_DoubleDowner_C.ExecuteUbergraph_Ability_DoubleDowner
struct UAbility_DoubleDowner_C_ExecuteUbergraph_Ability_DoubleDowner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
