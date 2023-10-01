#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_DLC2_Hunt_Stat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_DLC2_Hunt_Stat.Challenge_DLC2_Hunt_Stat_C.PlayCompletionVO
struct UChallenge_DLC2_Hunt_Stat_C_PlayCompletionVO_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogTimeSlotReference                    TimeSlot;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Played_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_DLC2_Hunt_Stat.Challenge_DLC2_Hunt_Stat_C.CompletedChallenge
struct UChallenge_DLC2_Hunt_Stat_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_DLC2_Hunt_Stat.Challenge_DLC2_Hunt_Stat_C.OnInitChallengeInstance
struct UChallenge_DLC2_Hunt_Stat_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_DLC2_Hunt_Stat.Challenge_DLC2_Hunt_Stat_C.ExecuteUbergraph_Challenge_DLC2_Hunt_Stat
struct UChallenge_DLC2_Hunt_Stat_C_ExecuteUbergraph_Challenge_DLC2_Hunt_Stat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
