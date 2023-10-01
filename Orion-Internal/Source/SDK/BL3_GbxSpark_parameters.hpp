#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxSpark_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxSpark.SparkBlueprintLibrary.PostLeviathanEventWithAttribute
struct USparkBlueprintLibrary_PostLeviathanEventWithAttribute_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
	class FString                                      AttributeName;                                            // (Parm, ZeroConstructor)
	class FString                                      AttributeValue;                                           // (Parm, ZeroConstructor)
};

// Function GbxSpark.SparkBlueprintLibrary.PostLeviathanEvent
struct USparkBlueprintLibrary_PostLeviathanEvent_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
