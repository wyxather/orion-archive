#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_13_AnointedLegendary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CheckAllSlots
struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_CheckAllSlots_Params
{
	class AActor*                                      EquippedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CheckInvSlotIsFromLeague
struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_CheckInvSlotIsFromLeague_Params
{
	class UInventorySlotData*                          InvSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBHAnointedGear;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.OnInitChallengeInstance
struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.CompletedChallenge
struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_13_AnointedLegendary.Challenge_BloodyHarvest_13_AnointedLegendary_C.ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary
struct UChallenge_BloodyHarvest_13_AnointedLegendary_C_ExecuteUbergraph_Challenge_BloodyHarvest_13_AnointedLegendary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
