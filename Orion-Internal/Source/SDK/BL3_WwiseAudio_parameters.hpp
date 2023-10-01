#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WwiseAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WwiseAudio.WwiseAmbientSound.ToggleAmbientSound
struct AWwiseAmbientSound_ToggleAmbientSound_Params
{
};

// Function WwiseAudio.WwiseAmbientSound.StopAmbientSound
struct AWwiseAmbientSound_StopAmbientSound_Params
{
};

// Function WwiseAudio.WwiseAmbientSound.StartAmbientSound
struct AWwiseAmbientSound_StartAmbientSound_Params
{
};

// Function WwiseAudio.WwiseAmbientSound.GetAudioEmitterLocation
struct AWwiseAmbientSound_GetAudioEmitterLocation_Params
{
	struct FVector                                     ListenerLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.StopManagedLoop
struct UWwiseAudioComponent_StopManagedLoop_Params
{
	class UWwiseEvent*                                 OptionalStopEvent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.StopAll
struct UWwiseAudioComponent_StopAll_Params
{
};

// Function WwiseAudio.WwiseAudioComponent.StartManagedLoop
struct UWwiseAudioComponent_StartManagedLoop_Params
{
	class UWwiseEvent*                                 NewLoopEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.SetSwitch
struct UWwiseAudioComponent_SetSwitch_Params
{
	class UWwiseSwitch*                                WwiseSwitch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.SetRTPCValue
struct UWwiseAudioComponent_SetRTPCValue_Params
{
	class UWwiseRtpc*                                  GameParameter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueChangeDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EWwiseCurveInterpolation                           FadeCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.SetEmitterLocations
struct UWwiseAudioComponent_SetEmitterLocations_Params
{
	TArray<struct FWwiseLocationOverride>              NewLocations;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EWwiseMultiPositionType                            MultiPositionType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocationsAreRelative;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.ScaleToRadius
struct UWwiseAudioComponent_ScaleToRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.ScaleAttenuation
struct UWwiseAudioComponent_ScaleAttenuation_Params
{
	float                                              ScalingFactor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.RegisterRtpcValueCallback
struct UWwiseAudioComponent_RegisterRtpcValueCallback_Params
{
	TArray<class UWwiseRtpc*>                          CallbackRtpcs;                                            // (Parm, ZeroConstructor)
};

// Function WwiseAudio.WwiseAudioComponent.PostWwiseEvent
struct UWwiseAudioComponent_PostWwiseEvent_Params
{
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWwisePlaybackInstance                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WwiseAudio.WwiseAudioComponent.PostTrigger
struct UWwiseAudioComponent_PostTrigger_Params
{
	class UWwiseTrigger*                               Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.MakeMidiNote
struct UWwiseAudioComponent_MakeMidiNote_Params
{
	int                                                NoteNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AssociatedEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.Jettison
struct UWwiseAudioComponent_Jettison_Params
{
};

// Function WwiseAudio.WwiseAudioComponent.IsPossiblyAudible
struct UWwiseAudioComponent_IsPossiblyAudible_Params
{
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EventAttenuationScale;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.IsPlaying
struct UWwiseAudioComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.GetRtpcValue
struct UWwiseAudioComponent_GetRtpcValue_Params
{
	class UWwiseRtpc*                                  RTPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.GetRadius
struct UWwiseAudioComponent_GetRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponent.GetPlayingInstances
struct UWwiseAudioComponent_GetPlayingInstances_Params
{
	TArray<struct FWwisePlaybackInstance>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WwiseAudio.WwiseAudioComponent.GetMaxAttenuationRadius
struct UWwiseAudioComponent_GetMaxAttenuationRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioComponentPool.GetPooledComponent
struct UWwiseAudioComponentPool_GetPooledComponent_Params
{
	class UWwiseAudioComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WwiseAudio.WwiseEvent.GetMaxDuration
struct UWwiseEvent_GetMaxDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseAudioEffect.DeactivateEffect
struct UWwiseAudioEffect_DeactivateEffect_Params
{
};

// Function WwiseAudio.WwiseAudioEffect.ActivateEffect
struct UWwiseAudioEffect_ActivateEffect_Params
{
};

// Function WwiseAudio.WwiseGameplayStatics.WaitForAudioPlayback
struct UWwiseGameplayStatics_WaitForAudioPlayback_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (Parm)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function WwiseAudio.WwiseGameplayStatics.WaitForAudioInputConnection
struct UWwiseGameplayStatics_WaitForAudioInputConnection_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseAudioInputEvent*                       AudioInputEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	float                                              MaxWaitTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.UnloadBank
struct UWwiseGameplayStatics_UnloadBank_Params
{
	class UWwiseBank*                                  Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.StopProfilerCapture
struct UWwiseGameplayStatics_StopProfilerCapture_Params
{
};

// Function WwiseAudio.WwiseGameplayStatics.StopOutputCapture
struct UWwiseGameplayStatics_StopOutputCapture_Params
{
};

// Function WwiseAudio.WwiseGameplayStatics.StopAudio
struct UWwiseGameplayStatics_StopAudio_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (Parm)
	float                                              TransitionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWwiseCurveInterpolation                           FadeCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.StartProfilerCapture
struct UWwiseGameplayStatics_StartProfilerCapture_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
};

// Function WwiseAudio.WwiseGameplayStatics.StartOutputCapture
struct UWwiseGameplayStatics_StartOutputCapture_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
};

// Function WwiseAudio.WwiseGameplayStatics.SpawnWwiseComponentAtLocation
struct UWwiseGameplayStatics_SpawnWwiseComponentAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              EmitterRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	bool                                               IsTemporaryComponent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseAudioComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.SpawnAttachedWwiseComponent
struct UWwiseGameplayStatics_SpawnAttachedWwiseComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTemporaryComponent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachmentComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.SetGlobalState
struct UWwiseGameplayStatics_SetGlobalState_Params
{
	class UWwiseState*                                 State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.SetGlobalRTPCValue
struct UWwiseGameplayStatics_SetGlobalRTPCValue_Params
{
	class UWwiseRtpc*                                  GameParameter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWwiseCurveInterpolation                           FadeCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.SetAudioPlaybackPosition
struct UWwiseGameplayStatics_SetAudioPlaybackPosition_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (Parm)
	float                                              PlaybackPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.ResumeAudio
struct UWwiseGameplayStatics_ResumeAudio_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (Parm)
	float                                              TransitionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWwiseCurveInterpolation                           FadeCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.PostEventAtMultipleLocations
struct UWwiseGameplayStatics_PostEventAtMultipleLocations_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FWwiseLocationOverride>              NewLocations;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EWwiseMultiPositionType                            MultiPositionType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWwisePlaybackInstance                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WwiseAudio.WwiseGameplayStatics.PostEventAtLocation
struct UWwiseGameplayStatics_PostEventAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              EmitterRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	struct FWwisePlaybackInstance                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WwiseAudio.WwiseGameplayStatics.PostAttachedEvent
struct UWwiseGameplayStatics_PostAttachedEvent_Params
{
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachToActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWwisePlaybackInstance                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WwiseAudio.WwiseGameplayStatics.PauseAudio
struct UWwiseGameplayStatics_PauseAudio_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (Parm)
	float                                              TransitionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWwiseCurveInterpolation                           FadeCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.LoadBank
struct UWwiseGameplayStatics_LoadBank_Params
{
	class UWwiseBank*                                  Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.IsPossiblyAudible
struct UWwiseGameplayStatics_IsPossiblyAudible_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 inWwiseEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              AttenuationScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.IsAudioPlaying
struct UWwiseGameplayStatics_IsAudioPlaying_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.IsAudioPaused
struct UWwiseGameplayStatics_IsAudioPaused_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.GetWwiseBankEfficiencyReport
struct UWwiseGameplayStatics_GetWwiseBankEfficiencyReport_Params
{
	TArray<struct FWwiseBankEfficiencyReportDatum>     ReportData;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function WwiseAudio.WwiseGameplayStatics.GetPlayingEvent
struct UWwiseGameplayStatics_GetPlayingEvent_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWwiseEvent*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.GetEstimatedAudioDuration
struct UWwiseGameplayStatics_GetEstimatedAudioDuration_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.GetDefaultWwiseComponent
struct UWwiseGameplayStatics_GetDefaultWwiseComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateIfNotFound;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseAudioComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.GetClosestListenerLocation
struct UWwiseGameplayStatics_GetClosestListenerLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TestPosition;                                             // (Parm, IsPlainOldData)
	struct FVector                                     ClosestLocation;                                          // (Parm, OutParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.GetAudioPlaybackPosition
struct UWwiseGameplayStatics_GetAudioPlaybackPosition_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExtrapolateSubFrameTime;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.GetAudioComponentFromPlaybackInstance
struct UWwiseGameplayStatics_GetAudioComponentFromPlaybackInstance_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCreateIfNotFound;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseAudioComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.ExecuteActionOnAudioInstance
struct UWwiseGameplayStatics_ExecuteActionOnAudioInstance_Params
{
	struct FWwisePlaybackInstance                      PlaybackInstance;                                         // (Parm)
	EWwiseEventAction                                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWwiseCurveInterpolation                           FadeCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.CreateZoneAudioEffect
struct UWwiseGameplayStatics_CreateZoneAudioEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseAuxBus*                                AuxBus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectLocation;                                           // (Parm, IsPlainOldData)
	float                                              EffectSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectAttenuationDistance;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseZoneAudioEffect*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.CreateListenerAudioEffect
struct UWwiseGameplayStatics_CreateListenerAudioEffect_Params
{
	class UWwiseAuxBus*                                AuxBus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WetAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseListenerEnvironmentalEffect*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.CreateAudioEffect
struct UWwiseGameplayStatics_CreateAudioEffect_Params
{
	class UWwiseAuxBus*                                AuxBus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EWwiseEffectType                                   EffectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WetAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseAudioEffect*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WwiseAudio.WwiseGameplayStatics.ConvertLocationsToWwiseLocationOverrides
struct UWwiseGameplayStatics_ConvertLocationsToWwiseLocationOverrides_Params
{
	TArray<struct FVector>                             Locations;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	float                                              Gain;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FWwiseLocationOverride>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WwiseAudio.WwiseGameplayStatics.AddOutputCaptureMarker
struct UWwiseGameplayStatics_AddOutputCaptureMarker_Params
{
	class FString                                      MarkerText;                                               // (Parm, ZeroConstructor)
};

// Function WwiseAudio.WwiseListenerComponent.SetBusRTPCValue
struct UWwiseListenerComponent_SetBusRTPCValue_Params
{
	class UWwiseRtpc*                                  GameParameter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueChangeDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EWwiseCurveInterpolation                           FadeCurve;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WwiseAudio.WwiseListenerComponent.FindAssociatedListener
struct UWwiseListenerComponent_FindAssociatedListener_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseListenerComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WwiseAudio.WwiseListenerComponent.ConfigureListener
struct UWwiseListenerComponent_ConfigureListener_Params
{
	class UWwiseEvent*                                 WwiseEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
