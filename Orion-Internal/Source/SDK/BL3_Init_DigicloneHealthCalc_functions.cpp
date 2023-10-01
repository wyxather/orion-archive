// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_DigicloneHealthCalc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_DigicloneHealthCalc.Init_DigicloneHealthCalc_C.GetAdditionalHealthScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInit_DigicloneHealthCalc_C::GetAdditionalHealthScalar(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_DigicloneHealthCalc.Init_DigicloneHealthCalc_C.GetAdditionalHealthScalar");

	UInit_DigicloneHealthCalc_C_GetAdditionalHealthScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Init_DigicloneHealthCalc.Init_DigicloneHealthCalc_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInit_DigicloneHealthCalc_C::CalculateAttributeInitialValue(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_DigicloneHealthCalc.Init_DigicloneHealthCalc_C.CalculateAttributeInitialValue");

	UInit_DigicloneHealthCalc_C_CalculateAttributeInitialValue_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
