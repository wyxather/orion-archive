#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_RakkSlag_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.OnActivated
struct UAbility_Beast_RakkSlag_C_OnActivated_Params
{
};

// Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.RakkDamageDealt
struct UAbility_Beast_RakkSlag_C_RakkDamageDealt_Params
{
	class AActor*                                      DamagedEnemy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.OnDeactivated
struct UAbility_Beast_RakkSlag_C_OnDeactivated_Params
{
};

// Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.ExecuteUbergraph_Ability_Beast_RakkSlag
struct UAbility_Beast_RakkSlag_C_ExecuteUbergraph_Ability_Beast_RakkSlag_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
