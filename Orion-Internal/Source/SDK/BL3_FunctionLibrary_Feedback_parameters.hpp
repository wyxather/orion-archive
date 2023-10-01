#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FunctionLibrary_Feedback_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAllAtLocation
struct UFunctionLibrary_Feedback_C_PerformBasicFeedbackForAllAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackSize>                     Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackStrength>                 Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackDuration>                 Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               Feedback;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedbackForLocation
struct UFunctionLibrary_Feedback_C_GetBasicFeedbackForLocation_Params
{
	TEnumAsByte<Enum_FeedbackStrength>                 Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackDuration>                 Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackSize>                     Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               Feedback;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAll
struct UFunctionLibrary_Feedback_C_PerformBasicFeedbackForAll_Params
{
	TEnumAsByte<Enum_FeedbackStrength>                 Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackDuration>                 Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               FeedbackData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedback
struct UFunctionLibrary_Feedback_C_PerformBasicFeedback_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackStrength>                 Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackDuration>                 Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               FeedbackData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedback
struct UFunctionLibrary_Feedback_C_GetBasicFeedback_Params
{
	TEnumAsByte<Enum_FeedbackStrength>                 Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackDuration>                 Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               FeedbackData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackAtLocation
struct UFunctionLibrary_Feedback_C_PerformBasicFeedbackAtLocation_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackSize>                     Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackStrength>                 Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_FeedbackDuration>                 Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               Feedback;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
