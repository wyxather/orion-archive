#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxDialog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxDialog.AnimNotify_DialogEvent
// 0x0058 (0x0090 - 0x0038)
class UAnimNotify_DialogEvent : public UAnimNotify
{
public:
	class UDialogEvent*                                DialogEvent;                                              // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<class UDialogParameter*, struct FDialogParameterValue> ParameterValues;                                          // 0x0040(0x0050) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.AnimNotify_DialogEvent");
		return ptr;
	}

};


// Class GbxDialog.CharacterEchoDataBase
// 0x0010 (0x0040 - 0x0030)
class UCharacterEchoDataBase : public UGbxDataAsset
{
public:
	TArray<class FString>                              AvailableVoGMoodKeyframes;                                // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.CharacterEchoDataBase");
		return ptr;
	}

};


// Class GbxDialog.DialogActionBlueprintImplementation
// 0x0000 (0x0030 - 0x0030)
class UDialogActionBlueprintImplementation : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogActionBlueprintImplementation");
		return ptr;
	}


	void Execute(const struct FDialogContext& Context);
};


// Class GbxDialog.GbxDialogDataAsset
// 0x0010 (0x0040 - 0x0030)
class UGbxDialogDataAsset : public UGbxDataAsset
{
public:
	struct FGuid                                       Guid;                                                     // 0x0030(0x0010) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.GbxDialogDataAsset");
		return ptr;
	}

};


// Class GbxDialog.DialogActionFunction
// 0x0018 (0x0058 - 0x0040)
class UDialogActionFunction : public UGbxDialogDataAsset
{
public:
	TArray<class UDialogParameter*>                    Parameters;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      BlueprintImplementation;                                  // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogActionFunction");
		return ptr;
	}

};


// Class GbxDialog.DialogAudioComponentProvider
// 0x0000 (0x0028 - 0x0028)
class UDialogAudioComponentProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogAudioComponentProvider");
		return ptr;
	}

};


// Class GbxDialog.DialogAudioComponentProvider_OcclusionResistant
// 0x0010 (0x0038 - 0x0028)
class UDialogAudioComponentProvider_OcclusionResistant : public UDialogAudioComponentProvider
{
public:
	float                                              OcclusionWeight;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       ComponentTag;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogAudioComponentProvider_OcclusionResistant");
		return ptr;
	}

};


// Class GbxDialog.DialogBehaviorPreset
// 0x0000 (0x0030 - 0x0030)
class UDialogBehaviorPreset : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogBehaviorPreset");
		return ptr;
	}

};


// Class GbxDialog.DialogBlackboard
// 0x29D0 (0x29F8 - 0x0028)
class UDialogBlackboard : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TMap<class UDialogNameTag*, struct FDistributedSpeakerInfo> DistributedSpeakers;                                      // 0x0030(0x0050) (ZeroConstructor, Transient)
	TMap<int, struct FDialogSequenceDelegates>         PlayingSequenceDelegates;                                 // 0x0080(0x0050) (ZeroConstructor, Transient)
	class UDialogLookupSystem*                         LookupSystem;                                             // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDialogControlSystem*                        ControlSystem;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UGbxDialogComponent*>                 RegisteredSpeakers;                                       // 0x00E0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UDialogScriptData*>                   ActiveScripts;                                            // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0100(0x0050) UNKNOWN PROPERTY: SetProperty GbxDialog.DialogBlackboard.ActivePureEchoNameTags
	TMap<class UDialogScriptData*, int>                PinnedScriptRefCounts;                                    // 0x0150(0x0050) (ZeroConstructor)
	TMap<class UObject*, struct FDialogBlackboardCounterValueMap> CounterValues;                                            // 0x01A0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x01F0(0x00A0) MISSED OFFSET
	class AActor*                                      PureEchoSpeakerHost;                                      // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2690];                                    // 0x0298(0x2690) MISSED OFFSET
	struct FDialogConversation                         ConversationForDialogLookup;                              // 0x2928(0x000C) (Transient)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2934(0x0004) MISSED OFFSET
	TWeakObjectPtr<class APlayerController>            SuggestedPlayerForNextConversation;                       // 0x2938(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       SuggestedKeyActorForNextConversation;                     // 0x2940(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SuggestedKeyLocationForNextConversation;                  // 0x2948(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2954(0x0004) MISSED OFFSET
	TMap<int, struct FRecentConversationInfo>          RecentConversationInfo;                                   // 0x2958(0x0050) (ZeroConstructor)
	TMap<int, struct FRecentDialogPerformanceInfo>     RecentPerformances;                                       // 0x29A8(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogBlackboard");
		return ptr;
	}

};


// Class GbxDialog.QuietTimePredicate
// 0x0000 (0x0028 - 0x0028)
class UQuietTimePredicate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.QuietTimePredicate");
		return ptr;
	}

};


// Class GbxDialog.QuietTimePredicate_BlockStuff
// 0x0038 (0x0060 - 0x0028)
class UQuietTimePredicate_BlockStuff : public UQuietTimePredicate
{
public:
	TArray<class UObject*>                             BlockDialogScopeObjects;                                  // 0x0028(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               BlockKinds;                                               // 0x0038(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDialogStyle*>                        BlockStyles;                                              // 0x0048(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	class UDialogNameTag*                              OnlyForCharacter;                                         // 0x0058(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.QuietTimePredicate_BlockStuff");
		return ptr;
	}

};


// Class GbxDialog.DialogControlSystem
// 0x0068 (0x0090 - 0x0028)
class UDialogControlSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FDialogThread>                       DialogThreads;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FQuietTimeTracker>                   ActiveQuietTimes;                                         // 0x0040(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	class UDialogLookupSystem*                         LookupSystem;                                             // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDialogBlackboard*                           Blackboard;                                               // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxDialogSettings*                          Settings;                                                 // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UWorld>                       World;                                                    // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFakePauseMode;                                           // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInCinematicMode;                                         // 0x0081(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
	double                                             PauseModeLastFrameTime;                                   // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogControlSystem");
		return ptr;
	}

};


// Class GbxDialog.DialogEnumType
// 0x0000 (0x0040 - 0x0040)
class UDialogEnumType : public UGbxDialogDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogEnumType");
		return ptr;
	}

};


// Class GbxDialog.DialogEnumValue
// 0x0020 (0x0060 - 0x0040)
class UDialogEnumValue : public UGbxDialogDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	class UDialogEnumType*                             EnumType;                                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxUIName*                                  UIName;                                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictedQualifier;                                     // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogEnumValue");
		return ptr;
	}

};


// Class GbxDialog.DialogEnumValueInterface
// 0x0000 (0x0028 - 0x0028)
class UDialogEnumValueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogEnumValueInterface");
		return ptr;
	}


	class UDialogEnumValue* GetEnumValue(class UDialogEnumType* EnumType);
};


// Class GbxDialog.DialogEvent
// 0x0020 (0x0060 - 0x0040)
class UDialogEvent : public UGbxDialogDataAsset
{
public:
	TArray<class UDialogParameter*>                    Parameters;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               PerformanceNotifyNames;                                   // 0x0050(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogEvent");
		return ptr;
	}

};


// Class GbxDialog.DialogEventList
// 0x0000 (0x0040 - 0x0040)
class UDialogEventList : public UGbxDialogDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogEventList");
		return ptr;
	}

};


// Class GbxDialog.DialogLineData
// 0x00A8 (0x00E8 - 0x0040)
class UDialogLineData : public UGbxDialogDataAsset
{
public:
	ELineScorePriorityMode                             ScorePriorityMode;                                        // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FDialogSelectionCondition>           SelectionConditions;                                      // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	class UDialogEnumValue*                            SpeakingCharacter;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogEnumValue*                            CharacterQualifier;                                       // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UDialogPerformanceData*>              Performances;                                             // 0x0068(0x0010) (Edit, ExportObject, ZeroConstructor)
	class FString                                      VoGMoodKey;                                               // 0x0078(0x0010) (Edit, ZeroConstructor)
	struct FDialogTimeSlotReference                    FollowupTimeSlot;                                         // 0x0088(0x0040) (Edit)
	class UDialogEvent*                                FollowupEvent;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FDialogParameterMapping>             FollowupParameterMappings;                                // 0x00D0(0x0010) (Edit, ZeroConstructor)
	bool                                               bSequential;                                              // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogLineData");
		return ptr;
	}

};


// Class GbxDialog.DialogLookupSystem
// 0x00E0 (0x0108 - 0x0028)
class UDialogLookupSystem : public UObject
{
public:
	class UDialogControlSystem*                        ControlSystem;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDialogBlackboard*                           Blackboard;                                               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<class UDialogEvent*, struct FDialogDecisionTree> EventTriggeringDecisionTrees;                             // 0x0038(0x0050) (ZeroConstructor, Transient)
	struct FDialogDecisionTree                         ConditionTriggeringDecisionTree;                          // 0x0088(0x0030) (Transient)
	TMap<class UDialogScriptData*, int>                ActiveScriptRegistrationIDs;                              // 0x00B8(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogLookupSystem");
		return ptr;
	}

};


// Class GbxDialog.DialogNameTagMoodData
// 0x0050 (0x0080 - 0x0030)
class UDialogNameTagMoodData : public UGbxDataAsset
{
public:
	TMap<struct FName, struct FDialogMoodInfo>         MoodData;                                                 // 0x0030(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogNameTagMoodData");
		return ptr;
	}

};


// Class GbxDialog.DialogNameTag
// 0x00B8 (0x00E8 - 0x0030)
class UDialogNameTag : public UGbxDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UDialogEnumValue*                            NameTagEnumValue;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UDialogEnumValue*>                    SupportedQualifiers;                                      // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UDialogNameTag*                              ParentNameTag;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVoiceOfGodSpeaker                                 VoGSpeaker;                                               // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UCharacterEchoDataBase*                      EchoData;                                                 // 0x0060(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FConditionalEchoData>                ConditionalAlternateEchoData;                             // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               bUsableForPureEchoes;                                     // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDistributedSpeaker;                                      // 0x0079(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	int                                                VoicePitchOffset;                                         // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  CustomizationRTPC;                                        // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CustomizationRTPCValue;                                   // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UDialogNameTagMoodData*                      MoodDataAsset;                                            // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FDialogMoodInfo>         MoodData;                                                 // 0x0098(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogNameTag");
		return ptr;
	}

};


// Class GbxDialog.DialogParameter
// 0x0020 (0x0060 - 0x0040)
class UDialogParameter : public UGbxDialogDataAsset
{
public:
	class UDialogParameter*                            DefaultInputParameter;                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDialogParameterType                        Type;                                                     // 0x0048(0x0010) (Edit)
	bool                                               bForceDecisionsToAlwaysRetest;                            // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogParameter");
		return ptr;
	}

};


// Class GbxDialog.DialogPerformanceData
// 0x00A0 (0x00E0 - 0x0040)
class UDialogPerformanceData : public UGbxDialogDataAsset
{
public:
	struct FText                                       Text;                                                     // 0x0040(0x0028) (Edit)
	struct FGbxTriggerProperty                         TriggerPlayWwiseEventPreview;                             // 0x0058(0x0001) (Edit, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseExternalMediaTemplate;                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EstimatedDuration;                                        // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           WwiseEventShortID;                                        // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Action;                                                   // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActionWeight;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FName                                       MoodName;                                                 // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoodWeight;                                               // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableEarlyFinish;                                       // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              EarlyFinishTimeFraction;                                  // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FDialogPerformanceNotify>            Notifies;                                                 // 0x00A0(0x0010) (Edit, ZeroConstructor)
	class UDialogStyle*                                Style;                                                    // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutputDelay;                                              // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              QuietTime;                                                // 0x00C0(0x0008) (Edit)
	EGbxDialogQuietTimeScope                           QuietTimeScope;                                           // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	struct FFloatInterval                              DialogKindCooldownTime;                                   // 0x00CC(0x0008) (Edit)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class UPerformanceEchoDataBase*                    EchoData;                                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogPerformanceData");
		return ptr;
	}


	void PlayWwiseEventPreview();
};


// Class GbxDialog.DialogScriptData
// 0x00A8 (0x00E8 - 0x0040)
class UDialogScriptData : public UGbxDialogDataAsset
{
public:
	TArray<class UDialogTimeSlotData*>                 TimeSlots;                                                // 0x0040(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UDialogNameTag*>                      PureEchoNameTags;                                         // 0x0050(0x0010) (Edit, ZeroConstructor)
	TMap<class UDialogEvent*, struct FDialogDecisionTree> EventTriggeredDecisionTrees;                              // 0x0060(0x0050) (Edit, ZeroConstructor)
	struct FDialogDecisionTree                         OtherConditionTriggeredDecisionTree;                      // 0x00B0(0x0030) (Edit)
	class UObject*                                     FaceFXAnimSet;                                            // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogScriptData");
		return ptr;
	}

};


// Class GbxDialog.DialogSelectorFunction
// 0x0020 (0x0060 - 0x0040)
class UDialogSelectorFunction : public UGbxDialogDataAsset
{
public:
	TArray<class UDialogParameter*>                    Parameters;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bTriggeringCondition;                                     // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECachedResultLifetime                              CachedResultLifetime;                                     // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	class UDialogSelectorImplementation*               Implementation;                                           // 0x0058(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogSelectorFunction");
		return ptr;
	}

};


// Class GbxDialog.DialogSelectorImplementation
// 0x0008 (0x0030 - 0x0028)
class UDialogSelectorImplementation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation");
		return ptr;
	}


	void PerformTest(const struct FDialogContext& Context, EDialogDecisionTestResult* Result);
};


// Class GbxDialog.DialogSelectorImplementation_CheckDistance
// 0x0020 (0x0050 - 0x0030)
class UDialogSelectorImplementation_CheckDistance : public UDialogSelectorImplementation
{
public:
	class UDialogParameter*                            FromActorParam;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDialogParameter*                            ToActorParam;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bUseCustomDistance;                                       // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              CustomDistance;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bTrueIfCloser;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation_CheckDistance");
		return ptr;
	}

};


// Class GbxDialog.DialogSelectorImplementation_CheckNameTag
// 0x0010 (0x0040 - 0x0030)
class UDialogSelectorImplementation_CheckNameTag : public UDialogSelectorImplementation
{
public:
	class UDialogParameter*                            WhoParam;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDialogParameter*                            NameTagParam;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation_CheckNameTag");
		return ptr;
	}

};


// Class GbxDialog.DialogSelectorImplementation_Equality
// 0x0010 (0x0040 - 0x0030)
class UDialogSelectorImplementation_Equality : public UDialogSelectorImplementation
{
public:
	class UDialogParameter*                            ParamA;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDialogParameter*                            ParamB;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation_Equality");
		return ptr;
	}

};


// Class GbxDialog.DialogSelectorImplementation_IsPreferredPlayer
// 0x0008 (0x0038 - 0x0030)
class UDialogSelectorImplementation_IsPreferredPlayer : public UDialogSelectorImplementation
{
public:
	class UDialogParameter*                            WhoParam;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogSelectorImplementation_IsPreferredPlayer");
		return ptr;
	}

};


// Class GbxDialog.DialogSpeakerInterface
// 0x0000 (0x0028 - 0x0028)
class UDialogSpeakerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogSpeakerInterface");
		return ptr;
	}


	bool CanPerformThisDialog(class UDialogPerformanceData* Performance);
};


// Class GbxDialog.DialogStyle
// 0x0038 (0x0068 - 0x0030)
class UDialogStyle : public UGbxDataAsset
{
public:
	EGbxDialogSocialStrategy                           SocialStrategy;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInterruptSamePriority;                                   // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxDialogInterruptStrategy                        InterruptStrategy;                                        // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	int                                                Priority;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int8_t                                             SubtitlePriority;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              PatientWaitTime;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTime;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpeakableWhenDead;                                       // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInterruptableByHighPriorityVox;                          // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayableWhenPaused;                                      // 0x0046(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayableDuringCinematic;                                 // 0x0047(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Kind;                                                     // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCallout;                                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UDialogAudioComponentProvider*               AudioComponentProvider;                                   // 0x0058(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLocalOnly;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogStyle");
		return ptr;
	}

};


// Class GbxDialog.DialogSystemEchoManagerInterface
// 0x0000 (0x0028 - 0x0028)
class UDialogSystemEchoManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogSystemEchoManagerInterface");
		return ptr;
	}

};


// Class GbxDialog.DialogTimeSlotData
// 0x0070 (0x00B0 - 0x0040)
class UDialogTimeSlotData : public UGbxDialogDataAsset
{
public:
	struct FGbxTriggerProperty                         TriggerPreviewAudio;                                      // 0x0040(0x0001) (Edit, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FDialogTimeSlotReference>            CompositeAudioAdditionalTimeSlots;                        // 0x0048(0x0010) (Edit, ZeroConstructor)
	ETimeSlotEchoPreference                            EchoPreference;                                           // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UDialogParameter*>                    Parameters;                                               // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<class UDialogLineData*>                     Lines;                                                    // 0x0070(0x0010) (Edit, ExportObject, ZeroConstructor)
	struct FDialogDecisionTree                         DecisionTree;                                             // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.DialogTimeSlotData");
		return ptr;
	}


	void PreviewAudio();
};


// Class GbxDialog.GameDialogSystemCustomizationInterface
// 0x0000 (0x0028 - 0x0028)
class UGameDialogSystemCustomizationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.GameDialogSystemCustomizationInterface");
		return ptr;
	}

};


// Class GbxDialog.GbxDialogBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxDialogBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.GbxDialogBlueprintLibrary");
		return ptr;
	}


	void STATIC_WaitForDialog(const struct FDialogConversation& Conversation, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_TestDialogSelector(class UObject* WorldContextObject, class UDialogSelectorFunction* Selector, const struct FDialogContext& InputParameters);
	void STATIC_StopActiveDialog(class UObject* Target, bool bIncludeDeathDialog);
	void STATIC_SetNextDialogPlayerHints(class UObject* WorldContextObject, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location);
	void STATIC_SetDialogGameCustomizationMetadata(class UObject* WorldContextObject, int SequenceID, class UObject* Object, int Cookie);
	void STATIC_SetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue, bool Value, float Duration);
	void STATIC_SetDialogContextParameter(class UDialogParameter* Parameter, class UObject* ObjectValue, float FloatValue, bool bBoolValue, struct FDialogContext* Context);
	void STATIC_SetConversationPlayerHints(const struct FDialogConversation& Conversation, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location);
	void STATIC_ResolveDialogTimeSlotReference(const struct FDialogTimeSlotReference& Reference, class UDialogTimeSlotData** TimeSlot, class UDialogScriptData** Script);
	void STATIC_PlaceRegionalDialogHold(class UObject* WorldContextObject, const struct FName& HoldName, const struct FVector& Location, float Radius, class UQuietTimePredicate* Rules, float Duration);
	void STATIC_PlaceGlobalDialogHold(class UObject* WorldContextObject, const struct FName& HoldName, class UQuietTimePredicate* Rules, float Duration);
	struct FDialogConversation STATIC_NewDialogConversation(class UObject* WorldContextObject, class AActor* KeyActor, class UDialogNameTag* KeySpeakerName, const struct FVector& KeyLocation);
	struct FDialogContext STATIC_NewDialogContext();
	void STATIC_InterruptDialogInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius);
	void STATIC_InterruptConversation(const struct FDialogConversation& Conversation);
	bool STATIC_GetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue);
	TArray<class FString> STATIC_GetDialogContextParameterSummary(const struct FDialogContext& Context);
	void STATIC_GetDialogContextParameter(const struct FDialogContext& Context, class UDialogParameter* Parameter, class UObject** ObjectValue, float* FloatValue, bool* bBoolValue);
	EGbxDialogConversationStatus STATIC_GetConversationStatus(const struct FDialogConversation& Conversation);
	bool STATIC_FinishTriggerDialog(class UObject* WorldContextObject, class UDialogEvent* Event, const struct FDialogConversation& ContinueConversation, float StartDelay, struct FDialogContext* Context, struct FDialogConversation* Conversation, int* SequenceID);
	bool STATIC_FinishSpeak(class UObject* WorldContextObject, const struct FDialogTimeSlotReference& TimeSlotRef, class UGbxDialogComponent* OptionalSpeaker, const struct FDialogConversation& ContinueConversation, float StartDelay, float OverrideMaxWait, struct FDialogContext* Context, struct FDialogConversation* Conversation, int* SequenceID);
	bool STATIC_FindOrCreateNamedSpeaker(class UDialogNameTag* NameTag, bool bIncludePureEchoSpeakers, bool bCreateIfNotFound, class UGbxDialogComponent** Speaker);
	bool STATIC_EnqueueDialogPerformance(class UObject* WorldContextObject, class UGbxDialogComponent* Speaker, class UDialogPerformanceData* Performance, float StartDelay, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, int* DialogPlaybackSequence);
	void STATIC_DeactivateDialogScript(class UObject* WorldContextObject, TSoftObjectPtr<class UDialogScriptData> SoftScript, class UDialogScriptData* Script);
	EDialogDecisionTestResult STATIC_ConvertBoolToDialogTestResult(bool bValue);
	void STATIC_CancelDialogBlockingHold(class UObject* WorldContextObject, const struct FName& HoldName);
	void STATIC_BindToDialogSequenceFinished(class UObject* WorldContextObject, int PlayingSequenceID, const struct FScriptDelegate& Delegate);
	void STATIC_BindToDialogNotify(class UObject* WorldContextObject, int PlayingSequenceID, const struct FName& NotifyName, const struct FScriptDelegate& Delegate);
	void STATIC_ActivateDialogScript(class UObject* WorldContextObject, TSoftObjectPtr<class UDialogScriptData> SoftScript, class UDialogScriptData* Script);
};


// Class GbxDialog.GbxDialogComponent
// 0x0150 (0x02C8 - 0x0178)
class UGbxDialogComponent : public UActorComponent
{
public:
	TArray<class UDialogNameTag*>                      RandomNameTags;                                           // 0x0178(0x0010) (Edit, ZeroConstructor)
	TArray<class UDialogScriptData*>                   DialogScripts;                                            // 0x0188(0x0010) (Edit, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnStartedPerformance;                                     // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDialogNameTag*                              NameTag;                                                  // 0x01A8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FCurrentDialogPerformanceInfo               CurrentPerformance;                                       // 0x01B0(0x0060) (Transient)
	struct FCurrentDialogPerformanceInfo               PendingPerformance;                                       // 0x0210(0x0060) (Transient)
	TArray<struct FDialogScriptPinnedRef>              PinnedScripts;                                            // 0x0270(0x0010) (ZeroConstructor, Transient)
	bool                                               bPureEchoSpeaker;                                         // 0x0280(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UWwiseAudioComponent*                        DistributedAudioComponent;                                // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bTransientEchoSpeaker;                                    // 0x0290(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              TransientEchoSpeakerIdleTime;                             // 0x0294(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSpeakDirectlyToPlayer;                                   // 0x0298(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class APlayerController*                           DirectSpeakerTarget;                                      // 0x02A0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPositional;                                              // 0x02A8(0x0001) (Edit, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDistributedSpeaker;                                      // 0x02A9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x02AA(0x0006) MISSED OFFSET
	struct FInitialDialogInProgress                    InitialDialogInProgress;                                  // 0x02B0(0x0018) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.GbxDialogComponent");
		return ptr;
	}


	void StopPerformance(int DialogThreadID, bool bIncludeDeathDialog);
	void StartPerformance(int DialogThreadID, int DialogSequenceID, class UDialogPerformanceData* Performance);
	void OnRep_InitialDialogInProgress();
	bool IsSpeakerClearToPlayDialog(class UDialogStyle* ProposedStyle, bool bProposingEcho, const struct FDialogConversation& ProposedConversation);
	bool IsSpeakerActive(bool bIncludePendingVO);
};


// Class GbxDialog.GbxDialogSettings
// 0x00D0 (0x0100 - 0x0030)
class UGbxDialogSettings : public UGbxDataAsset
{
public:
	class UClass*                                      PureEchoSpeakerActorClass;                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GameGlobalParametersProviderClass;                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BlackboardClass;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ConfigurePureEchoTalkerEvent;                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  EchoControlWwiseParameter;                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  PureEchoSpeakerWwiseParameter;                            // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  VoicePitchParameter;                                      // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UDialogEnumValue*>                    EnforcedRestrictionQualifiers;                            // 0x0068(0x0010) (Edit, ZeroConstructor)
	float                                              ConversationExpirationDuration;                           // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentPerformancesExpirationDuration;                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmoteWeightBlendDuration;                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmallCooldownRadius;                                      // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearRadius;                                               // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              QuietTimeMergeRadius;                                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegionRadius;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnableEchoBelowVolume;                                    // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisableEchoAboveVolume;                                   // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EchoTransitionReqiredVolumeChange;                        // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterConversationDelay;                                   // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             ConfigurationErrorSound;                                  // 0x00A8(0x0018) (Edit)
	class UDialogParameter*                            EventParameter;                                           // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogParameter*                            SelfParameter;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogParameter*                            GlobalContextParameter;                                   // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogParameter*                            ScriptContextParameter;                                   // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogParameter*                            ConversationContextParameter;                             // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogParameter*                            LineContextParameter;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogEnumType*                             CountersEnum;                                             // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogEnumType*                             FlagsEnum;                                                // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.GbxDialogSettings");
		return ptr;
	}

};


// Class GbxDialog.GlobalDialogParametersProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UGlobalDialogParametersProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.GlobalDialogParametersProviderInterface");
		return ptr;
	}


	void InitDialogContext(struct FDialogContext* Parameters);
};


// Class GbxDialog.MovieSceneDialogTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieSceneDialogTrack : public UMovieSceneNameableTrack
{
public:
	bool                                               bAllowRename;                                             // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0060(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.MovieSceneDialogTrack");
		return ptr;
	}

};


// Class GbxDialog.MovieSceneDialogSection
// 0x0070 (0x0150 - 0x00E0)
class UMovieSceneDialogSection : public UMovieSceneSection
{
public:
	struct FDialogTimeSlotReference                    Dialog;                                                   // 0x00E0(0x0040) (Edit)
	bool                                               bPlayThroughDialogSystem;                                 // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSubtitleOnly;                                            // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0122(0x0006) MISSED OFFSET
	struct FText                                       ManualSubtitleText;                                       // 0x0128(0x0028) (Edit)
	float                                              ManualSubtitleDuration;                                   // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class UDialogNameTag*                              SubtitleNameTag;                                          // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.MovieSceneDialogSection");
		return ptr;
	}

};


// Class GbxDialog.PerformanceEchoDataBase
// 0x0000 (0x0030 - 0x0030)
class UPerformanceEchoDataBase : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.PerformanceEchoDataBase");
		return ptr;
	}

};


// Class GbxDialog.PureEchoSpeakerHost
// 0x0000 (0x0458 - 0x0458)
class APureEchoSpeakerHost : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDialog.PureEchoSpeakerHost");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
