#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Shield_Manawell_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.OnActivated
struct UAbility_Shield_Manawell_C_OnActivated_Params
{
};

// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.SlamEnd
struct UAbility_Shield_Manawell_C_SlamEnd_Params
{
	struct FGroundSlamEndedDetails                     Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.StopEffect
struct UAbility_Shield_Manawell_C_StopEffect_Params
{
};

// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.OnDeactivated
struct UAbility_Shield_Manawell_C_OnDeactivated_Params
{
};

// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.DrainShield
struct UAbility_Shield_Manawell_C_DrainShield_Params
{
};

// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.ExecuteUbergraph_Ability_Shield_Manawell
struct UAbility_Shield_Manawell_C_ExecuteUbergraph_Ability_Shield_Manawell_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
