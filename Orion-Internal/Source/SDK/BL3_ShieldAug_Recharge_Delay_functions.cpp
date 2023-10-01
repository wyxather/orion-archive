// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_Recharge_Delay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C.SetValueForAttribute
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxAttributeData**      Attribute                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShieldAug_Recharge_Delay_C::SetValueForAttribute(class UGbxAttributeData** Attribute, class UObject** Context, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C.SetValueForAttribute");

	UShieldAug_Recharge_Delay_C_SetValueForAttribute_Params params;
	params.Attribute = Attribute;
	params.Context = Context;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C.GetValueForAttribute
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxAttributeData**      Attribute                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShieldAug_Recharge_Delay_C::GetValueForAttribute(class UGbxAttributeData** Attribute, class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C.GetValueForAttribute");

	UShieldAug_Recharge_Delay_C_GetValueForAttribute_Params params;
	params.Attribute = Attribute;
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
