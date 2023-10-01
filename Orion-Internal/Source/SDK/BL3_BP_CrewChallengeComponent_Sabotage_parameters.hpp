#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_Sabotage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CrewChallengeComponent_Sabotage.BP_CrewChallengeComponent_Sabotage_C.ReceiveBeginPlay
struct UBP_CrewChallengeComponent_Sabotage_C_ReceiveBeginPlay_Params
{
};

// Function BP_CrewChallengeComponent_Sabotage.BP_CrewChallengeComponent_Sabotage_C.Setup_Challenge
struct UBP_CrewChallengeComponent_Sabotage_C_Setup_Challenge_Params
{
};

// Function BP_CrewChallengeComponent_Sabotage.BP_CrewChallengeComponent_Sabotage_C.Sabotaged_Broadcast
struct UBP_CrewChallengeComponent_Sabotage_C_Sabotaged_Broadcast_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CrewChallengeComponent_Sabotage.BP_CrewChallengeComponent_Sabotage_C.ExecuteUbergraph_BP_CrewChallengeComponent_Sabotage
struct UBP_CrewChallengeComponent_Sabotage_C_ExecuteUbergraph_BP_CrewChallengeComponent_Sabotage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
