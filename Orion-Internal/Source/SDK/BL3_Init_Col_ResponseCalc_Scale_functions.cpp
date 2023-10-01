// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Col_ResponseCalc_Scale_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_Col_ResponseCalc_Scale.Init_Col_ResponseCalc_Scale_C.GetValueFromArchetype
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStruct_VehicleColResponse VehicleColResponse             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInit_Col_ResponseCalc_Scale_C::GetValueFromArchetype(const struct FName& Archetype, const struct FStruct_VehicleColResponse& VehicleColResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_Col_ResponseCalc_Scale.Init_Col_ResponseCalc_Scale_C.GetValueFromArchetype");

	UInit_Col_ResponseCalc_Scale_C_GetValueFromArchetype_Params params;
	params.Archetype = Archetype;
	params.VehicleColResponse = VehicleColResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Init_Col_ResponseCalc_Scale.Init_Col_ResponseCalc_Scale_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInit_Col_ResponseCalc_Scale_C::CalculateAttributeInitialValue(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_Col_ResponseCalc_Scale.Init_Col_ResponseCalc_Scale_C.CalculateAttributeInitialValue");

	UInit_Col_ResponseCalc_Scale_C_CalculateAttributeInitialValue_Params params;
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
