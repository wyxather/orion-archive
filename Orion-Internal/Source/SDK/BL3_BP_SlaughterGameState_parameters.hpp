#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SlaughterGameState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SlaughterGameState.BP_SlaughterGameState_C.UserConstructionScript
struct ABP_SlaughterGameState_C_UserConstructionScript_Params
{
};

// Function BP_SlaughterGameState.BP_SlaughterGameState_C.ReceiveBeginPlay
struct ABP_SlaughterGameState_C_ReceiveBeginPlay_Params
{
};

// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnAllPlayersDied_Event_1
struct ABP_SlaughterGameState_C_OnAllPlayersDied_Event_1_Params
{
};

// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewRound_Event_1
struct ABP_SlaughterGameState_C_OnNewRound_Event_1_Params
{
	int                                                RoundNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewWave_Event_1
struct ABP_SlaughterGameState_C_OnNewWave_Event_1_Params
{
	bool                                               bBossWave;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CountdownDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnPlayerDied_Event_1
struct ABP_SlaughterGameState_C_OnPlayerDied_Event_1_Params
{
	class AOakPlayerState*                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnRoundComplete_Event_1
struct ABP_SlaughterGameState_C_OnRoundComplete_Event_1_Params
{
	int                                                RoundNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SlaughterGameState.BP_SlaughterGameState_C.ExecuteUbergraph_BP_SlaughterGameState
struct ABP_SlaughterGameState_C_ExecuteUbergraph_BP_SlaughterGameState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
