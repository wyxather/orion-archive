// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WwiseAudio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WwiseAudio.WwiseAmbientSound.ToggleAmbientSound
// (Final, Native, Public, BlueprintCallable)

void AWwiseAmbientSound::ToggleAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAmbientSound.ToggleAmbientSound");

	AWwiseAmbientSound_ToggleAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAmbientSound.StopAmbientSound
// (Final, Native, Public, BlueprintCallable)

void AWwiseAmbientSound::StopAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAmbientSound.StopAmbientSound");

	AWwiseAmbientSound_StopAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAmbientSound.StartAmbientSound
// (Final, Native, Public, BlueprintCallable)

void AWwiseAmbientSound::StartAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAmbientSound.StartAmbientSound");

	AWwiseAmbientSound_StartAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAmbientSound.GetAudioEmitterLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 ListenerLocation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AWwiseAmbientSound::GetAudioEmitterLocation(const struct FVector& ListenerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAmbientSound.GetAudioEmitterLocation");

	AWwiseAmbientSound_GetAudioEmitterLocation_Params params;
	params.ListenerLocation = ListenerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseAudioComponent.StopManagedLoop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             OptionalStopEvent              (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseAudioComponent::StopManagedLoop(class UWwiseEvent* OptionalStopEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.StopManagedLoop");

	UWwiseAudioComponent_StopManagedLoop_Params params;
	params.OptionalStopEvent = OptionalStopEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.StopAll
// (Final, Native, Public, BlueprintCallable)

void UWwiseAudioComponent::StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.StopAll");

	UWwiseAudioComponent_StopAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.StartManagedLoop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             NewLoopEvent                   (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseAudioComponent::StartManagedLoop(class UWwiseEvent* NewLoopEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.StartManagedLoop");

	UWwiseAudioComponent_StartManagedLoop_Params params;
	params.NewLoopEvent = NewLoopEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.SetSwitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseSwitch*            WwiseSwitch                    (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseAudioComponent::SetSwitch(class UWwiseSwitch* WwiseSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.SetSwitch");

	UWwiseAudioComponent_SetSwitch_Params params;
	params.WwiseSwitch = WwiseSwitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.SetRTPCValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*              GameParameter                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueChangeDuration            (Parm, ZeroConstructor, IsPlainOldData)
// EWwiseCurveInterpolation       FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseAudioComponent::SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.SetRTPCValue");

	UWwiseAudioComponent_SetRTPCValue_Params params;
	params.GameParameter = GameParameter;
	params.Value = Value;
	params.ValueChangeDuration = ValueChangeDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.SetEmitterLocations
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FWwiseLocationOverride> NewLocations                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EWwiseMultiPositionType        MultiPositionType              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocationsAreRelative          (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseAudioComponent::SetEmitterLocations(TArray<struct FWwiseLocationOverride> NewLocations, EWwiseMultiPositionType MultiPositionType, bool bLocationsAreRelative)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.SetEmitterLocations");

	UWwiseAudioComponent_SetEmitterLocations_Params params;
	params.NewLocations = NewLocations;
	params.MultiPositionType = MultiPositionType;
	params.bLocationsAreRelative = bLocationsAreRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.ScaleToRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseAudioComponent::ScaleToRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.ScaleToRadius");

	UWwiseAudioComponent_ScaleToRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.ScaleAttenuation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ScalingFactor                  (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseAudioComponent::ScaleAttenuation(float ScalingFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.ScaleAttenuation");

	UWwiseAudioComponent_ScaleAttenuation_Params params;
	params.ScalingFactor = ScalingFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.RegisterRtpcValueCallback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UWwiseRtpc*>      CallbackRtpcs                  (Parm, ZeroConstructor)

void UWwiseAudioComponent::RegisterRtpcValueCallback(TArray<class UWwiseRtpc*> CallbackRtpcs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.RegisterRtpcValueCallback");

	UWwiseAudioComponent_RegisterRtpcValueCallback_Params params;
	params.CallbackRtpcs = CallbackRtpcs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.PostWwiseEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FWwisePlaybackInstance  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWwisePlaybackInstance UWwiseAudioComponent::PostWwiseEvent(class UWwiseEvent* WwiseEvent, int Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.PostWwiseEvent");

	UWwiseAudioComponent_PostWwiseEvent_Params params;
	params.WwiseEvent = WwiseEvent;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseAudioComponent.PostTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseTrigger*           Trigger                        (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseAudioComponent::PostTrigger(class UWwiseTrigger* Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.PostTrigger");

	UWwiseAudioComponent_PostTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.MakeMidiNote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NoteNum                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             AssociatedEvent                (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseAudioComponent::MakeMidiNote(int NoteNum, int Velocity, int Channel, float Duration, float StartTime, class UWwiseEvent* AssociatedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.MakeMidiNote");

	UWwiseAudioComponent_MakeMidiNote_Params params;
	params.NoteNum = NoteNum;
	params.Velocity = Velocity;
	params.Channel = Channel;
	params.Duration = Duration;
	params.StartTime = StartTime;
	params.AssociatedEvent = AssociatedEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.Jettison
// (Final, Native, Public, BlueprintCallable)

void UWwiseAudioComponent::Jettison()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.Jettison");

	UWwiseAudioComponent_Jettison_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioComponent.IsPossiblyAudible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EventAttenuationScale          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseAudioComponent::IsPossiblyAudible(class UWwiseEvent* WwiseEvent, float EventAttenuationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.IsPossiblyAudible");

	UWwiseAudioComponent_IsPossiblyAudible_Params params;
	params.WwiseEvent = WwiseEvent;
	params.EventAttenuationScale = EventAttenuationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseAudioComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseAudioComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.IsPlaying");

	UWwiseAudioComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseAudioComponent.GetRtpcValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*              RTPC                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseAudioComponent::GetRtpcValue(class UWwiseRtpc* RTPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.GetRtpcValue");

	UWwiseAudioComponent_GetRtpcValue_Params params;
	params.RTPC = RTPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseAudioComponent.GetRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseAudioComponent::GetRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.GetRadius");

	UWwiseAudioComponent_GetRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseAudioComponent.GetPlayingInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FWwisePlaybackInstance> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FWwisePlaybackInstance> UWwiseAudioComponent::GetPlayingInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.GetPlayingInstances");

	UWwiseAudioComponent_GetPlayingInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseAudioComponent.GetMaxAttenuationRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseAudioComponent::GetMaxAttenuationRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.GetMaxAttenuationRadius");

	UWwiseAudioComponent_GetMaxAttenuationRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseAudioComponentPool.GetPooledComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseAudioComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWwiseAudioComponent* UWwiseAudioComponentPool::GetPooledComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponentPool.GetPooledComponent");

	UWwiseAudioComponentPool_GetPooledComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseEvent.GetMaxDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseEvent::GetMaxDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetMaxDuration");

	UWwiseEvent_GetMaxDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseAudioEffect.DeactivateEffect
// (Final, Native, Public, BlueprintCallable)

void UWwiseAudioEffect::DeactivateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioEffect.DeactivateEffect");

	UWwiseAudioEffect_DeactivateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseAudioEffect.ActivateEffect
// (Final, Native, Public, BlueprintCallable)

void UWwiseAudioEffect::ActivateEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioEffect.ActivateEffect");

	UWwiseAudioEffect_ActivateEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.WaitForAudioPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (Parm)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UWwiseGameplayStatics::STATIC_WaitForAudioPlayback(const struct FWwisePlaybackInstance& PlaybackInstance, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.WaitForAudioPlayback");

	UWwiseGameplayStatics_WaitForAudioPlayback_Params params;
	params.PlaybackInstance = PlaybackInstance;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.WaitForAudioInputConnection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseAudioInputEvent*   AudioInputEvent                (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// float                          MaxWaitTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_WaitForAudioInputConnection(class UObject* WorldContextObject, class UWwiseAudioInputEvent* AudioInputEvent, const struct FLatentActionInfo& LatentInfo, float MaxWaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.WaitForAudioInputConnection");

	UWwiseGameplayStatics_WaitForAudioInputConnection_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AudioInputEvent = AudioInputEvent;
	params.LatentInfo = LatentInfo;
	params.MaxWaitTime = MaxWaitTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.UnloadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseBank*              Bank                           (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_UnloadBank(class UWwiseBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.UnloadBank");

	UWwiseGameplayStatics_UnloadBank_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.StopProfilerCapture
// (Final, Native, Static, Public, BlueprintCallable)

void UWwiseGameplayStatics::STATIC_StopProfilerCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StopProfilerCapture");

	UWwiseGameplayStatics_StopProfilerCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.StopOutputCapture
// (Final, Native, Static, Public, BlueprintCallable)

void UWwiseGameplayStatics::STATIC_StopOutputCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StopOutputCapture");

	UWwiseGameplayStatics_StopOutputCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.StopAudio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (Parm)
// float                          TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData)
// EWwiseCurveInterpolation       FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_StopAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StopAudio");

	UWwiseGameplayStatics_StopAudio_Params params;
	params.PlaybackInstance = PlaybackInstance;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.StartProfilerCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Filename                       (Parm, ZeroConstructor)

void UWwiseGameplayStatics::STATIC_StartProfilerCapture(const class FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StartProfilerCapture");

	UWwiseGameplayStatics_StartProfilerCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.StartOutputCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Filename                       (Parm, ZeroConstructor)

void UWwiseGameplayStatics::STATIC_StartOutputCapture(const class FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StartOutputCapture");

	UWwiseGameplayStatics_StartOutputCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.SpawnWwiseComponentAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          EmitterRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// bool                           IsTemporaryComponent           (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseAudioComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWwiseAudioComponent* UWwiseGameplayStatics::STATIC_SpawnWwiseComponentAtLocation(class UObject* WorldContextObject, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation, bool IsTemporaryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SpawnWwiseComponentAtLocation");

	UWwiseGameplayStatics_SpawnWwiseComponentAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.EmitterRadius = EmitterRadius;
	params.Orientation = Orientation;
	params.IsTemporaryComponent = IsTemporaryComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.SpawnAttachedWwiseComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTemporaryComponent           (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachmentComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWwiseAudioComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWwiseAudioComponent* UWwiseGameplayStatics::STATIC_SpawnAttachedWwiseComponent(class AActor* Actor, const struct FName& SocketName, bool IsTemporaryComponent, class USceneComponent* AttachmentComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SpawnAttachedWwiseComponent");

	UWwiseGameplayStatics_SpawnAttachedWwiseComponent_Params params;
	params.Actor = Actor;
	params.SocketName = SocketName;
	params.IsTemporaryComponent = IsTemporaryComponent;
	params.AttachmentComponent = AttachmentComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.SetGlobalState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseState*             State                          (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_SetGlobalState(class UWwiseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SetGlobalState");

	UWwiseGameplayStatics_SetGlobalState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.SetGlobalRTPCValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*              GameParameter                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData)
// EWwiseCurveInterpolation       FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_SetGlobalRTPCValue(class UWwiseRtpc* GameParameter, float Value, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SetGlobalRTPCValue");

	UWwiseGameplayStatics_SetGlobalRTPCValue_Params params;
	params.GameParameter = GameParameter;
	params.Value = Value;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.SetAudioPlaybackPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (Parm)
// float                          PlaybackPosition               (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_SetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, float PlaybackPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SetAudioPlaybackPosition");

	UWwiseGameplayStatics_SetAudioPlaybackPosition_Params params;
	params.PlaybackInstance = PlaybackInstance;
	params.PlaybackPosition = PlaybackPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.ResumeAudio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (Parm)
// float                          TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData)
// EWwiseCurveInterpolation       FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_ResumeAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.ResumeAudio");

	UWwiseGameplayStatics_ResumeAudio_Params params;
	params.PlaybackInstance = PlaybackInstance;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.PostEventAtMultipleLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FWwiseLocationOverride> NewLocations                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EWwiseMultiPositionType        MultiPositionType              (Parm, ZeroConstructor, IsPlainOldData)
// struct FWwisePlaybackInstance  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWwisePlaybackInstance UWwiseGameplayStatics::STATIC_PostEventAtMultipleLocations(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, TArray<struct FWwiseLocationOverride> NewLocations, EWwiseMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.PostEventAtMultipleLocations");

	UWwiseGameplayStatics_PostEventAtMultipleLocations_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WwiseEvent = WwiseEvent;
	params.NewLocations = NewLocations;
	params.MultiPositionType = MultiPositionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.PostEventAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          EmitterRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// struct FWwisePlaybackInstance  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWwisePlaybackInstance UWwiseGameplayStatics::STATIC_PostEventAtLocation(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.PostEventAtLocation");

	UWwiseGameplayStatics_PostEventAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WwiseEvent = WwiseEvent;
	params.Location = Location;
	params.EmitterRadius = EmitterRadius;
	params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.PostAttachedEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AttachToActor                  (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FWwisePlaybackInstance  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWwisePlaybackInstance UWwiseGameplayStatics::STATIC_PostAttachedEvent(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, class USceneComponent* AttachToComponent, const struct FName& SocketName, float EmitterRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.PostAttachedEvent");

	UWwiseGameplayStatics_PostAttachedEvent_Params params;
	params.WwiseEvent = WwiseEvent;
	params.AttachToActor = AttachToActor;
	params.AttachToComponent = AttachToComponent;
	params.SocketName = SocketName;
	params.EmitterRadius = EmitterRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.PauseAudio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (Parm)
// float                          TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData)
// EWwiseCurveInterpolation       FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_PauseAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.PauseAudio");

	UWwiseGameplayStatics_PauseAudio_Params params;
	params.PlaybackInstance = PlaybackInstance;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.LoadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseBank*              Bank                           (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_LoadBank(class UWwiseBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.LoadBank");

	UWwiseGameplayStatics_LoadBank_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.IsPossiblyAudible
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             inWwiseEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          AttenuationScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseGameplayStatics::STATIC_IsPossiblyAudible(class UObject* WorldContextObject, class UWwiseEvent* inWwiseEvent, const struct FVector& Location, float AttenuationScale, float EmitterRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.IsPossiblyAudible");

	UWwiseGameplayStatics_IsPossiblyAudible_Params params;
	params.WorldContextObject = WorldContextObject;
	params.inWwiseEvent = inWwiseEvent;
	params.Location = Location;
	params.AttenuationScale = AttenuationScale;
	params.EmitterRadius = EmitterRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.IsAudioPlaying
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseGameplayStatics::STATIC_IsAudioPlaying(const struct FWwisePlaybackInstance& PlaybackInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.IsAudioPlaying");

	UWwiseGameplayStatics_IsAudioPlaying_Params params;
	params.PlaybackInstance = PlaybackInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.IsAudioPaused
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWwiseGameplayStatics::STATIC_IsAudioPaused(const struct FWwisePlaybackInstance& PlaybackInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.IsAudioPaused");

	UWwiseGameplayStatics_IsAudioPaused_Params params;
	params.PlaybackInstance = PlaybackInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.GetWwiseBankEfficiencyReport
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FWwiseBankEfficiencyReportDatum> ReportData                     (Parm, OutParm, ZeroConstructor)

void UWwiseGameplayStatics::STATIC_GetWwiseBankEfficiencyReport(TArray<struct FWwiseBankEfficiencyReportDatum>* ReportData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetWwiseBankEfficiencyReport");

	UWwiseGameplayStatics_GetWwiseBankEfficiencyReport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReportData != nullptr)
		*ReportData = params.ReportData;
}


// Function WwiseAudio.WwiseGameplayStatics.GetPlayingEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (ConstParm, Parm, OutParm, ReferenceParm)
// class UWwiseEvent*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWwiseEvent* UWwiseGameplayStatics::STATIC_GetPlayingEvent(const struct FWwisePlaybackInstance& PlaybackInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetPlayingEvent");

	UWwiseGameplayStatics_GetPlayingEvent_Params params;
	params.PlaybackInstance = PlaybackInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.GetEstimatedAudioDuration
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseGameplayStatics::STATIC_GetEstimatedAudioDuration(const struct FWwisePlaybackInstance& PlaybackInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetEstimatedAudioDuration");

	UWwiseGameplayStatics_GetEstimatedAudioDuration_Params params;
	params.PlaybackInstance = PlaybackInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.GetDefaultWwiseComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCreateIfNotFound              (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseAudioComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWwiseAudioComponent* UWwiseGameplayStatics::STATIC_GetDefaultWwiseComponent(class AActor* Actor, bool bCreateIfNotFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetDefaultWwiseComponent");

	UWwiseGameplayStatics_GetDefaultWwiseComponent_Params params;
	params.Actor = Actor;
	params.bCreateIfNotFound = bCreateIfNotFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.GetClosestListenerLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TestPosition                   (Parm, IsPlainOldData)
// struct FVector                 ClosestLocation                (Parm, OutParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_GetClosestListenerLocation(class UObject* WorldContextObject, const struct FVector& TestPosition, struct FVector* ClosestLocation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetClosestListenerLocation");

	UWwiseGameplayStatics_GetClosestListenerLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TestPosition = TestPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestLocation != nullptr)
		*ClosestLocation = params.ClosestLocation;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function WwiseAudio.WwiseGameplayStatics.GetAudioPlaybackPosition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bExtrapolateSubFrameTime       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWwiseGameplayStatics::STATIC_GetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, bool bExtrapolateSubFrameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetAudioPlaybackPosition");

	UWwiseGameplayStatics_GetAudioPlaybackPosition_Params params;
	params.PlaybackInstance = PlaybackInstance;
	params.bExtrapolateSubFrameTime = bExtrapolateSubFrameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.GetAudioComponentFromPlaybackInstance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bCreateIfNotFound              (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseAudioComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWwiseAudioComponent* UWwiseGameplayStatics::STATIC_GetAudioComponentFromPlaybackInstance(const struct FWwisePlaybackInstance& PlaybackInstance, bool bCreateIfNotFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetAudioComponentFromPlaybackInstance");

	UWwiseGameplayStatics_GetAudioComponentFromPlaybackInstance_Params params;
	params.PlaybackInstance = PlaybackInstance;
	params.bCreateIfNotFound = bCreateIfNotFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.ExecuteActionOnAudioInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance  PlaybackInstance               (Parm)
// EWwiseEventAction              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionDuration             (Parm, ZeroConstructor, IsPlainOldData)
// EWwiseCurveInterpolation       FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseGameplayStatics::STATIC_ExecuteActionOnAudioInstance(const struct FWwisePlaybackInstance& PlaybackInstance, EWwiseEventAction Action, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.ExecuteActionOnAudioInstance");

	UWwiseGameplayStatics_ExecuteActionOnAudioInstance_Params params;
	params.PlaybackInstance = PlaybackInstance;
	params.Action = Action;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseGameplayStatics.CreateZoneAudioEffect
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseAuxBus*            AuxBus                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EffectLocation                 (Parm, IsPlainOldData)
// float                          EffectSize                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectAttenuationDistance      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseZoneAudioEffect*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWwiseZoneAudioEffect* UWwiseGameplayStatics::STATIC_CreateZoneAudioEffect(class UObject* WorldContextObject, class UWwiseAuxBus* AuxBus, const struct FVector& EffectLocation, float EffectSize, float EffectAttenuationDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.CreateZoneAudioEffect");

	UWwiseGameplayStatics_CreateZoneAudioEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AuxBus = AuxBus;
	params.EffectLocation = EffectLocation;
	params.EffectSize = EffectSize;
	params.EffectAttenuationDistance = EffectAttenuationDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.CreateListenerAudioEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseAuxBus*            AuxBus                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          WetAmount                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseListenerEnvironmentalEffect* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWwiseListenerEnvironmentalEffect* UWwiseGameplayStatics::STATIC_CreateListenerAudioEffect(class UWwiseAuxBus* AuxBus, class AActor* TargetActor, float WetAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.CreateListenerAudioEffect");

	UWwiseGameplayStatics_CreateListenerAudioEffect_Params params;
	params.AuxBus = AuxBus;
	params.TargetActor = TargetActor;
	params.WetAmount = WetAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.CreateAudioEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseAuxBus*            AuxBus                         (Parm, ZeroConstructor, IsPlainOldData)
// EWwiseEffectType               EffectType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          WetAmount                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseAudioEffect*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWwiseAudioEffect* UWwiseGameplayStatics::STATIC_CreateAudioEffect(class UWwiseAuxBus* AuxBus, EWwiseEffectType EffectType, float WetAmount, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.CreateAudioEffect");

	UWwiseGameplayStatics_CreateAudioEffect_Params params;
	params.AuxBus = AuxBus;
	params.EffectType = EffectType;
	params.WetAmount = WetAmount;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.ConvertLocationsToWwiseLocationOverrides
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Locations                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// float                          Gain                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FWwiseLocationOverride> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FWwiseLocationOverride> UWwiseGameplayStatics::STATIC_ConvertLocationsToWwiseLocationOverrides(TArray<struct FVector> Locations, const struct FRotator& Orientation, float Gain, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.ConvertLocationsToWwiseLocationOverrides");

	UWwiseGameplayStatics_ConvertLocationsToWwiseLocationOverrides_Params params;
	params.Locations = Locations;
	params.Orientation = Orientation;
	params.Gain = Gain;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseGameplayStatics.AddOutputCaptureMarker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  MarkerText                     (Parm, ZeroConstructor)

void UWwiseGameplayStatics::STATIC_AddOutputCaptureMarker(const class FString& MarkerText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.AddOutputCaptureMarker");

	UWwiseGameplayStatics_AddOutputCaptureMarker_Params params;
	params.MarkerText = MarkerText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseListenerComponent.SetBusRTPCValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*              GameParameter                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueChangeDuration            (Parm, ZeroConstructor, IsPlainOldData)
// EWwiseCurveInterpolation       FadeCurve                      (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseListenerComponent::SetBusRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseListenerComponent.SetBusRTPCValue");

	UWwiseListenerComponent_SetBusRTPCValue_Params params;
	params.GameParameter = GameParameter;
	params.Value = Value;
	params.ValueChangeDuration = ValueChangeDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WwiseAudio.WwiseListenerComponent.FindAssociatedListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseListenerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWwiseListenerComponent* UWwiseListenerComponent::STATIC_FindAssociatedListener(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseListenerComponent.FindAssociatedListener");

	UWwiseListenerComponent_FindAssociatedListener_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WwiseAudio.WwiseListenerComponent.ConfigureListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void UWwiseListenerComponent::ConfigureListener(class UWwiseEvent* WwiseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseListenerComponent.ConfigureListener");

	UWwiseListenerComponent_ConfigureListener_Params params;
	params.WwiseEvent = WwiseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
