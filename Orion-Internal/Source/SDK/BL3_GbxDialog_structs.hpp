#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_MovieScene_classes.hpp"
#include "BL3_WwiseAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxDialog.EVoiceOfGodSpeaker
enum class EVoiceOfGodSpeaker : uint8_t
{
	INVALID                        = 0,
	Lilith_Normal                  = 1,
	Tannis_Normal                  = 2,
	EVoiceOfGodSpeaker_MAX         = 3
};


// Enum GbxDialog.ETimeSlotEchoPreference
enum class ETimeSlotEchoPreference : uint8_t
{
	AutoTransition                 = 0,
	LiveOnly                       = 1,
	EchoOnly                       = 2,
	ETimeSlotEchoPreference_MAX    = 3
};


// Enum GbxDialog.ECachedResultLifetime
enum class ECachedResultLifetime : uint8_t
{
	OneTest                        = 0,
	OneSearch                      = 1,
	ManualReset                    = 2,
	ECachedResultLifetime_MAX      = 3
};


// Enum GbxDialog.EDialogParameterMappingSourceType
enum class EDialogParameterMappingSourceType : uint8_t
{
	Parameter                      = 0,
	Constant                       = 1,
	Counter                        = 2,
	Flag                           = 3,
	EDialogParameterMappingSourceType_MAX = 4
};


// Enum GbxDialog.EDialogImplementationStatus
enum class EDialogImplementationStatus : uint8_t
{
	Unimplemented                  = 0,
	Implemented                    = 1,
	EDialogImplementationStatus_MAX = 2
};


// Enum GbxDialog.EDialogParameterPrimaryType
enum class EDialogParameterPrimaryType : uint8_t
{
	Event                          = 0,
	Object                         = 1,
	Enum                           = 2,
	Number                         = 3,
	Boolean                        = 4,
	EDialogParameterPrimaryType_MAX = 5
};


// Enum GbxDialog.EGbxDialogQuietTimeScope
enum class EGbxDialogQuietTimeScope : uint8_t
{
	Individual                     = 0,
	SmallArea                      = 1,
	Area                           = 2,
	EGbxDialogQuietTimeScope_MAX   = 3
};


// Enum GbxDialog.ELineScorePriorityMode
enum class ELineScorePriorityMode : uint8_t
{
	RetainLowerScores              = 0,
	DiscardLowerScores             = 1,
	ELineScorePriorityMode_MAX     = 2
};


// Enum GbxDialog.EDialogDecisionTestResult
enum class EDialogDecisionTestResult : uint8_t
{
	ConditionIsTrue                = 0,
	ConditionIsFalse               = 1,
	TestIsInvalid                  = 2,
	EDialogDecisionTestResult_MAX  = 3
};


// Enum GbxDialog.EGbxDialogConversationStatus
enum class EGbxDialogConversationStatus : uint8_t
{
	NotFound                       = 0,
	Pending                        = 1,
	Canceled                       = 2,
	Started                        = 3,
	HoldingConversation            = 4,
	Interrupted                    = 5,
	Succeeded                      = 6,
	EGbxDialogConversationStatus_MAX = 7
};


// Enum GbxDialog.EGbxDialogInterruptStrategy
enum class EGbxDialogInterruptStrategy : uint8_t
{
	StopOthers                     = 0,
	SpeakOverOthers                = 1,
	EGbxDialogInterruptStrategy_MAX = 2
};


// Enum GbxDialog.EGbxDialogSocialStrategy
enum class EGbxDialogSocialStrategy : uint8_t
{
	Normal                         = 0,
	Selfish                        = 1,
	NonSocial                      = 2,
	EGbxDialogSocialStrategy_MAX   = 3
};


// Enum GbxDialog.EGbxDialogCompileStatus
enum class EGbxDialogCompileStatus : uint8_t
{
	UpToDate                       = 0,
	Dirty                          = 1,
	Error                          = 2,
	EGbxDialogCompileStatus_MAX    = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxDialog.DialogParameterValue
// 0x0038
struct FDialogParameterValue
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogContext
// 0x0218
struct FDialogContext
{
	unsigned char                                      UnknownData00[0x218];                                     // 0x0000(0x0218) MISSED OFFSET
};

// ScriptStruct GbxDialog.DistributedSpeakerInfo
// 0x0018
struct FDistributedSpeakerInfo
{
	class UGbxDialogComponent*                         DistributedSpeaker;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TWeakObjectPtr<class UGbxDialogComponent>>  RepresentedSpeakers;                                      // 0x0008(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct GbxDialog.DialogSequenceNotifyDelegate
// 0x0010
struct FDialogSequenceNotifyDelegate
{
	struct FScriptDelegate                             OnNotify;                                                 // 0x0000(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct GbxDialog.DialogSequenceDelegates
// 0x0070
struct FDialogSequenceDelegates
{
	struct FScriptDelegate                             OnFinished;                                               // 0x0000(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	TMap<struct FName, struct FDialogSequenceNotifyDelegate> Notifies;                                                 // 0x0020(0x0050) (ZeroConstructor)
};

// ScriptStruct GbxDialog.DialogBlackboardCounterValueMap
// 0x0050
struct FDialogBlackboardCounterValueMap
{
	TMap<class UDialogEnumValue*, float>               Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct GbxDialog.DialogConversation
// 0x000C
struct FDialogConversation
{
	int                                                ConversationID;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UWorld>                       ConversationWorld;                                        // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxDialog.RecentConversationInfo
// 0x0028
struct FRecentConversationInfo
{
	double                                             ExpirationTime;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APlayerController>            PreferredPlayer;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LastKeyActor;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastKeyLocation;                                          // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GbxDialog.RecentDialogPerformanceInfo
// 0x0020
struct FRecentDialogPerformanceInfo
{
	double                                             ExpirationTime;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SequenceID;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UGbxDialogComponent>          Speaker;                                                  // 0x000C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UDialogPerformanceData>       Performance;                                              // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogThread
// 0x02C0
struct FDialogThread
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FDialogContext                              Context;                                                  // 0x0010(0x0218)
	class UGbxDialogComponent*                         Speaker;                                                  // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDialogPerformanceData*                      Performance;                                              // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     QuietTimeKey;                                             // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     GameCustomizationObject;                                  // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0248(0x0078) MISSED OFFSET
};

// ScriptStruct GbxDialog.QuietTimeTracker
// 0x0050
struct FQuietTimeTracker
{
	TWeakObjectPtr<class UObject>                      KeyObject;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      ScopeObject;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UQuietTimePredicate*                         ScopePredicate;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0018(0x0038) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogParameterMapping
// 0x0028
struct FDialogParameterMapping
{
	class UDialogParameter*                            TargetParameter;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EDialogParameterMappingSourceType                  SourceType;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UObject*                                     SourceObject;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceObjectSubContext;                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SourceNumber;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogSelectorFunctionCallInstance
// 0x0018
struct FDialogSelectorFunctionCallInstance
{
	class UDialogSelectorFunction*                     Function;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FDialogParameterMapping>             ParameterMappings;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxDialog.DialogConditionRequirement
// 0x0020
struct FDialogConditionRequirement
{
	struct FDialogSelectorFunctionCallInstance         SelectorCall;                                             // 0x0000(0x0018) (Edit)
	bool                                               bRequiredResult;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogSelectionCondition
// 0x0010
struct FDialogSelectionCondition
{
	TArray<struct FDialogConditionRequirement>         Requirements;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxDialog.DialogTimeSlotReference
// 0x0040
struct FDialogTimeSlotReference
{
	TSoftObjectPtr<class UDialogScriptData>            Script;                                                   // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FGuid                                       Guid;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UDialogTimeSlotData*                         CachedTimeSlot;                                           // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxDialog.DialogLookupDecision
// 0x0028
struct FDialogLookupDecision
{
	struct FDialogSelectorFunctionCallInstance         Call;                                                     // 0x0000(0x0018) (Edit)
	ECachedResultLifetime                              CachedLifetime;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	uint32_t                                           DecisionNumber;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogDecisionNode
// 0x001C
struct FDialogDecisionNode
{
	int                                                Parent;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Decision;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TrueResultChild;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FalseResultChild;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UnrelatedResultChild;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ResultBucket;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxChildQuality;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxDialog.DialogLookupResult
// 0x0010
struct FDialogLookupResult
{
	class UDialogLineData*                             Line;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Quality;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogLookupResultBucket
// 0x0010
struct FDialogLookupResultBucket
{
	TArray<struct FDialogLookupResult>                 Results;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxDialog.DialogDecisionTree
// 0x0030
struct FDialogDecisionTree
{
	TArray<struct FDialogLookupDecision>               Decisions;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDialogDecisionNode>                 Nodes;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDialogLookupResultBucket>           ResultBuckets;                                            // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxDialog.DialogMoodInfo
// 0x0008
struct FDialogMoodInfo
{
	class UClass*                                      Action;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxDialog.ConditionalEchoData
// 0x0010
struct FConditionalEchoData
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCharacterEchoDataBase*                      EchoData;                                                 // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxDialog.DialogParameterType
// 0x0010
struct FDialogParameterType
{
	EDialogParameterPrimaryType                        PrimaryType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UDialogEnumType*                             SecondaryType;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxDialog.DialogPerformanceNotify
// 0x0010
struct FDialogPerformanceNotify
{
	float                                              TimeFraction;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxDialog.CurrentDialogPerformanceInfo
// 0x0060
struct FCurrentDialogPerformanceInfo
{
	int                                                DialogThreadID;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DialogSequenceID;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDialogPerformanceData*                      Performance;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FWwisePlaybackInstance                      PlayingAudioInstance;                                     // 0x0010(0x0018)
	bool                                               bForcingOwnerRelevantForEcho;                             // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0029(0x0037) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogScriptPinnedRef
// 0x0010
struct FDialogScriptPinnedRef
{
	TWeakObjectPtr<class UDialogBlackboard>            Blackboard;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDialogScriptData*                           Script;                                                   // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxDialog.InitialDialogInProgress
// 0x0018
struct FInitialDialogInProgress
{
	int                                                DialogThreadID;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DialogSequenceID;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDialogPerformanceData*                      Performance;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayTime;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogBlackboardFlagValue
// 0x0010
struct FDialogBlackboardFlagValue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GbxDialog.DialogBlackboardFlagValueMap
// 0x0050
struct FDialogBlackboardFlagValueMap
{
	TMap<class UDialogEnumValue*, struct FDialogBlackboardFlagValue> Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct GbxDialog.DialogEventSubscription
// 0x0018
struct FDialogEventSubscription
{
	struct FSoftObjectPath                             ReferencerTimeSlot;                                       // 0x0000(0x0018)
};

// ScriptStruct GbxDialog.DialogScopeParameterInfo
// 0x0018
struct FDialogScopeParameterInfo
{
	class UObject*                                     Target;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FDialogParameterMapping>             ParameterMappings;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxDialog.MovieSceneDialogSectionTemplateData
// 0x0080
struct FMovieSceneDialogSectionTemplateData
{
	struct FDialogTimeSlotReference                    Dialog;                                                   // 0x0000(0x0040) (Edit)
	bool                                               bPlayThroughDialogSystem;                                 // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSubtitleOnly;                                            // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FText                                       ManualSubtitleText;                                       // 0x0048(0x0028) (Edit)
	float                                              ManualSubtitleDuration;                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UDialogNameTag*                              SubtitleNameTag;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RowIdx;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0074(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0078(0x0004)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxDialog.MovieSceneDialogSectionTemplate
// 0x0080 (0x00A0 - 0x0020)
struct FMovieSceneDialogSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneDialogSectionTemplateData        TemplateData;                                             // 0x0020(0x0080)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
