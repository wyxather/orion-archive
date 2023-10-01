#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GoldRush_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_GoldRush.Ability_GoldRush_C.OnActivated
struct UAbility_GoldRush_C_OnActivated_Params
{
};

// Function Ability_GoldRush.Ability_GoldRush_C.OnCausedDeath
struct UAbility_GoldRush_C_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_GoldRush.Ability_GoldRush_C.OnInventoryItemPickedUp
struct UAbility_GoldRush_C_OnInventoryItemPickedUp_Params
{
	class AActor*                                      PickedUpActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_GoldRush.Ability_GoldRush_C.ExecuteUbergraph_Ability_GoldRush
struct UAbility_GoldRush_C_ExecuteUbergraph_Ability_GoldRush_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
