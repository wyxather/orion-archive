#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxSpark_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxSpark.EnumerateTelemetryCommandlet
// 0x0000 (0x0080 - 0x0080)
class UEnumerateTelemetryCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpark.EnumerateTelemetryCommandlet");
		return ptr;
	}

};


// Class GbxSpark.SparkBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USparkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxSpark.SparkBlueprintLibrary");
		return ptr;
	}


	void STATIC_PostLeviathanEventWithAttribute(class APlayerController* PlayerController, const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue);
	void STATIC_PostLeviathanEvent(class APlayerController* PlayerController, const class FString& EventName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
