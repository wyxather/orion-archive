#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_12_HauntedLegendaries_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CheckInvSlotFromLeague
struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_CheckInvSlotFromLeague_Params
{
	class UInventorySlotData*                          InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBHAnointedGear;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CheckAllSlots
struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_CheckAllSlots_Params
{
	class AActor*                                      Equipped_Actor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          Slot_Data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.OnInitChallengeInstance
struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.CompletedChallenge
struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_12_HauntedLegendaries.Challenge_BloodyHarvest_12_HauntedLegendaries_C.ExecuteUbergraph_Challenge_BloodyHarvest_12_HauntedLegendaries
struct UChallenge_BloodyHarvest_12_HauntedLegendaries_C_ExecuteUbergraph_Challenge_BloodyHarvest_12_HauntedLegendaries_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
