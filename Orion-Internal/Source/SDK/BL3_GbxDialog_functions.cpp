// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxDialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxDialog.DialogActionBlueprintImplementation.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDialogContext          Context                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDialogActionBlueprintImplementation::Execute(const struct FDialogContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogActionBlueprintImplementation.Execute");

	UDialogActionBlueprintImplementation_Execute_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.DialogEnumValueInterface.GetEnumValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDialogEnumType*         EnumType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDialogEnumValue*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDialogEnumValue* UDialogEnumValueInterface::GetEnumValue(class UDialogEnumType* EnumType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogEnumValueInterface.GetEnumValue");

	UDialogEnumValueInterface_GetEnumValue_Params params;
	params.EnumType = EnumType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.DialogPerformanceData.PlayWwiseEventPreview
// (Final, Native, Public)

void UDialogPerformanceData::PlayWwiseEventPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogPerformanceData.PlayWwiseEventPreview");

	UDialogPerformanceData_PlayWwiseEventPreview_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.DialogSelectorImplementation.PerformTest
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDialogContext          Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// EDialogDecisionTestResult      Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDialogSelectorImplementation::PerformTest(const struct FDialogContext& Context, EDialogDecisionTestResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogSelectorImplementation.PerformTest");

	UDialogSelectorImplementation_PerformTest_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GbxDialog.DialogSpeakerInterface.CanPerformThisDialog
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDialogPerformanceData*  Performance                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDialogSpeakerInterface::CanPerformThisDialog(class UDialogPerformanceData* Performance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogSpeakerInterface.CanPerformThisDialog");

	UDialogSpeakerInterface_CanPerformThisDialog_Params params;
	params.Performance = Performance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.DialogTimeSlotData.PreviewAudio
// (Final, Native, Public)

void UDialogTimeSlotData::PreviewAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.DialogTimeSlotData.PreviewAudio");

	UDialogTimeSlotData_PreviewAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.WaitForDialog
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDialogConversation     Conversation                   (Parm)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UGbxDialogBlueprintLibrary::STATIC_WaitForDialog(const struct FDialogConversation& Conversation, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.WaitForDialog");

	UGbxDialogBlueprintLibrary_WaitForDialog_Params params;
	params.Conversation = Conversation;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.TestDialogSelector
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UDialogSelectorFunction* Selector                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FDialogContext          InputParameters                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDialogBlueprintLibrary::STATIC_TestDialogSelector(class UObject* WorldContextObject, class UDialogSelectorFunction* Selector, const struct FDialogContext& InputParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.TestDialogSelector");

	UGbxDialogBlueprintLibrary_TestDialogSelector_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Selector = Selector;
	params.InputParameters = InputParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.StopActiveDialog
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDeathDialog            (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_StopActiveDialog(class UObject* Target, bool bIncludeDeathDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.StopActiveDialog");

	UGbxDialogBlueprintLibrary_StopActiveDialog_Params params;
	params.Target = Target;
	params.bIncludeDeathDialog = bIncludeDeathDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetNextDialogPlayerHints
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UDialogNameTag*          NameTag                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_SetNextDialogPlayerHints(class UObject* WorldContextObject, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetNextDialogPlayerHints");

	UGbxDialogBlueprintLibrary_SetNextDialogPlayerHints_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actor = Actor;
	params.NameTag = NameTag;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogGameCustomizationMetadata
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceID                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cookie                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_SetDialogGameCustomizationMetadata(class UObject* WorldContextObject, int SequenceID, class UObject* Object, int Cookie)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogGameCustomizationMetadata");

	UGbxDialogBlueprintLibrary_SetDialogGameCustomizationMetadata_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SequenceID = SequenceID;
	params.Object = Object;
	params.Cookie = Cookie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogFlag
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UDialogEnumValue*        DialogEnumValue                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_SetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue, bool Value, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogFlag");

	UGbxDialogBlueprintLibrary_SetDialogFlag_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DialogEnumValue = DialogEnumValue;
	params.Value = Value;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogContextParameter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDialogContext          Context                        (Parm, OutParm, ReferenceParm)
// class UDialogParameter*        Parameter                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBoolValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_SetDialogContextParameter(class UDialogParameter* Parameter, class UObject* ObjectValue, float FloatValue, bool bBoolValue, struct FDialogContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogContextParameter");

	UGbxDialogBlueprintLibrary_SetDialogContextParameter_Params params;
	params.Parameter = Parameter;
	params.ObjectValue = ObjectValue;
	params.FloatValue = FloatValue;
	params.bBoolValue = bBoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.SetConversationPlayerHints
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDialogConversation     Conversation                   (Parm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UDialogNameTag*          NameTag                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_SetConversationPlayerHints(const struct FDialogConversation& Conversation, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.SetConversationPlayerHints");

	UGbxDialogBlueprintLibrary_SetConversationPlayerHints_Params params;
	params.Conversation = Conversation;
	params.Actor = Actor;
	params.NameTag = NameTag;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.ResolveDialogTimeSlotReference
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDialogTimeSlotReference Reference                      (Parm)
// class UDialogTimeSlotData*     TimeSlot                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UDialogScriptData*       Script                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_ResolveDialogTimeSlotReference(const struct FDialogTimeSlotReference& Reference, class UDialogTimeSlotData** TimeSlot, class UDialogScriptData** Script)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.ResolveDialogTimeSlotReference");

	UGbxDialogBlueprintLibrary_ResolveDialogTimeSlotReference_Params params;
	params.Reference = Reference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeSlot != nullptr)
		*TimeSlot = params.TimeSlot;
	if (Script != nullptr)
		*Script = params.Script;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceRegionalDialogHold
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HoldName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class UQuietTimePredicate*     Rules                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_PlaceRegionalDialogHold(class UObject* WorldContextObject, const struct FName& HoldName, const struct FVector& Location, float Radius, class UQuietTimePredicate* Rules, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.PlaceRegionalDialogHold");

	UGbxDialogBlueprintLibrary_PlaceRegionalDialogHold_Params params;
	params.WorldContextObject = WorldContextObject;
	params.HoldName = HoldName;
	params.Location = Location;
	params.Radius = Radius;
	params.Rules = Rules;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceGlobalDialogHold
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HoldName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UQuietTimePredicate*     Rules                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_PlaceGlobalDialogHold(class UObject* WorldContextObject, const struct FName& HoldName, class UQuietTimePredicate* Rules, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.PlaceGlobalDialogHold");

	UGbxDialogBlueprintLibrary_PlaceGlobalDialogHold_Params params;
	params.WorldContextObject = WorldContextObject;
	params.HoldName = HoldName;
	params.Rules = Rules;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  KeyActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDialogNameTag*          KeySpeakerName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 KeyLocation                    (Parm, IsPlainOldData)
// struct FDialogConversation     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDialogConversation UGbxDialogBlueprintLibrary::STATIC_NewDialogConversation(class UObject* WorldContextObject, class AActor* KeyActor, class UDialogNameTag* KeySpeakerName, const struct FVector& KeyLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogConversation");

	UGbxDialogBlueprintLibrary_NewDialogConversation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.KeyActor = KeyActor;
	params.KeySpeakerName = KeySpeakerName;
	params.KeyLocation = KeyLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDialogContext          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDialogContext UGbxDialogBlueprintLibrary::STATIC_NewDialogContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogContext");

	UGbxDialogBlueprintLibrary_NewDialogContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.InterruptDialogInRadius
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_InterruptDialogInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.InterruptDialogInRadius");

	UGbxDialogBlueprintLibrary_InterruptDialogInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.InterruptConversation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDialogConversation     Conversation                   (Parm)

void UGbxDialogBlueprintLibrary::STATIC_InterruptConversation(const struct FDialogConversation& Conversation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.InterruptConversation");

	UGbxDialogBlueprintLibrary_InterruptConversation_Params params;
	params.Conversation = Conversation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogFlag
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UDialogEnumValue*        DialogEnumValue                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDialogBlueprintLibrary::STATIC_GetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogFlag");

	UGbxDialogBlueprintLibrary_GetDialogFlag_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DialogEnumValue = DialogEnumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameterSummary
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDialogContext          Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UGbxDialogBlueprintLibrary::STATIC_GetDialogContextParameterSummary(const struct FDialogContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameterSummary");

	UGbxDialogBlueprintLibrary_GetDialogContextParameterSummary_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDialogContext          Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UDialogParameter*        Parameter                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FloatValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBoolValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_GetDialogContextParameter(const struct FDialogContext& Context, class UDialogParameter* Parameter, class UObject** ObjectValue, float* FloatValue, bool* bBoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameter");

	UGbxDialogBlueprintLibrary_GetDialogContextParameter_Params params;
	params.Context = Context;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectValue != nullptr)
		*ObjectValue = params.ObjectValue;
	if (FloatValue != nullptr)
		*FloatValue = params.FloatValue;
	if (bBoolValue != nullptr)
		*bBoolValue = params.bBoolValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.GetConversationStatus
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDialogConversation     Conversation                   (Parm)
// EGbxDialogConversationStatus   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxDialogConversationStatus UGbxDialogBlueprintLibrary::STATIC_GetConversationStatus(const struct FDialogConversation& Conversation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.GetConversationStatus");

	UGbxDialogBlueprintLibrary_GetConversationStatus_Params params;
	params.Conversation = Conversation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.FinishTriggerDialog
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UDialogEvent*            Event                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FDialogContext          Context                        (Parm, OutParm, ReferenceParm)
// struct FDialogConversation     ContinueConversation           (Parm)
// struct FDialogConversation     Conversation                   (Parm, OutParm)
// float                          StartDelay                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceID                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDialogBlueprintLibrary::STATIC_FinishTriggerDialog(class UObject* WorldContextObject, class UDialogEvent* Event, const struct FDialogConversation& ContinueConversation, float StartDelay, struct FDialogContext* Context, struct FDialogConversation* Conversation, int* SequenceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.FinishTriggerDialog");

	UGbxDialogBlueprintLibrary_FinishTriggerDialog_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.ContinueConversation = ContinueConversation;
	params.StartDelay = StartDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Conversation != nullptr)
		*Conversation = params.Conversation;
	if (SequenceID != nullptr)
		*SequenceID = params.SequenceID;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeak
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDialogTimeSlotReference TimeSlotRef                    (ConstParm, Parm)
// class UGbxDialogComponent*     OptionalSpeaker                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FDialogContext          Context                        (Parm, OutParm, ReferenceParm)
// struct FDialogConversation     ContinueConversation           (Parm)
// struct FDialogConversation     Conversation                   (Parm, OutParm)
// float                          StartDelay                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SequenceID                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OverrideMaxWait                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDialogBlueprintLibrary::STATIC_FinishSpeak(class UObject* WorldContextObject, const struct FDialogTimeSlotReference& TimeSlotRef, class UGbxDialogComponent* OptionalSpeaker, const struct FDialogConversation& ContinueConversation, float StartDelay, float OverrideMaxWait, struct FDialogContext* Context, struct FDialogConversation* Conversation, int* SequenceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeak");

	UGbxDialogBlueprintLibrary_FinishSpeak_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TimeSlotRef = TimeSlotRef;
	params.OptionalSpeaker = OptionalSpeaker;
	params.ContinueConversation = ContinueConversation;
	params.StartDelay = StartDelay;
	params.OverrideMaxWait = OverrideMaxWait;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Conversation != nullptr)
		*Conversation = params.Conversation;
	if (SequenceID != nullptr)
		*SequenceID = params.SequenceID;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.FindOrCreateNamedSpeaker
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDialogNameTag*          NameTag                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludePureEchoSpeakers       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCreateIfNotFound              (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDialogComponent*     Speaker                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDialogBlueprintLibrary::STATIC_FindOrCreateNamedSpeaker(class UDialogNameTag* NameTag, bool bIncludePureEchoSpeakers, bool bCreateIfNotFound, class UGbxDialogComponent** Speaker)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.FindOrCreateNamedSpeaker");

	UGbxDialogBlueprintLibrary_FindOrCreateNamedSpeaker_Params params;
	params.NameTag = NameTag;
	params.bIncludePureEchoSpeakers = bIncludePureEchoSpeakers;
	params.bCreateIfNotFound = bCreateIfNotFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speaker != nullptr)
		*Speaker = params.Speaker;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.EnqueueDialogPerformance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDialogComponent*     Speaker                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDialogPerformanceData*  Performance                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartDelay                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDialogConversation     ContinueConversation           (Parm)
// struct FDialogConversation     Conversation                   (Parm, OutParm)
// int                            DialogPlaybackSequence         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDialogBlueprintLibrary::STATIC_EnqueueDialogPerformance(class UObject* WorldContextObject, class UGbxDialogComponent* Speaker, class UDialogPerformanceData* Performance, float StartDelay, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, int* DialogPlaybackSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.EnqueueDialogPerformance");

	UGbxDialogBlueprintLibrary_EnqueueDialogPerformance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Speaker = Speaker;
	params.Performance = Performance;
	params.StartDelay = StartDelay;
	params.ContinueConversation = ContinueConversation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Conversation != nullptr)
		*Conversation = params.Conversation;
	if (DialogPlaybackSequence != nullptr)
		*DialogPlaybackSequence = params.DialogPlaybackSequence;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.DeactivateDialogScript
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TSoftObjectPtr<class UDialogScriptData> SoftScript                     (Parm)
// class UDialogScriptData*       Script                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_DeactivateDialogScript(class UObject* WorldContextObject, TSoftObjectPtr<class UDialogScriptData> SoftScript, class UDialogScriptData* Script)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.DeactivateDialogScript");

	UGbxDialogBlueprintLibrary_DeactivateDialogScript_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoftScript = SoftScript;
	params.Script = Script;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.ConvertBoolToDialogTestResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// EDialogDecisionTestResult      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EDialogDecisionTestResult UGbxDialogBlueprintLibrary::STATIC_ConvertBoolToDialogTestResult(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.ConvertBoolToDialogTestResult");

	UGbxDialogBlueprintLibrary_ConvertBoolToDialogTestResult_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.CancelDialogBlockingHold
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HoldName                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_CancelDialogBlockingHold(class UObject* WorldContextObject, const struct FName& HoldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.CancelDialogBlockingHold");

	UGbxDialogBlueprintLibrary_CancelDialogBlockingHold_Params params;
	params.WorldContextObject = WorldContextObject;
	params.HoldName = HoldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogSequenceFinished
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayingSequenceID              (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGbxDialogBlueprintLibrary::STATIC_BindToDialogSequenceFinished(class UObject* WorldContextObject, int PlayingSequenceID, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogSequenceFinished");

	UGbxDialogBlueprintLibrary_BindToDialogSequenceFinished_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayingSequenceID = PlayingSequenceID;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogNotify
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayingSequenceID              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGbxDialogBlueprintLibrary::STATIC_BindToDialogNotify(class UObject* WorldContextObject, int PlayingSequenceID, const struct FName& NotifyName, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogNotify");

	UGbxDialogBlueprintLibrary_BindToDialogNotify_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayingSequenceID = PlayingSequenceID;
	params.NotifyName = NotifyName;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogBlueprintLibrary.ActivateDialogScript
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TSoftObjectPtr<class UDialogScriptData> SoftScript                     (Parm)
// class UDialogScriptData*       Script                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogBlueprintLibrary::STATIC_ActivateDialogScript(class UObject* WorldContextObject, TSoftObjectPtr<class UDialogScriptData> SoftScript, class UDialogScriptData* Script)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogBlueprintLibrary.ActivateDialogScript");

	UGbxDialogBlueprintLibrary_ActivateDialogScript_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoftScript = SoftScript;
	params.Script = Script;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogComponent.StopPerformance
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            DialogThreadID                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDeathDialog            (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogComponent::StopPerformance(int DialogThreadID, bool bIncludeDeathDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.StopPerformance");

	UGbxDialogComponent_StopPerformance_Params params;
	params.DialogThreadID = DialogThreadID;
	params.bIncludeDeathDialog = bIncludeDeathDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogComponent.StartPerformance
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            DialogThreadID                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            DialogSequenceID               (Parm, ZeroConstructor, IsPlainOldData)
// class UDialogPerformanceData*  Performance                    (Parm, ZeroConstructor, IsPlainOldData)

void UGbxDialogComponent::StartPerformance(int DialogThreadID, int DialogSequenceID, class UDialogPerformanceData* Performance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.StartPerformance");

	UGbxDialogComponent_StartPerformance_Params params;
	params.DialogThreadID = DialogThreadID;
	params.DialogSequenceID = DialogSequenceID;
	params.Performance = Performance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogComponent.OnRep_InitialDialogInProgress
// (Final, Native, Private)

void UGbxDialogComponent::OnRep_InitialDialogInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.OnRep_InitialDialogInProgress");

	UGbxDialogComponent_OnRep_InitialDialogInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDialog.GbxDialogComponent.IsSpeakerClearToPlayDialog
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDialogStyle*            ProposedStyle                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProposingEcho                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDialogConversation     ProposedConversation           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDialogComponent::IsSpeakerClearToPlayDialog(class UDialogStyle* ProposedStyle, bool bProposingEcho, const struct FDialogConversation& ProposedConversation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.IsSpeakerClearToPlayDialog");

	UGbxDialogComponent_IsSpeakerClearToPlayDialog_Params params;
	params.ProposedStyle = ProposedStyle;
	params.bProposingEcho = bProposingEcho;
	params.ProposedConversation = ProposedConversation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.GbxDialogComponent.IsSpeakerActive
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludePendingVO              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDialogComponent::IsSpeakerActive(bool bIncludePendingVO)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GbxDialogComponent.IsSpeakerActive");

	UGbxDialogComponent_IsSpeakerActive_Params params;
	params.bIncludePendingVO = bIncludePendingVO;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDialog.GlobalDialogParametersProviderInterface.InitDialogContext
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FDialogContext          Parameters                     (Parm, OutParm, ReferenceParm)

void UGlobalDialogParametersProviderInterface::InitDialogContext(struct FDialogContext* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDialog.GlobalDialogParametersProviderInterface.InitDialogContext");

	UGlobalDialogParametersProviderInterface_InitDialogContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
