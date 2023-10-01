#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxRuntime.GbxDataAsset
// 0x0000 (0x0030 - 0x0030)
class UGbxDataAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxRuntime.GbxDataAsset");
		return ptr;
	}

};


// Class GbxRuntime.GbxCondition
// 0x0060 (0x0088 - 0x0028)
class UGbxCondition : public UObject
{
public:
	bool                                               bInvertCondition;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EConditionRefreshRate                              RefreshRate;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5E];                                      // 0x002A(0x005E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxRuntime.GbxCondition");
		return ptr;
	}


	bool STATIC_K2_EvaluateConditionType(class UClass* Condition, class UObject* Context);
	bool STATIC_K2_EvaluateCondition(class UGbxCondition* Condition, class UObject* Context);
};


// Class GbxRuntime.GbxDataAssetBlueprintable
// 0x0000 (0x0030 - 0x0030)
class UGbxDataAssetBlueprintable : public UGbxDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxRuntime.GbxDataAssetBlueprintable");
		return ptr;
	}

};


// Class GbxRuntime.NumericRangeExt
// 0x0000 (0x0028 - 0x0028)
class UNumericRangeExt : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxRuntime.NumericRangeExt");
		return ptr;
	}


	class FString STATIC_ToValueVarianceString(const struct FNumericRange& Range);
	class FString STATIC_ToValueString(const struct FNumericRange& Range);
	class FString STATIC_ToString(const struct FNumericRange& Range);
	class FString STATIC_ToMinMaxString(const struct FNumericRange& Range);
	void STATIC_SetMinimum(float Minimum, struct FNumericRange* Range);
	void STATIC_SetMaximum(float Maximum, struct FNumericRange* Range);
	bool STATIC_IsWithin(const struct FNumericRange& Range, float Value);
	float STATIC_GetMinimum(const struct FNumericRange& Range);
	float STATIC_GetMaximum(const struct FNumericRange& Range);
	float STATIC_GenerateRandomNumber(const struct FNumericRange& Range);
	struct FNumericRange STATIC_CreateNumericRangeMinMax(float Minimum, float Maximum);
	struct FNumericRange STATIC_CreateNumericRange(float Value, float Variance);
};


// Class GbxRuntime.RenderActor
// 0x0000 (0x0458 - 0x0458)
class ARenderActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxRuntime.RenderActor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
