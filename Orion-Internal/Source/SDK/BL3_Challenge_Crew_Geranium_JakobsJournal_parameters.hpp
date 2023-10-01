#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_Geranium_JakobsJournal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Crew_Geranium_JakobsJournal.Challenge_Crew_Geranium_JakobsJournal_C.CompletedChallenge
struct UChallenge_Crew_Geranium_JakobsJournal_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Crew_Geranium_JakobsJournal.Challenge_Crew_Geranium_JakobsJournal_C.ExecuteUbergraph_Challenge_Crew_Geranium_JakobsJournal
struct UChallenge_Crew_Geranium_JakobsJournal_C_ExecuteUbergraph_Challenge_Crew_Geranium_JakobsJournal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
