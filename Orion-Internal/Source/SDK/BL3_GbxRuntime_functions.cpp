// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxRuntime_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxRuntime.GbxCondition.K2_EvaluateConditionType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCondition::STATIC_K2_EvaluateConditionType(class UClass* Condition, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.GbxCondition.K2_EvaluateConditionType");

	UGbxCondition_K2_EvaluateConditionType_Params params;
	params.Condition = Condition;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.GbxCondition.K2_EvaluateCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGbxCondition*           Condition                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCondition::STATIC_K2_EvaluateCondition(class UGbxCondition* Condition, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.GbxCondition.K2_EvaluateCondition");

	UGbxCondition_K2_EvaluateCondition_Params params;
	params.Condition = Condition;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.ToValueVarianceString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange           Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UNumericRangeExt::STATIC_ToValueVarianceString(const struct FNumericRange& Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.ToValueVarianceString");

	UNumericRangeExt_ToValueVarianceString_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.ToValueString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange           Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UNumericRangeExt::STATIC_ToValueString(const struct FNumericRange& Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.ToValueString");

	UNumericRangeExt_ToValueString_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.ToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange           Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UNumericRangeExt::STATIC_ToString(const struct FNumericRange& Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.ToString");

	UNumericRangeExt_ToString_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.ToMinMaxString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange           Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UNumericRangeExt::STATIC_ToMinMaxString(const struct FNumericRange& Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.ToMinMaxString");

	UNumericRangeExt_ToMinMaxString_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.SetMinimum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange           Range                          (Parm, OutParm)
// float                          Minimum                        (Parm, ZeroConstructor, IsPlainOldData)

void UNumericRangeExt::STATIC_SetMinimum(float Minimum, struct FNumericRange* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.SetMinimum");

	UNumericRangeExt_SetMinimum_Params params;
	params.Minimum = Minimum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function GbxRuntime.NumericRangeExt.SetMaximum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNumericRange           Range                          (Parm, OutParm)
// float                          Maximum                        (Parm, ZeroConstructor, IsPlainOldData)

void UNumericRangeExt::STATIC_SetMaximum(float Maximum, struct FNumericRange* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.SetMaximum");

	UNumericRangeExt_SetMaximum_Params params;
	params.Maximum = Maximum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function GbxRuntime.NumericRangeExt.IsWithin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNumericRange           Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNumericRangeExt::STATIC_IsWithin(const struct FNumericRange& Range, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.IsWithin");

	UNumericRangeExt_IsWithin_Params params;
	params.Range = Range;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.GetMinimum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange           Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNumericRangeExt::STATIC_GetMinimum(const struct FNumericRange& Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.GetMinimum");

	UNumericRangeExt_GetMinimum_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.GetMaximum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange           Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNumericRangeExt::STATIC_GetMaximum(const struct FNumericRange& Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.GetMaximum");

	UNumericRangeExt_GetMaximum_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.GenerateRandomNumber
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNumericRange           Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNumericRangeExt::STATIC_GenerateRandomNumber(const struct FNumericRange& Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.GenerateRandomNumber");

	UNumericRangeExt_GenerateRandomNumber_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.CreateNumericRangeMinMax
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Minimum                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Maximum                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FNumericRange           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FNumericRange UNumericRangeExt::STATIC_CreateNumericRangeMinMax(float Minimum, float Maximum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.CreateNumericRangeMinMax");

	UNumericRangeExt_CreateNumericRangeMinMax_Params params;
	params.Minimum = Minimum;
	params.Maximum = Maximum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxRuntime.NumericRangeExt.CreateNumericRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Variance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FNumericRange           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FNumericRange UNumericRangeExt::STATIC_CreateNumericRange(float Value, float Variance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.CreateNumericRange");

	UNumericRangeExt_CreateNumericRange_Params params;
	params.Value = Value;
	params.Variance = Variance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
