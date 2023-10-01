// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_VendingMachinePrice_Heal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_VendingMachinePrice_Heal.Init_VendingMachinePrice_Heal_C.CalcAmmoCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 CharContext                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       AmmoMax                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       AmmoCurrent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       AmmoStackCount                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       AmmoStackCost                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInit_VendingMachinePrice_Heal_C::CalcAmmoCost(class UObject* CharContext, class UGbxAttributeData* AmmoMax, class UGbxAttributeData* AmmoCurrent, class UGbxAttributeData* AmmoStackCount, class UGbxAttributeData* AmmoStackCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_VendingMachinePrice_Heal.Init_VendingMachinePrice_Heal_C.CalcAmmoCost");

	UInit_VendingMachinePrice_Heal_C_CalcAmmoCost_Params params;
	params.CharContext = CharContext;
	params.AmmoMax = AmmoMax;
	params.AmmoCurrent = AmmoCurrent;
	params.AmmoStackCount = AmmoStackCount;
	params.AmmoStackCost = AmmoStackCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Init_VendingMachinePrice_Heal.Init_VendingMachinePrice_Heal_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInit_VendingMachinePrice_Heal_C::CalculateAttributeInitialValue(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_VendingMachinePrice_Heal.Init_VendingMachinePrice_Heal_C.CalculateAttributeInitialValue");

	UInit_VendingMachinePrice_Heal_C_CalculateAttributeInitialValue_Params params;
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
