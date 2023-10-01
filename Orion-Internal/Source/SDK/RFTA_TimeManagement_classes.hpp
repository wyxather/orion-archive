#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_TimeManagement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0008 (0x0030 - 0x0028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                                  FixedFrameRate;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}

};


// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}


	struct FFrameTime STATIC_TransformTime(struct FFrameTime* SourceTime, struct FFrameRate* SourceRate, struct FFrameRate* DestinationRate);
	struct FFrameNumber STATIC_Subtract_FrameNumberInteger(struct FFrameNumber* A, int* B);
	struct FFrameNumber STATIC_Subtract_FrameNumberFrameNumber(struct FFrameNumber* A, struct FFrameNumber* B);
	struct FFrameTime STATIC_SnapFrameTimeToRate(struct FFrameTime* SourceTime, struct FFrameRate* SourceRate, struct FFrameRate* SnapToRate);
	struct FFrameTime STATIC_Multiply_SecondsFrameRate(float* TimeInSeconds, struct FFrameRate* FrameRate);
	struct FFrameNumber STATIC_Multiply_FrameNumberInteger(struct FFrameNumber* A, int* B);
	bool STATIC_IsValid_MultipleOf(struct FFrameRate* InFrameRate, struct FFrameRate* OtherFramerate);
	bool STATIC_IsValid_Framerate(struct FFrameRate* InFrameRate);
	struct FTimecode STATIC_GetTimecode();
	struct FFrameNumber STATIC_Divide_FrameNumberInteger(struct FFrameNumber* A, int* B);
	class FString STATIC_Conv_TimecodeToString(struct FTimecode* InTimecode, bool* bForceSignDisplay);
	float STATIC_Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime* InFrameTime);
	float STATIC_Conv_FrameRateToSeconds(struct FFrameRate* InFrameRate);
	int STATIC_Conv_FrameNumberToInteger(struct FFrameNumber* InFrameNumber);
	struct FFrameNumber STATIC_Add_FrameNumberInteger(struct FFrameNumber* A, int* B);
	struct FFrameNumber STATIC_Add_FrameNumberFrameNumber(struct FFrameNumber* A, struct FFrameNumber* B);
};


// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (0x0030 - 0x0028)
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                FrameOffset;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
