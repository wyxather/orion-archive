#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxDialog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxDialog.DialogActionBlueprintImplementation.Execute
struct UDialogActionBlueprintImplementation_Execute_Params
{
	struct FDialogContext                              Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxDialog.DialogEnumValueInterface.GetEnumValue
struct UDialogEnumValueInterface_GetEnumValue_Params
{
	class UDialogEnumType*                             EnumType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDialogEnumValue*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.DialogPerformanceData.PlayWwiseEventPreview
struct UDialogPerformanceData_PlayWwiseEventPreview_Params
{
};

// Function GbxDialog.DialogSelectorImplementation.PerformTest
struct UDialogSelectorImplementation_PerformTest_Params
{
	struct FDialogContext                              Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	EDialogDecisionTestResult                          Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.DialogSpeakerInterface.CanPerformThisDialog
struct UDialogSpeakerInterface_CanPerformThisDialog_Params
{
	class UDialogPerformanceData*                      Performance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.DialogTimeSlotData.PreviewAudio
struct UDialogTimeSlotData_PreviewAudio_Params
{
};

// Function GbxDialog.GbxDialogBlueprintLibrary.WaitForDialog
struct UGbxDialogBlueprintLibrary_WaitForDialog_Params
{
	struct FDialogConversation                         Conversation;                                             // (Parm)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.TestDialogSelector
struct UGbxDialogBlueprintLibrary_TestDialogSelector_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogSelectorFunction*                     Selector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogContext                              InputParameters;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.StopActiveDialog
struct UGbxDialogBlueprintLibrary_StopActiveDialog_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDeathDialog;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.SetNextDialogPlayerHints
struct UGbxDialogBlueprintLibrary_SetNextDialogPlayerHints_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogNameTag*                              NameTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogGameCustomizationMetadata
struct UGbxDialogBlueprintLibrary_SetDialogGameCustomizationMetadata_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cookie;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogFlag
struct UGbxDialogBlueprintLibrary_SetDialogFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogEnumValue*                            DialogEnumValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogContextParameter
struct UGbxDialogBlueprintLibrary_SetDialogContextParameter_Params
{
	struct FDialogContext                              Context;                                                  // (Parm, OutParm, ReferenceParm)
	class UDialogParameter*                            Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBoolValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.SetConversationPlayerHints
struct UGbxDialogBlueprintLibrary_SetConversationPlayerHints_Params
{
	struct FDialogConversation                         Conversation;                                             // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogNameTag*                              NameTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.ResolveDialogTimeSlotReference
struct UGbxDialogBlueprintLibrary_ResolveDialogTimeSlotReference_Params
{
	struct FDialogTimeSlotReference                    Reference;                                                // (Parm)
	class UDialogTimeSlotData*                         TimeSlot;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UDialogScriptData*                           Script;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceRegionalDialogHold
struct UGbxDialogBlueprintLibrary_PlaceRegionalDialogHold_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HoldName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuietTimePredicate*                         Rules;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceGlobalDialogHold
struct UGbxDialogBlueprintLibrary_PlaceGlobalDialogHold_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HoldName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuietTimePredicate*                         Rules;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogConversation
struct UGbxDialogBlueprintLibrary_NewDialogConversation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      KeyActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogNameTag*                              KeySpeakerName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     KeyLocation;                                              // (Parm, IsPlainOldData)
	struct FDialogConversation                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogContext
struct UGbxDialogBlueprintLibrary_NewDialogContext_Params
{
	struct FDialogContext                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.InterruptDialogInRadius
struct UGbxDialogBlueprintLibrary_InterruptDialogInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.InterruptConversation
struct UGbxDialogBlueprintLibrary_InterruptConversation_Params
{
	struct FDialogConversation                         Conversation;                                             // (Parm)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogFlag
struct UGbxDialogBlueprintLibrary_GetDialogFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogEnumValue*                            DialogEnumValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameterSummary
struct UGbxDialogBlueprintLibrary_GetDialogContextParameterSummary_Params
{
	struct FDialogContext                              Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameter
struct UGbxDialogBlueprintLibrary_GetDialogContextParameter_Params
{
	struct FDialogContext                              Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDialogParameter*                            Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBoolValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.GetConversationStatus
struct UGbxDialogBlueprintLibrary_GetConversationStatus_Params
{
	struct FDialogConversation                         Conversation;                                             // (Parm)
	EGbxDialogConversationStatus                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.FinishTriggerDialog
struct UGbxDialogBlueprintLibrary_FinishTriggerDialog_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogEvent*                                Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogContext                              Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FDialogConversation                         ContinueConversation;                                     // (Parm)
	struct FDialogConversation                         Conversation;                                             // (Parm, OutParm)
	float                                              StartDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceID;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeak
struct UGbxDialogBlueprintLibrary_FinishSpeak_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogTimeSlotReference                    TimeSlotRef;                                              // (ConstParm, Parm)
	class UGbxDialogComponent*                         OptionalSpeaker;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDialogContext                              Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FDialogConversation                         ContinueConversation;                                     // (Parm)
	struct FDialogConversation                         Conversation;                                             // (Parm, OutParm)
	float                                              StartDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SequenceID;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideMaxWait;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.FindOrCreateNamedSpeaker
struct UGbxDialogBlueprintLibrary_FindOrCreateNamedSpeaker_Params
{
	class UDialogNameTag*                              NameTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludePureEchoSpeakers;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateIfNotFound;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDialogComponent*                         Speaker;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.EnqueueDialogPerformance
struct UGbxDialogBlueprintLibrary_EnqueueDialogPerformance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDialogComponent*                         Speaker;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDialogPerformanceData*                      Performance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogConversation                         ContinueConversation;                                     // (Parm)
	struct FDialogConversation                         Conversation;                                             // (Parm, OutParm)
	int                                                DialogPlaybackSequence;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.DeactivateDialogScript
struct UGbxDialogBlueprintLibrary_DeactivateDialogScript_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UDialogScriptData>            SoftScript;                                               // (Parm)
	class UDialogScriptData*                           Script;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.ConvertBoolToDialogTestResult
struct UGbxDialogBlueprintLibrary_ConvertBoolToDialogTestResult_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EDialogDecisionTestResult                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.CancelDialogBlockingHold
struct UGbxDialogBlueprintLibrary_CancelDialogBlockingHold_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HoldName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogSequenceFinished
struct UGbxDialogBlueprintLibrary_BindToDialogSequenceFinished_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayingSequenceID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogNotify
struct UGbxDialogBlueprintLibrary_BindToDialogNotify_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayingSequenceID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function GbxDialog.GbxDialogBlueprintLibrary.ActivateDialogScript
struct UGbxDialogBlueprintLibrary_ActivateDialogScript_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UDialogScriptData>            SoftScript;                                               // (Parm)
	class UDialogScriptData*                           Script;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogComponent.StopPerformance
struct UGbxDialogComponent_StopPerformance_Params
{
	int                                                DialogThreadID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDeathDialog;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogComponent.StartPerformance
struct UGbxDialogComponent_StartPerformance_Params
{
	int                                                DialogThreadID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DialogSequenceID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogPerformanceData*                      Performance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDialog.GbxDialogComponent.OnRep_InitialDialogInProgress
struct UGbxDialogComponent_OnRep_InitialDialogInProgress_Params
{
};

// Function GbxDialog.GbxDialogComponent.IsSpeakerClearToPlayDialog
struct UGbxDialogComponent_IsSpeakerClearToPlayDialog_Params
{
	class UDialogStyle*                                ProposedStyle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProposingEcho;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogConversation                         ProposedConversation;                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GbxDialogComponent.IsSpeakerActive
struct UGbxDialogComponent_IsSpeakerActive_Params
{
	bool                                               bIncludePendingVO;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDialog.GlobalDialogParametersProviderInterface.InitDialogContext
struct UGlobalDialogParametersProviderInterface_InitDialogContext_Params
{
	struct FDialogContext                              Parameters;                                               // (Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
