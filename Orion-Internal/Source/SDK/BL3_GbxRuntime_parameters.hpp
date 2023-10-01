#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxRuntime.GbxCondition.K2_EvaluateConditionType
struct UGbxCondition_K2_EvaluateConditionType_Params
{
	class UClass*                                      Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxRuntime.GbxCondition.K2_EvaluateCondition
struct UGbxCondition_K2_EvaluateCondition_Params
{
	class UGbxCondition*                               Condition;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxRuntime.NumericRangeExt.ToValueVarianceString
struct UNumericRangeExt_ToValueVarianceString_Params
{
	struct FNumericRange                               Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxRuntime.NumericRangeExt.ToValueString
struct UNumericRangeExt_ToValueString_Params
{
	struct FNumericRange                               Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxRuntime.NumericRangeExt.ToString
struct UNumericRangeExt_ToString_Params
{
	struct FNumericRange                               Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxRuntime.NumericRangeExt.ToMinMaxString
struct UNumericRangeExt_ToMinMaxString_Params
{
	struct FNumericRange                               Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxRuntime.NumericRangeExt.SetMinimum
struct UNumericRangeExt_SetMinimum_Params
{
	struct FNumericRange                               Range;                                                    // (Parm, OutParm)
	float                                              Minimum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxRuntime.NumericRangeExt.SetMaximum
struct UNumericRangeExt_SetMaximum_Params
{
	struct FNumericRange                               Range;                                                    // (Parm, OutParm)
	float                                              Maximum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxRuntime.NumericRangeExt.IsWithin
struct UNumericRangeExt_IsWithin_Params
{
	struct FNumericRange                               Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxRuntime.NumericRangeExt.GetMinimum
struct UNumericRangeExt_GetMinimum_Params
{
	struct FNumericRange                               Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxRuntime.NumericRangeExt.GetMaximum
struct UNumericRangeExt_GetMaximum_Params
{
	struct FNumericRange                               Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxRuntime.NumericRangeExt.GenerateRandomNumber
struct UNumericRangeExt_GenerateRandomNumber_Params
{
	struct FNumericRange                               Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxRuntime.NumericRangeExt.CreateNumericRangeMinMax
struct UNumericRangeExt_CreateNumericRangeMinMax_Params
{
	float                                              Minimum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxRuntime.NumericRangeExt.CreateNumericRange
struct UNumericRangeExt_CreateNumericRange_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Variance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
