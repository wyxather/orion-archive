#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mus_Recruitment_AmbientMusicPerformer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C.BeginAmbientMusic
struct UMus_Recruitment_AmbientMusicPerformer_C_BeginAmbientMusic_Params
{
	class AOakMusicProvider**                          MusicProvider;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AudioTimeSeconds;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C.Tick
struct UMus_Recruitment_AmbientMusicPerformer_C_Tick_Params
{
	float*                                             AudioTimeSeconds;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C.ExecuteUbergraph_Mus_Recruitment_AmbientMusicPerformer
struct UMus_Recruitment_AmbientMusicPerformer_C_ExecuteUbergraph_Mus_Recruitment_AmbientMusicPerformer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
