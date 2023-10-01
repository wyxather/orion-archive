// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_EridiumCostConversion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.MoneyMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  GearItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GearTypeMult                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GearMoneyMult                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInit_EridiumCostConversion_C::MoneyMultiplier(class AActor* GearItem, float GearTypeMult, float* GearMoneyMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.MoneyMultiplier");

	UInit_EridiumCostConversion_C_MoneyMultiplier_Params params;
	params.GearItem = GearItem;
	params.GearTypeMult = GearTypeMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearMoneyMult != nullptr)
		*GearMoneyMult = params.GearMoneyMult;
}


// Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.GearTypeMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  GearItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GearTypeMult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInit_EridiumCostConversion_C::GearTypeMultiplier(class AActor* GearItem, float* GearTypeMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.GearTypeMultiplier");

	UInit_EridiumCostConversion_C_GearTypeMultiplier_Params params;
	params.GearItem = GearItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearTypeMult != nullptr)
		*GearTypeMult = params.GearTypeMult;
}


// Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInit_EridiumCostConversion_C::CalculateAttributeInitialValue(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.CalculateAttributeInitialValue");

	UInit_EridiumCostConversion_C_CalculateAttributeInitialValue_Params params;
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
