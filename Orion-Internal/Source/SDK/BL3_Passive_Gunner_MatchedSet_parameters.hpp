#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_MatchedSet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateAbilityState
struct UPassive_Gunner_MatchedSet_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetGearModifierPerInventorySlot
struct UPassive_Gunner_MatchedSet_C_SetGearModifierPerInventorySlot_Params
{
	class UInventorySlotData*                          SlotToUse;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               NewModifyValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CalculateTotalGearModifierBonus
struct UPassive_Gunner_MatchedSet_C_CalculateTotalGearModifierBonus_Params
{
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetIsNewRightHandWeapon?
struct UPassive_Gunner_MatchedSet_C_GetIsNewRightHandWeapon__Params
{
	class AActor*                                      ModifiedEquipment;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ItIs_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.CleanupGearBonus
struct UPassive_Gunner_MatchedSet_C_CleanupGearBonus_Params
{
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.SetRightHandManufacturer
struct UPassive_Gunner_MatchedSet_C_SetRightHandManufacturer_Params
{
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.GetItemManufacturer
struct UPassive_Gunner_MatchedSet_C_GetItemManufacturer_Params
{
	class AActor*                                      GearToTest;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UManufacturerData*                           Manufacturer;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.TryToModifyIndividualGearBonus
struct UPassive_Gunner_MatchedSet_C_TryToModifyIndividualGearBonus_Params
{
	class UInventorySlotData*                          NewSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_EquippedItem
struct UPassive_Gunner_MatchedSet_C_MatchedSet_EquippedItem_Params
{
	class AActor*                                      EquippedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_UnequippedItem
struct UPassive_Gunner_MatchedSet_C_MatchedSet_UnequippedItem_Params
{
	class AActor*                                      UnequippedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.DetermineTotalGearBonus
struct UPassive_Gunner_MatchedSet_C_DetermineTotalGearBonus_Params
{
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.HandleNewEquippedItem
struct UPassive_Gunner_MatchedSet_C_HandleNewEquippedItem_Params
{
	class AActor*                                      NewModifiedActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          NewSlotData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnActivated
struct UPassive_Gunner_MatchedSet_C_OnActivated_Params
{
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnResumed
struct UPassive_Gunner_MatchedSet_C_OnResumed_Params
{
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnPaused
struct UPassive_Gunner_MatchedSet_C_OnPaused_Params
{
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.MatchedSet_OnWeaponChanged
struct UPassive_Gunner_MatchedSet_C_MatchedSet_OnWeaponChanged_Params
{
	class AWeapon*                                     NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     LastWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.OnForcedRefresh
struct UPassive_Gunner_MatchedSet_C_OnForcedRefresh_Params
{
};

// Function Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C.ExecuteUbergraph_Passive_Gunner_MatchedSet
struct UPassive_Gunner_MatchedSet_C_ExecuteUbergraph_Passive_Gunner_MatchedSet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
