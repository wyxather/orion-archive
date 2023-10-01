#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_MovieScene_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum WwiseAudio.EWwiseTrackDirectionality
enum class EWwiseTrackDirectionality : uint8_t
{
	ForwardsAndBackwards           = 0,
	OnlyForwards                   = 1,
	OnlyBackwards                  = 2,
	EWwiseTrackDirectionality_MAX  = 3
};


// Enum WwiseAudio.EWwiseAudioComponentPoolMode
enum class EWwiseAudioComponentPoolMode : uint8_t
{
	Fixed                          = 0,
	Steal                          = 1,
	EWwiseAudioComponentPoolMode_MAX = 2
};


// Enum WwiseAudio.EWwisePlaybackConfiguration
enum class EWwisePlaybackConfiguration : uint8_t
{
	Hifi                           = 0,
	Small                          = 1,
	Headphones                     = 2,
	NightTime                      = 3,
	Mono                           = 4,
	Spatial                        = 5,
	EWwisePlaybackConfiguration_MAX = 6
};


// Enum WwiseAudio.EBankLoadState
enum class EBankLoadState : uint8_t
{
	Unloaded                       = 0,
	AsyncLoading                   = 1,
	Loaded                         = 2,
	EBankLoadState_MAX             = 3
};


// Enum WwiseAudio.EAcousticsMode
enum class EAcousticsMode : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledUnconditionalSampleMode = 2,
	EnabledOmnidirectional         = 3,
	UsePlayerLocationForAcoustics  = 4,
	EAcousticsMode_MAX             = 5
};


// Enum WwiseAudio.EWwiseMultiPositionType
enum class EWwiseMultiPositionType : uint8_t
{
	MultiSources                   = 0,
	MultiDirections                = 1,
	EWwiseMultiPositionType_MAX    = 2
};


// Enum WwiseAudio.EWwiseCurveInterpolation
enum class EWwiseCurveInterpolation : uint8_t
{
	Log3                           = 0,
	Sine                           = 1,
	Log1                           = 2,
	InvSCurve                      = 3,
	Linear                         = 4,
	SCurve                         = 5,
	Exp1                           = 6,
	SineRecip                      = 7,
	Exp3                           = 8,
	EWwiseCurveInterpolation_MAX   = 9
};


// Enum WwiseAudio.EWwiseEventAction
enum class EWwiseEventAction : uint8_t
{
	Stop                           = 0,
	Pause                          = 1,
	Resume                         = 2,
	Break                          = 3,
	ReleaseEnvelope                = 4,
	EWwiseEventAction_MAX          = 5
};


// Enum WwiseAudio.EWwisePostEventFlags
enum class EWwisePostEventFlags : uint8_t
{
	MarkerCallbacks                = 0,
	SupportDuration                = 1,
	SupportPlaybackPosition        = 2,
	MusicSyncCallbacks             = 3,
	EWwisePostEventFlags_MAX       = 4
};


// Enum WwiseAudio.EWwiseAudioComponentMixBehavior
enum class EWwiseAudioComponentMixBehavior : uint8_t
{
	Standard                       = 0,
	DirectToMasterMix              = 1,
	MixGroup                       = 2,
	EWwiseAudioComponentMixBehavior_MAX = 3
};


// Enum WwiseAudio.EWwiseAudioComponentType
enum class EWwiseAudioComponentType : uint8_t
{
	Standard                       = 0,
	ActorDefault                   = 1,
	Temporary                      = 2,
	Pooled                         = 3,
	EWwiseAudioComponentType_MAX   = 4
};


// Enum WwiseAudio.EWwiseEffectType
enum class EWwiseEffectType : uint8_t
{
	ListenerEnvironmentalEffect    = 0,
	EWwiseEffectType_MAX           = 1
};


// Enum WwiseAudio.EWwiseDebugFlags
enum class EWwiseDebugFlags : uint8_t
{
	ShowOwner                      = 0,
	ShowComponentType              = 1,
	ShowEventNames                 = 2,
	ShowDistanceToListener         = 3,
	HideActiveComponents           = 4,
	ShowHibernatingComponents      = 5,
	ShowDetailedLocations          = 6,
	EWwiseDebugFlags_MAX           = 7
};


// Enum WwiseAudio.EWwiseAudioComponentSpriteSize
enum class EWwiseAudioComponentSpriteSize : uint8_t
{
	Large                          = 0,
	Small                          = 1,
	None                           = 2,
	EWwiseAudioComponentSpriteSize_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WwiseAudio.WwiseAudioEventTrackKey
// 0x0020
struct FWwiseAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 AkAudioEvent;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class FString                                      EventName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct WwiseAudio.WwiseLocationOverride
// 0x0020
struct FWwiseLocationOverride
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwisePlaybackInstance
// 0x0018
struct FWwisePlaybackInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct WwiseAudio.WwiseBankEfficiencyReportDatum
// 0x0068
struct FWwiseBankEfficiencyReportDatum
{
	class FString                                      BankName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                TotalEvents;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0014(0x0050) UNKNOWN PROPERTY: SetProperty WwiseAudio.WwiseBankEfficiencyReportDatum.LoadedEvents
};

// ScriptStruct WwiseAudio.WwiseMusicTiming
// 0x0014
struct FWwiseMusicTiming
{
	float                                              CurrentPositionInBeats;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BeatDurationInSeconds;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BarLengthInBeats;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SegementLengthInBeats;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GridLengthInBeats;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.MovieSceneWwiseSectionTemplateData
// 0x0038
struct FMovieSceneWwiseSectionTemplateData
{
	EWwiseTrackDirectionality                          PlaybackDirection;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 WwiseEventStart;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEventStop;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              EmitterRadius;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPlaythrough;                                        // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsLoopingEvent;                                          // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	int                                                RowIdx;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0024(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0028(0x0004)
	struct FFrameRate                                  CachedFrameRate;                                          // 0x002C(0x0008)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct WwiseAudio.MovieSceneWwiseSectionTemplate
// 0x0038 (0x0058 - 0x0020)
struct FMovieSceneWwiseSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneWwiseSectionTemplateData         TemplateData;                                             // 0x0020(0x0038)
};

// ScriptStruct WwiseAudio.WwiseAmbSoundCheckpointRecord
// 0x0001
struct FWwiseAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseExternalSourceMediaInfo
// 0x000C
struct FWwiseExternalSourceMediaInfo
{
	uint32_t                                           ExternalSourceCookie;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           FileID;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalize;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct WwiseAudio.WwiseEventConfiguration
// 0x0018
struct FWwiseEventConfiguration
{
	class UWwiseEvent*                                 Event;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWwiseExternalSourceMediaInfo>       ExternalSourceMedia;                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct WwiseAudio.WwiseEmitterAcousticData
// 0x001C
struct FWwiseEmitterAcousticData
{
	float                                              DryVolume;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ERVolume;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LRVolume;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LRDuration;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DirectionAmbiX;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DirectionAmbiY;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
};

// ScriptStruct WwiseAudio.WwiseEffectInfo
// 0x000C
struct FWwiseEffectInfo
{
	int                                                EffectID;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetVolume;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryVolume;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WwiseAudio.WwiseEmitter
// 0x02F0
struct FWwiseEmitter
{
	unsigned char                                      UnknownData00[0x2D8];                                     // 0x0000(0x02D8) MISSED OFFSET
	class UWwiseAudioComponent*                        OwnerComponent;                                           // 0x02D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
};

// ScriptStruct WwiseAudio.WwiseEmitterSource
// 0x0040
struct FWwiseEmitterSource
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Gain;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct WwiseAudio.WwiseExternalAssetData
// 0x0030
struct FWwiseExternalAssetData
{
	TSoftObjectPtr<class UWwiseEvent>                  WwiseEventPtr;                                            // 0x0000(0x0028) (Edit)
	float                                              EstimatedDuration;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct WwiseAudio.WwiseAcousticEmulationParameters
// 0x0018
struct FWwiseAcousticEmulationParameters
{
	int                                                EarlyReflectionsOffsetTimeMs;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlobalWetnessScaleDB;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecayDistance;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionDecay;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LateReflectionDecay;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DryVolumeCorrectionDistance;                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
