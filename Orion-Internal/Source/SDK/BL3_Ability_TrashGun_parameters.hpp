#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_TrashGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_TrashGun.Ability_TrashGun_C.OnActivated
struct UAbility_TrashGun_C_OnActivated_Params
{
};

// Function Ability_TrashGun.Ability_TrashGun_C.RandomRandomness
struct UAbility_TrashGun_C_RandomRandomness_Params
{
};

// Function Ability_TrashGun.Ability_TrashGun_C.KillCDM
struct UAbility_TrashGun_C_KillCDM_Params
{
};

// Function Ability_TrashGun.Ability_TrashGun_C.ExecuteUbergraph_Ability_TrashGun
struct UAbility_TrashGun_C_ExecuteUbergraph_Ability_TrashGun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
