// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxLevelSequence_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxLevelSequence.GbxLevelSequenceActor.Stop
// (Final, Native, Public, BlueprintCallable)

void AGbxLevelSequenceActor::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.Stop");

	AGbxLevelSequenceActor_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)

void AGbxLevelSequenceActor::SetPlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.SetPlayRate");

	AGbxLevelSequenceActor_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData)

void AGbxLevelSequenceActor::PlayLooping(int NumLoops)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.PlayLooping");

	AGbxLevelSequenceActor_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.PlayFromStart
// (Final, Native, Public, BlueprintCallable)

void AGbxLevelSequenceActor::PlayFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.PlayFromStart");

	AGbxLevelSequenceActor_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.Play
// (Final, Native, Public, BlueprintCallable)

void AGbxLevelSequenceActor::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.Play");

	AGbxLevelSequenceActor_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.Pause
// (Final, Native, Public, BlueprintCallable)

void AGbxLevelSequenceActor::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.Pause");

	AGbxLevelSequenceActor_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnRep_ReplicatedCutsceneSkip
// (Final, Native, Private)

void AGbxLevelSequenceActor::OnRep_ReplicatedCutsceneSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnRep_ReplicatedCutsceneSkip");

	AGbxLevelSequenceActor_OnRep_ReplicatedCutsceneSkip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceStop
// (Final, Native, Public)

void AGbxLevelSequenceActor::OnLevelSequenceStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceStop");

	AGbxLevelSequenceActor_OnLevelSequenceStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePlay
// (Final, Native, Public)

void AGbxLevelSequenceActor::OnLevelSequencePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePlay");

	AGbxLevelSequenceActor_OnLevelSequencePlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePause
// (Final, Native, Public)

void AGbxLevelSequenceActor::OnLevelSequencePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePause");

	AGbxLevelSequenceActor_OnLevelSequencePause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceFinished
// (Final, Native, Public)

void AGbxLevelSequenceActor::OnLevelSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceFinished");

	AGbxLevelSequenceActor_OnLevelSequenceFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGbxLevelSequenceActor::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.IsPlaying");

	AGbxLevelSequenceActor_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGbxLevelSequenceActor::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.IsPaused");

	AGbxLevelSequenceActor_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.IsFinished
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGbxLevelSequenceActor::IsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.IsFinished");

	AGbxLevelSequenceActor_IsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.GoToEndAndStop
// (Final, Native, Public, BlueprintCallable)

void AGbxLevelSequenceActor::GoToEndAndStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.GoToEndAndStop");

	AGbxLevelSequenceActor_GoToEndAndStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGbxLevelSequenceActor::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.GetPlayRate");

	AGbxLevelSequenceActor_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxLevelSequence.GbxLevelSequencePlayer.OnStarted
// (Final, Native, Public)

void UGbxLevelSequencePlayer::OnStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequencePlayer.OnStarted");

	UGbxLevelSequencePlayer_OnStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequencePlayer.IsFinished
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxLevelSequencePlayer::IsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequencePlayer.IsFinished");

	UGbxLevelSequencePlayer_IsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxLevelSequence.GbxLevelSequencePlayer.CreateGbxLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlay                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm)
// class AGbxLevelSequenceActor*  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UGbxLevelSequencePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxLevelSequencePlayer* UGbxLevelSequencePlayer::STATIC_CreateGbxLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, bool bPlay, const struct FMovieSceneSequencePlaybackSettings& Settings, class AGbxLevelSequenceActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequencePlayer.CreateGbxLevelSequencePlayer");

	UGbxLevelSequencePlayer_CreateGbxLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.bPlay = bPlay;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.UnlimitSequenceActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxLevelSequenceActor*  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxLevelSequenceThrottleLibrary::STATIC_UnlimitSequenceActor(class AGbxLevelSequenceActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.UnlimitSequenceActor");

	UGbxLevelSequenceThrottleLibrary_UnlimitSequenceActor_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ShouldLimitSequenceGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   InGroup                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxLevelSequenceThrottleLibrary::STATIC_ShouldLimitSequenceGroup(const struct FName& InGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ShouldLimitSequenceGroup");

	UGbxLevelSequenceThrottleLibrary_ShouldLimitSequenceGroup_Params params;
	params.InGroup = InGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.LimitSequenceActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxLevelSequenceActor*  Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Group                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxLevelSequenceThrottleLibrary::STATIC_LimitSequenceActor(class AGbxLevelSequenceActor* Player, const struct FName& Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.LimitSequenceActor");

	UGbxLevelSequenceThrottleLibrary_LimitSequenceActor_Params params;
	params.Player = Player;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ClearLimitGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Group                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxLevelSequenceThrottleLibrary::STATIC_ClearLimitGroup(const struct FName& Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ClearLimitGroup");

	UGbxLevelSequenceThrottleLibrary_ClearLimitGroup_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
