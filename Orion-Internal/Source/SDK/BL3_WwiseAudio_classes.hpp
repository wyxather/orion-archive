#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WwiseAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WwiseAudio.AudioParametersProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioParametersProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.AudioParametersProviderInterface");
		return ptr;
	}

};


// Class WwiseAudio.AudioPositioningProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioPositioningProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.AudioPositioningProviderInterface");
		return ptr;
	}

};


// Class WwiseAudio.InterpTrackInstWwiseAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstWwiseAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.InterpTrackInstWwiseAudioEvent");
		return ptr;
	}

};


// Class WwiseAudio.InterpTrackInstWwiseAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstWwiseAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.InterpTrackInstWwiseAudioRTPC");
		return ptr;
	}

};


// Class WwiseAudio.InterpTrackWwiseAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackWwiseAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FWwiseAudioEventTrackKey>            Events;                                                   // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.InterpTrackWwiseAudioEvent");
		return ptr;
	}

};


// Class WwiseAudio.InterpTrackWwiseAudioRTPC
// 0x0010 (0x00A0 - 0x0090)
class UInterpTrackWwiseAudioRTPC : public UInterpTrackFloatBase
{
public:
	class UWwiseRtpc*                                  RTPC;                                                     // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x0098(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x0098(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.InterpTrackWwiseAudioRTPC");
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneWwiseTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieSceneWwiseTrack : public UMovieSceneNameableTrack
{
public:
	bool                                               bAllowRename;                                             // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  WwiseSections;                                            // 0x0060(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.MovieSceneWwiseTrack");
		return ptr;
	}

};


// Class WwiseAudio.MovieSceneWwiseEventSection
// 0x0038 (0x0118 - 0x00E0)
class UMovieSceneWwiseEventSection : public UMovieSceneSection
{
public:
	EWwiseTrackDirectionality                          PlaybackDirection;                                        // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 WwiseEventStart;                                          // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEventStop;                                           // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmitterRadius;                                            // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPlaythrough;                                        // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLoopingEvent;                                          // 0x00FD(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1A];                                      // 0x00FE(0x001A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.MovieSceneWwiseEventSection");
		return ptr;
	}

};


// Class WwiseAudio.WwiseAmbientSound
// 0x00E0 (0x0538 - 0x0458)
class AWwiseAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	class UWwiseAudioComponent*                        AkComponent;                                              // 0x0460(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStartAutomatically;                                      // 0x0470(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	TArray<class AWwiseAmbientSound*>                  ChildEmitters;                                            // 0x0478(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AWwiseAmbientSound*>                  SuppressEmitters;                                         // 0x0488(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bOnlyEmitWhenContainingListener;                          // 0x0498(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientToPlayer;                                          // 0x0499(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x049A(0x0002) MISSED OFFSET
	float                                              VolumetricEmitterRadius;                                  // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricEmitterGain;                                    // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	class UWwiseRtpc*                                  VolumetricAttenuationRTPC;                                // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricAttenuationMaxDistance;                         // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	TArray<class AWwiseAmbientSound*>                  ExternalActiveRTPCAttenuationPortals;                     // 0x04B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AWwiseAmbientSound*>                  ActiveSuppressors;                                        // 0x04C8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x50];                                      // 0x04D8(0x0050) UNKNOWN PROPERTY: SetProperty WwiseAudio.WwiseAmbientSound.SuppressorPortals
	unsigned char                                      UnknownData06[0x10];                                      // 0x0528(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseAmbientSound");
		return ptr;
	}


	void ToggleAmbientSound();
	void StopAmbientSound();
	void StartAmbientSound();
	struct FVector GetAudioEmitterLocation(const struct FVector& ListenerLocation);
};


// Class WwiseAudio.WwiseAssetSyncDestination
// 0x0020 (0x0048 - 0x0028)
class UWwiseAssetSyncDestination : public UObject
{
public:
	struct FGuid                                       WwiseObjectID;                                            // 0x0028(0x0010) (Edit, IsPlainOldData)
	class FString                                      SyncPath;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseAssetSyncDestination");
		return ptr;
	}

};


// Class WwiseAudio.WwiseGameObjectComponent
// 0x0000 (0x02D0 - 0x02D0)
class UWwiseGameObjectComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseGameObjectComponent");
		return ptr;
	}

};


// Class WwiseAudio.WwiseAudioComponent
// 0x0170 (0x0440 - 0x02D0)
class UWwiseAudioComponent : public UWwiseGameObjectComponent
{
public:
	class UWwiseEvent*                                 OnAttachEvent;                                            // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 OptionalBodySwitchStopEvent;                              // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWwiseAudioComponentType                           WwiseComponentType;                                       // 0x02E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              EmitterGain;                                              // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWwiseLocationOverride>              OverrideLocations;                                        // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bOverrideLocationsAreRelative;                            // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	TScriptInterface<class UAudioParametersProviderInterface> AudioParametersProvider;                                  // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	EWwiseAudioComponentMixBehavior                    WwiseMixBehavior;                                         // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAcousticsMode                                     AcousticsMode;                                            // 0x0311(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0312(0x0002) MISSED OFFSET
	float                                              ReverbBoost;                                              // 0x0314(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStartedNewAudio;                                        // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMusicPlayStarted;                                       // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMusicBeat;                                              // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMusicSyncPoint;                                         // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRtpcSync;                                               // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackEnded;                                          // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	TScriptInterface<class UAudioPositioningProviderInterface> PositioningProvider;                                      // 0x0380(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PreviousRotationVector;                                   // 0x0390(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TMap<uint32_t, float>                              RtpcCallbackValues;                                       // 0x03A0(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x40];                                      // 0x03F0(0x0040) MISSED OFFSET
	EWwiseMultiPositionType                            MultiPositionType;                                        // 0x0430(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xF];                                       // 0x0431(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioComponent");
		return ptr;
	}


	void StopManagedLoop(class UWwiseEvent* OptionalStopEvent);
	void StopAll();
	void StartManagedLoop(class UWwiseEvent* NewLoopEvent);
	void SetSwitch(class UWwiseSwitch* WwiseSwitch);
	void SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve);
	void SetEmitterLocations(TArray<struct FWwiseLocationOverride> NewLocations, EWwiseMultiPositionType MultiPositionType, bool bLocationsAreRelative);
	void ScaleToRadius(float Radius);
	void ScaleAttenuation(float ScalingFactor);
	void RegisterRtpcValueCallback(TArray<class UWwiseRtpc*> CallbackRtpcs);
	struct FWwisePlaybackInstance PostWwiseEvent(class UWwiseEvent* WwiseEvent, int Flags);
	void PostTrigger(class UWwiseTrigger* Trigger);
	void MakeMidiNote(int NoteNum, int Velocity, int Channel, float Duration, float StartTime, class UWwiseEvent* AssociatedEvent);
	void Jettison();
	bool IsPossiblyAudible(class UWwiseEvent* WwiseEvent, float EventAttenuationScale);
	bool IsPlaying();
	float GetRtpcValue(class UWwiseRtpc* RTPC);
	float GetRadius();
	TArray<struct FWwisePlaybackInstance> GetPlayingInstances();
	float GetMaxAttenuationRadius();
};


// Class WwiseAudio.WwiseWorldComponentPool
// 0x0018 (0x0190 - 0x0178)
class UWwiseWorldComponentPool : public UActorComponent
{
public:
	int                                                DesiredPoolSize;                                          // 0x0178(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentPoolSize;                                          // 0x017C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UWwiseAudioComponent*>                PooledComponents;                                         // 0x0180(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseWorldComponentPool");
		return ptr;
	}

};


// Class WwiseAudio.WwiseAudioComponentPool
// 0x0028 (0x01A0 - 0x0178)
class UWwiseAudioComponentPool : public UActorComponent
{
public:
	int                                                MaxPoolSize;                                              // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWwiseAudioComponentPoolMode                       PoolMode;                                                 // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRecycleComponents;                                       // 0x017D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x017E(0x0002) MISSED OFFSET
	TArray<class UWwiseAudioComponent*>                ReservedComponents;                                       // 0x0180(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UWwiseAudioComponent*>                ActiveComponents;                                         // 0x0190(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioComponentPool");
		return ptr;
	}


	class UWwiseAudioComponent* GetPooledComponent();
};


// Class WwiseAudio.WwiseObject
// 0x0008 (0x0030 - 0x0028)
class UWwiseObject : public UObject
{
public:
	uint32_t                                           ShortID;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseObject");
		return ptr;
	}

};


// Class WwiseAudio.WwiseEvent
// 0x0090 (0x00C0 - 0x0030)
class UWwiseEvent : public UWwiseObject
{
public:
	class UWwiseBank*                                  RequiredBank;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEcho;                                                    // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FName                                       ClosedCaptionName;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              DurationRange;                                            // 0x0048(0x0008) (Edit, EditConst)
	TArray<class UWwiseSwitch*>                        ActionSetSwitches;                                        // 0x0050(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bOneShot : 1;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSimple : 1;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bHighImportance : 1;                                      // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bLocalizedVoice : 1;                                      // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bUsesSpeedParameter : 1;                                  // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bUsesApproachSpeedParameter : 1;                          // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bUsesRotationalSpeedParameter : 1;                        // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bUsesComponentRelativeSpeedParameter : 1;                 // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bUsesPhysicalMaterialSwitch : 1;                          // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSupportsLiveVoice : 1;                                   // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSupportsEchoVoice : 1;                                   // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bEchoWasForcedOff : 1;                                    // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bUsesPerspectiveParameter : 1;                            // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	int                                                PrepareEventRefCount;                                     // 0x0064(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPrepareEventDidLoadAllGameSyncs;                         // 0x0068(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x57];                                      // 0x0069(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseEvent");
		return ptr;
	}


	float GetMaxDuration();
};


// Class WwiseAudio.WwiseAudioInputEvent
// 0x0090 (0x0150 - 0x00C0)
class UWwiseAudioInputEvent : public UWwiseEvent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
	class UWwiseEvent*                                 BaseWwiseEvent;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OverflowProtectionLimitInFrames;                          // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	uint64_t                                           ConnectedSourceID;                                        // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FWwisePlaybackInstance>              PlayingInstances;                                         // 0x00E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x58];                                      // 0x00F8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioInputEvent");
		return ptr;
	}

};


// Class WwiseAudio.WwiseAuxBus
// 0x0008 (0x0038 - 0x0030)
class UWwiseAuxBus : public UWwiseObject
{
public:
	class UWwiseBank*                                  RequiredBank;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseAuxBus");
		return ptr;
	}

};


// Class WwiseAudio.WwiseBank
// 0x0028 (0x0058 - 0x0030)
class UWwiseBank : public UWwiseObject
{
public:
	bool                                               bAutoLoad;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<class UWwiseBank*>                          MediaSourceBanks;                                         // 0x0038(0x0010) (Edit, ZeroConstructor)
	uint16_t                                           IncludedEventCount;                                       // 0x0048(0x0002) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bUsesPrepareEvent;                                        // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPrepareEvents;                                       // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x004C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseBank");
		return ptr;
	}

};


// Class WwiseAudio.WwiseAudioEffect
// 0x0010 (0x0038 - 0x0028)
class UWwiseAudioEffect : public UObject
{
public:
	class UWwiseAuxBus*                                AuxBus;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EffectStrengh;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioEffect");
		return ptr;
	}


	void DeactivateEffect();
	void ActivateEffect();
};


// Class WwiseAudio.WwiseListenerEnvironmentalEffect
// 0x0018 (0x0050 - 0x0038)
class UWwiseListenerEnvironmentalEffect : public UWwiseAudioEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseListenerEnvironmentalEffect");
		return ptr;
	}

};


// Class WwiseAudio.WwiseZoneAudioEffect
// 0x0028 (0x0060 - 0x0038)
class UWwiseZoneAudioEffect : public UWwiseAudioEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	struct FVector                                     EffectLocation;                                           // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EffectSize;                                               // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectFadeDistance;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseZoneAudioEffect");
		return ptr;
	}

};


// Class WwiseAudio.WwiseEffectProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseEffectProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseEffectProviderInterface");
		return ptr;
	}

};


// Class WwiseAudio.WwiseEnvironmentalEffectProvider
// 0x0000 (0x0028 - 0x0028)
class UWwiseEnvironmentalEffectProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseEnvironmentalEffectProvider");
		return ptr;
	}

};


// Class WwiseAudio.WwiseExternalSourcesEditorData
// 0x0000 (0x0030 - 0x0030)
class UWwiseExternalSourcesEditorData : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseExternalSourcesEditorData");
		return ptr;
	}

};


// Class WwiseAudio.WwiseExternalSourceDebugData
// 0x0050 (0x0080 - 0x0030)
class UWwiseExternalSourceDebugData : public UDataAsset
{
public:
	TMap<uint32_t, class FString>                      UniqueIdToFilename;                                       // 0x0030(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseExternalSourceDebugData");
		return ptr;
	}

};


// Class WwiseAudio.WwiseGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UWwiseGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseGameplayStatics");
		return ptr;
	}


	void STATIC_WaitForAudioPlayback(const struct FWwisePlaybackInstance& PlaybackInstance, const struct FLatentActionInfo& LatentInfo);
	void STATIC_WaitForAudioInputConnection(class UObject* WorldContextObject, class UWwiseAudioInputEvent* AudioInputEvent, const struct FLatentActionInfo& LatentInfo, float MaxWaitTime);
	void STATIC_UnloadBank(class UWwiseBank* Bank);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
	void STATIC_StartProfilerCapture(const class FString& Filename);
	void STATIC_StartOutputCapture(const class FString& Filename);
	class UWwiseAudioComponent* STATIC_SpawnWwiseComponentAtLocation(class UObject* WorldContextObject, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation, bool IsTemporaryComponent);
	class UWwiseAudioComponent* STATIC_SpawnAttachedWwiseComponent(class AActor* Actor, const struct FName& SocketName, bool IsTemporaryComponent, class USceneComponent* AttachmentComponent);
	void STATIC_SetGlobalState(class UWwiseState* State);
	void STATIC_SetGlobalRTPCValue(class UWwiseRtpc* GameParameter, float Value, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
	void STATIC_SetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, float PlaybackPosition);
	void STATIC_ResumeAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
	struct FWwisePlaybackInstance STATIC_PostEventAtMultipleLocations(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, TArray<struct FWwiseLocationOverride> NewLocations, EWwiseMultiPositionType MultiPositionType);
	struct FWwisePlaybackInstance STATIC_PostEventAtLocation(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation);
	struct FWwisePlaybackInstance STATIC_PostAttachedEvent(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, class USceneComponent* AttachToComponent, const struct FName& SocketName, float EmitterRadius);
	void STATIC_PauseAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
	void STATIC_LoadBank(class UWwiseBank* Bank);
	bool STATIC_IsPossiblyAudible(class UObject* WorldContextObject, class UWwiseEvent* inWwiseEvent, const struct FVector& Location, float AttenuationScale, float EmitterRadius);
	bool STATIC_IsAudioPlaying(const struct FWwisePlaybackInstance& PlaybackInstance);
	bool STATIC_IsAudioPaused(const struct FWwisePlaybackInstance& PlaybackInstance);
	void STATIC_GetWwiseBankEfficiencyReport(TArray<struct FWwiseBankEfficiencyReportDatum>* ReportData);
	class UWwiseEvent* STATIC_GetPlayingEvent(const struct FWwisePlaybackInstance& PlaybackInstance);
	float STATIC_GetEstimatedAudioDuration(const struct FWwisePlaybackInstance& PlaybackInstance);
	class UWwiseAudioComponent* STATIC_GetDefaultWwiseComponent(class AActor* Actor, bool bCreateIfNotFound);
	void STATIC_GetClosestListenerLocation(class UObject* WorldContextObject, const struct FVector& TestPosition, struct FVector* ClosestLocation, bool* bSuccess);
	float STATIC_GetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, bool bExtrapolateSubFrameTime);
	class UWwiseAudioComponent* STATIC_GetAudioComponentFromPlaybackInstance(const struct FWwisePlaybackInstance& PlaybackInstance, bool bCreateIfNotFound);
	void STATIC_ExecuteActionOnAudioInstance(const struct FWwisePlaybackInstance& PlaybackInstance, EWwiseEventAction Action, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
	class UWwiseZoneAudioEffect* STATIC_CreateZoneAudioEffect(class UObject* WorldContextObject, class UWwiseAuxBus* AuxBus, const struct FVector& EffectLocation, float EffectSize, float EffectAttenuationDistance);
	class UWwiseListenerEnvironmentalEffect* STATIC_CreateListenerAudioEffect(class UWwiseAuxBus* AuxBus, class AActor* TargetActor, float WetAmount);
	class UWwiseAudioEffect* STATIC_CreateAudioEffect(class UWwiseAuxBus* AuxBus, EWwiseEffectType EffectType, float WetAmount, class AActor* TargetActor);
	TArray<struct FWwiseLocationOverride> STATIC_ConvertLocationsToWwiseLocationOverrides(TArray<struct FVector> Locations, const struct FRotator& Orientation, float Gain, float Radius);
	void STATIC_AddOutputCaptureMarker(const class FString& MarkerText);
};


// Class WwiseAudio.WwiseImplementerInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseImplementerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseImplementerInterface");
		return ptr;
	}

};


// Class WwiseAudio.WwiseListenerComponent
// 0x0040 (0x0310 - 0x02D0)
class UWwiseListenerComponent : public UWwiseGameObjectComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseListenerComponent");
		return ptr;
	}


	void SetBusRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve);
	class UWwiseListenerComponent* STATIC_FindAssociatedListener(class AActor* TargetActor);
	void ConfigureListener(class UWwiseEvent* WwiseEvent);
};


// Class WwiseAudio.WwiseMediaAudioSinkProvider
// 0x0040 (0x0070 - 0x0030)
class UWwiseMediaAudioSinkProvider : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UWwiseAudioInputEvent*                       AudioInputPlayEvent;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlayOnLocalPlayer;                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x0041(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseMediaAudioSinkProvider");
		return ptr;
	}

};


// Class WwiseAudio.WwiseRtpc
// 0x0010 (0x0040 - 0x0030)
class UWwiseRtpc : public UWwiseObject
{
public:
	struct FFloatInterval                              ValueRange;                                               // 0x0030(0x0008) (Edit, EditConst)
	float                                              DefaultValue;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseRtpc");
		return ptr;
	}

};


// Class WwiseAudio.WwiseSettings
// 0x01A0 (0x01C8 - 0x0028)
class UWwiseSettings : public UObject
{
public:
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0028(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0038(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0048(0x0010) (Edit, Config)
	TMap<class FString, class FString>                 WwiseLocalizationEquivalents;                             // 0x0058(0x0050) (Edit, ZeroConstructor, Config)
	TMap<class FString, uint32_t>                      LocalizedAudioChunks;                                     // 0x00A8(0x0050) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             ExternalSourcesDebugData;                                 // 0x00F8(0x0018) (Edit, Config)
	class UWwiseExternalSourceDebugData*               pExternalSourcesDebugData;                                // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                WorldPoolSize;                                            // 0x0118(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EWwisePlaybackConfiguration                        DefaultPlaybackConfiguration;                             // 0x011C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x011C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<float>                                      DefaultSpeakerAngles;                                     // 0x0120(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      PlaybackConfigurationRtpcName;                            // 0x0130(0x0010) (Edit, ZeroConstructor, Config)
	float                                              MinVolumeForCaptionDB;                                    // 0x0140(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MaxMemoryPoolsEditor;                                     // 0x0144(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MaxMemoryPoolsCooked;                                     // 0x0148(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StreamManagerPoolSizeMB;                                  // 0x014C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              IOMemoryPoolSizeMB;                                       // 0x0150(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           IODeviceGranularityB;                                     // 0x0154(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableStreamCache;                                       // 0x0158(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              DefaultPoolSizeEditorMB;                                  // 0x015C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultPoolSizeCookedMB;                                  // 0x0160(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LowerEngineDefaultPoolSizeMB;                             // 0x0164(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MonitorPoolSizeMB;                                        // 0x0168(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MonitorQueuePoolSizeMB;                                   // 0x016C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PrepareEventPoolSizeMB;                                   // 0x0170(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PrepareEventPoolSizeEditorMB;                             // 0x0174(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultPoolLowMemoryModeThreshold;                        // 0x0178(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LowerEnginePoolLowMemoryModeThreshold;                    // 0x017C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableHardwareXMADecoding;                               // 0x0180(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	float                                              APUCachedHeapSizeMB;                                      // 0x0184(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              APUNoncachedHeapSizeMB;                                   // 0x0188(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MaxHardwareAcceleratedXMAVoices;                          // 0x018C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x38];                                      // 0x0190(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseSettings");
		return ptr;
	}

};


// Class WwiseAudio.WwiseUserSettings
// 0x0020 (0x0048 - 0x0028)
class UWwiseUserSettings : public UObject
{
public:
	EWwiseAudioComponentSpriteSize                     SpriteSize;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowWwiseAudioComponents;                                // 0x0029(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	uint32_t                                           WwiseDebugFlags;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      ActiveComponentColor;                                     // 0x0030(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      HibernatingComponentColor;                                // 0x0034(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      ComponentHighlightColor;                                  // 0x0038(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      SelectionHighlightColor;                                  // 0x003C(0x0004) (Edit, Config, IsPlainOldData)
	float                                              SelectionLineThickness;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDrawAudioThresholdManagerDebug;                          // 0x0044(0x0001) (Edit, ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseUserSettings");
		return ptr;
	}

};


// Class WwiseAudio.WwiseState
// 0x0008 (0x0038 - 0x0030)
class UWwiseState : public UWwiseObject
{
public:
	class UWwiseStateGroup*                            StateGroup;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseState");
		return ptr;
	}

};


// Class WwiseAudio.WwiseStateGroup
// 0x0018 (0x0048 - 0x0030)
class UWwiseStateGroup : public UWwiseObject
{
public:
	TArray<class UWwiseState*>                         ChildStates;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	class UWwiseState*                                 NoneState;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseStateGroup");
		return ptr;
	}

};


// Class WwiseAudio.WwiseSwitch
// 0x0008 (0x0038 - 0x0030)
class UWwiseSwitch : public UWwiseObject
{
public:
	class UWwiseSwitchGroup*                           SwitchGroup;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseSwitch");
		return ptr;
	}

};


// Class WwiseAudio.WwiseSwitchGroup
// 0x0010 (0x0040 - 0x0030)
class UWwiseSwitchGroup : public UWwiseObject
{
public:
	TArray<class UWwiseSwitch*>                        ChildSwitches;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseSwitchGroup");
		return ptr;
	}

};


// Class WwiseAudio.WwiseTrigger
// 0x0000 (0x0030 - 0x0030)
class UWwiseTrigger : public UWwiseObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WwiseAudio.WwiseTrigger");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
