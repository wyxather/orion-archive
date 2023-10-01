#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_30_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.CheckAllSlots
struct UBP_Challenge_Console_29_C_CheckAllSlots_Params
{
	class AActor*                                      EquippedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.CheckInvSlotRarity
struct UBP_Challenge_Console_29_C_CheckInvSlotRarity_Params
{
	class UInventorySlotData*                          InvSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isRare;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.OnInitChallengeInstance
struct UBP_Challenge_Console_29_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_30.BP_Challenge_Console_29_C.ExecuteUbergraph_BP_Challenge_Console_30
struct UBP_Challenge_Console_29_C_ExecuteUbergraph_BP_Challenge_Console_30_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
