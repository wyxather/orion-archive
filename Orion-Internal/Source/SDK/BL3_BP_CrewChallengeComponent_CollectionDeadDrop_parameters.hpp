#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_CollectionDeadDrop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.CheckChallengeState
struct UBP_CrewChallengeComponent_CollectionDeadDrop_C_CheckChallengeState_Params
{
	class UChallengesComponent*                        ChallengeComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ChallengeActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ChallengeComplete;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ReceiveBeginPlay
struct UBP_CrewChallengeComponent_CollectionDeadDrop_C_ReceiveBeginPlay_Params
{
};

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.Setup_Challenge
struct UBP_CrewChallengeComponent_CollectionDeadDrop_C_Setup_Challenge_Params
{
};

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ChestUsed
struct UBP_CrewChallengeComponent_CollectionDeadDrop_C_ChestUsed_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.SpawnedChest
struct UBP_CrewChallengeComponent_CollectionDeadDrop_C_SpawnedChest_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ChestUnlocked
struct UBP_CrewChallengeComponent_CollectionDeadDrop_C_ChestUnlocked_Params
{
	class UChallengesComponent*                        ChallengeComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ChallengeClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ActiveOnLoad
struct UBP_CrewChallengeComponent_CollectionDeadDrop_C_ActiveOnLoad_Params
{
	class UChallengesComponent*                        ChallengeComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.CompleteOnLoad
struct UBP_CrewChallengeComponent_CollectionDeadDrop_C_CompleteOnLoad_Params
{
	class UChallengesComponent*                        Challenge_Component;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ExecuteUbergraph_BP_CrewChallengeComponent_CollectionDeadDrop
struct UBP_CrewChallengeComponent_CollectionDeadDrop_C_ExecuteUbergraph_BP_CrewChallengeComponent_CollectionDeadDrop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
