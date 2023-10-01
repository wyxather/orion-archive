#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_Salvage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.ReceiveBeginPlay
struct UBP_CrewChallengeComponent_Salvage_C_ReceiveBeginPlay_Params
{
};

// Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.Setup_Challenge
struct UBP_CrewChallengeComponent_Salvage_C_Setup_Challenge_Params
{
};

// Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.ClaptrapPart_Found
struct UBP_CrewChallengeComponent_Salvage_C_ClaptrapPart_Found_Params
{
	struct FUseEvent                                   UseEvent;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C.ExecuteUbergraph_BP_CrewChallengeComponent_Salvage
struct UBP_CrewChallengeComponent_Salvage_C_ExecuteUbergraph_BP_CrewChallengeComponent_Salvage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
