#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxRuntime.EConditionRefreshRate
enum class EConditionRefreshRate : uint8_t
{
	OncePerThreeSeconds            = 0,
	OncePerSecond                  = 1,
	TwicePerSecond                 = 2,
	FourTimesPerSecond             = 3,
	Immediately                    = 4,
	EConditionRefreshRate_MAX      = 5
};


// Enum GbxRuntime.ENumericRangeEditMode
enum class ENumericRangeEditMode : uint8_t
{
	MinMax                         = 0,
	ValueVariance                  = 1,
	Variance                       = 2,
	Value                          = 3,
	ENumericRangeEditMode_MAX      = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxRuntime.NumericRange
// 0x0008
struct FNumericRange
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Variance;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxRuntime.GbxStructPtrParam
// 0x0008
struct FGbxStructPtrParam
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GbxRuntime.GbxTriggerProperty
// 0x0001
struct FGbxTriggerProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GbxRuntime.SceneBasedPosition
// 0x0038
struct FSceneBasedPosition
{
	class USceneComponent*                             Base;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CachedBaseLocation;                                       // 0x0014(0x000C) (IsPlainOldData)
	struct FRotator                                    CachedBaseRotation;                                       // 0x0020(0x000C) (IsPlainOldData)
	struct FVector                                     CachedTransPosition;                                      // 0x002C(0x000C) (IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
