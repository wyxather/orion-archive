#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxLevelSequence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxLevelSequence.GbxLevelSequenceActor.Stop
struct AGbxLevelSequenceActor_Stop_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.SetPlayRate
struct AGbxLevelSequenceActor_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequenceActor.PlayLooping
struct AGbxLevelSequenceActor_PlayLooping_Params
{
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequenceActor.PlayFromStart
struct AGbxLevelSequenceActor_PlayFromStart_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.Play
struct AGbxLevelSequenceActor_Play_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.Pause
struct AGbxLevelSequenceActor_Pause_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.OnRep_ReplicatedCutsceneSkip
struct AGbxLevelSequenceActor_OnRep_ReplicatedCutsceneSkip_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceStop
struct AGbxLevelSequenceActor_OnLevelSequenceStop_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePlay
struct AGbxLevelSequenceActor_OnLevelSequencePlay_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePause
struct AGbxLevelSequenceActor_OnLevelSequencePause_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceFinished
struct AGbxLevelSequenceActor_OnLevelSequenceFinished_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.IsPlaying
struct AGbxLevelSequenceActor_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequenceActor.IsPaused
struct AGbxLevelSequenceActor_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequenceActor.IsFinished
struct AGbxLevelSequenceActor_IsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequenceActor.GoToEndAndStop
struct AGbxLevelSequenceActor_GoToEndAndStop_Params
{
};

// Function GbxLevelSequence.GbxLevelSequenceActor.GetPlayRate
struct AGbxLevelSequenceActor_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequencePlayer.OnStarted
struct UGbxLevelSequencePlayer_OnStarted_Params
{
};

// Function GbxLevelSequence.GbxLevelSequencePlayer.IsFinished
struct UGbxLevelSequencePlayer_IsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequencePlayer.CreateGbxLevelSequencePlayer
struct UGbxLevelSequencePlayer_CreateGbxLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 // (Parm)
	class AGbxLevelSequenceActor*                      OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UGbxLevelSequencePlayer*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.UnlimitSequenceActor
struct UGbxLevelSequenceThrottleLibrary_UnlimitSequenceActor_Params
{
	class AGbxLevelSequenceActor*                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ShouldLimitSequenceGroup
struct UGbxLevelSequenceThrottleLibrary_ShouldLimitSequenceGroup_Params
{
	struct FName                                       InGroup;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.LimitSequenceActor
struct UGbxLevelSequenceThrottleLibrary_LimitSequenceActor_Params
{
	class AGbxLevelSequenceActor*                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ClearLimitGroup
struct UGbxLevelSequenceThrottleLibrary_ClearLimitGroup_Params
{
	struct FName                                       Group;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
