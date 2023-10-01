#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FunctionLibrary_Feedback_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FunctionLibrary_Feedback.FunctionLibrary_Feedback_C
// 0x0000 (0x0028 - 0x0028)
class UFunctionLibrary_Feedback_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibrary_Feedback.FunctionLibrary_Feedback_C");
		return ptr;
	}


	void STATIC_PerformBasicFeedbackForAllAtLocation(const struct FVector& Location, TEnumAsByte<Enum_FeedbackSize> Size, TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** Feedback);
	void STATIC_GetBasicFeedbackForLocation(TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, TEnumAsByte<Enum_FeedbackSize> Size, class UObject* __WorldContext, class UFeedbackData** Feedback);
	void STATIC_PerformBasicFeedbackForAll(TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** FeedbackData);
	void STATIC_PerformBasicFeedback(class APlayerController* Controller, TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** FeedbackData);
	void STATIC_GetBasicFeedback(TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* __WorldContext, class UFeedbackData** FeedbackData);
	void STATIC_PerformBasicFeedbackAtLocation(class APlayerController* Controller, const struct FVector& Location, TEnumAsByte<Enum_FeedbackSize> Size, TEnumAsByte<Enum_FeedbackStrength> Strength, TEnumAsByte<Enum_FeedbackDuration> Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** Feedback);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
