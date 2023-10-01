#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_InventoryAbility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_InventoryAbility.BP_InventoryAbility_C.CalculateAbilityState
struct UBP_InventoryAbility_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_InventoryAbility.BP_InventoryAbility_C.OnActivated
struct UBP_InventoryAbility_C_OnActivated_Params
{
};

// Function BP_InventoryAbility.BP_InventoryAbility_C.ExecuteUbergraph_BP_InventoryAbility
struct UBP_InventoryAbility_C_ExecuteUbergraph_BP_InventoryAbility_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
