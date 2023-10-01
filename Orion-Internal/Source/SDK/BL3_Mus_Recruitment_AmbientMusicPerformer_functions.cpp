// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mus_Recruitment_AmbientMusicPerformer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C.BeginAmbientMusic
// (Event, Public, BlueprintEvent)
// Parameters:
// class AOakMusicProvider**      MusicProvider                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AudioTimeSeconds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMus_Recruitment_AmbientMusicPerformer_C::BeginAmbientMusic(class AOakMusicProvider** MusicProvider, float* AudioTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C.BeginAmbientMusic");

	UMus_Recruitment_AmbientMusicPerformer_C_BeginAmbientMusic_Params params;
	params.MusicProvider = MusicProvider;
	params.AudioTimeSeconds = AudioTimeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C.Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         AudioTimeSeconds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMus_Recruitment_AmbientMusicPerformer_C::Tick(float* AudioTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C.Tick");

	UMus_Recruitment_AmbientMusicPerformer_C_Tick_Params params;
	params.AudioTimeSeconds = AudioTimeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C.ExecuteUbergraph_Mus_Recruitment_AmbientMusicPerformer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMus_Recruitment_AmbientMusicPerformer_C::ExecuteUbergraph_Mus_Recruitment_AmbientMusicPerformer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C.ExecuteUbergraph_Mus_Recruitment_AmbientMusicPerformer");

	UMus_Recruitment_AmbientMusicPerformer_C_ExecuteUbergraph_Mus_Recruitment_AmbientMusicPerformer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
