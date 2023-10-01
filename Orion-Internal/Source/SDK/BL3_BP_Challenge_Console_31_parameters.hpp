#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_31_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.CheckInvRarity
struct UBP_Challenge_Console_30_C_CheckInvRarity_Params
{
	class UInventorySlotData*                          Inv_Slot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isRare;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.CheckAllSlots
struct UBP_Challenge_Console_30_C_CheckAllSlots_Params
{
	class AActor*                                      EquippedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.OnInitChallengeInstance
struct UBP_Challenge_Console_30_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_31.BP_Challenge_Console_30_C.ExecuteUbergraph_BP_Challenge_Console_31
struct UBP_Challenge_Console_30_C_ExecuteUbergraph_BP_Challenge_Console_31_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
