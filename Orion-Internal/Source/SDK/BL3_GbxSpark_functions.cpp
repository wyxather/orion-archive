// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxSpark_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxSpark.SparkBlueprintLibrary.PostLeviathanEventWithAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  EventName                      (Parm, ZeroConstructor)
// class FString                  AttributeName                  (Parm, ZeroConstructor)
// class FString                  AttributeValue                 (Parm, ZeroConstructor)

void USparkBlueprintLibrary::STATIC_PostLeviathanEventWithAttribute(class APlayerController* PlayerController, const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpark.SparkBlueprintLibrary.PostLeviathanEventWithAttribute");

	USparkBlueprintLibrary_PostLeviathanEventWithAttribute_Params params;
	params.PlayerController = PlayerController;
	params.EventName = EventName;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxSpark.SparkBlueprintLibrary.PostLeviathanEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  EventName                      (Parm, ZeroConstructor)

void USparkBlueprintLibrary::STATIC_PostLeviathanEvent(class APlayerController* PlayerController, const class FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxSpark.SparkBlueprintLibrary.PostLeviathanEvent");

	USparkBlueprintLibrary_PostLeviathanEvent_Params params;
	params.PlayerController = PlayerController;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
