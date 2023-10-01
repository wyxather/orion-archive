// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FunctionLibrary_Feedback_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAllAtLocation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackSize> Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackStrength> Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackDuration> Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           Feedback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFunctionLibrary_Feedback_C::STATIC_PerformBasicFeedbackForAllAtLocation(const struct FVector& Location, TEnumAsByte<Enum_FeedbackSize> Size, TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** Feedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAllAtLocation");

	UFunctionLibrary_Feedback_C_PerformBasicFeedbackForAllAtLocation_Params params;
	params.Location = Location;
	params.Size = Size;
	params.Strength = Strength;
	params.Duration = Duration;
	params.SourceContext = SourceContext;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Feedback != nullptr)
		*Feedback = params.Feedback;
}


// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedbackForLocation
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_FeedbackStrength> Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackDuration> Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackSize> Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           Feedback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFunctionLibrary_Feedback_C::STATIC_GetBasicFeedbackForLocation(TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, TEnumAsByte<Enum_FeedbackSize> Size, class UObject* __WorldContext, class UFeedbackData** Feedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedbackForLocation");

	UFunctionLibrary_Feedback_C_GetBasicFeedbackForLocation_Params params;
	params.Strength = Strength;
	params.Duration = Duration;
	params.Size = Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Feedback != nullptr)
		*Feedback = params.Feedback;
}


// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAll
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_FeedbackStrength> Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackDuration> Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           FeedbackData                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFunctionLibrary_Feedback_C::STATIC_PerformBasicFeedbackForAll(TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** FeedbackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAll");

	UFunctionLibrary_Feedback_C_PerformBasicFeedbackForAll_Params params;
	params.Strength = Strength;
	params.Duration = Duration;
	params.SourceContext = SourceContext;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FeedbackData != nullptr)
		*FeedbackData = params.FeedbackData;
}


// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedback
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackStrength> Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackDuration> Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           FeedbackData                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFunctionLibrary_Feedback_C::STATIC_PerformBasicFeedback(class APlayerController* Controller, TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** FeedbackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedback");

	UFunctionLibrary_Feedback_C_PerformBasicFeedback_Params params;
	params.Controller = Controller;
	params.Strength = Strength;
	params.Duration = Duration;
	params.SourceContext = SourceContext;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FeedbackData != nullptr)
		*FeedbackData = params.FeedbackData;
}


// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedback
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_FeedbackStrength> Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackDuration> Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           FeedbackData                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFunctionLibrary_Feedback_C::STATIC_GetBasicFeedback(TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* __WorldContext, class UFeedbackData** FeedbackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedback");

	UFunctionLibrary_Feedback_C_GetBasicFeedback_Params params;
	params.Strength = Strength;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FeedbackData != nullptr)
		*FeedbackData = params.FeedbackData;
}


// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackAtLocation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackSize> Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackStrength> Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_FeedbackDuration> Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           Feedback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFunctionLibrary_Feedback_C::STATIC_PerformBasicFeedbackAtLocation(class APlayerController* Controller, const struct FVector& Location, TEnumAsByte<Enum_FeedbackSize> Size, TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** Feedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackAtLocation");

	UFunctionLibrary_Feedback_C_PerformBasicFeedbackAtLocation_Params params;
	params.Controller = Controller;
	params.Location = Location;
	params.Size = Size;
	params.Strength = Strength;
	params.Duration = Duration;
	params.SourceContext = SourceContext;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Feedback != nullptr)
		*Feedback = params.Feedback;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
