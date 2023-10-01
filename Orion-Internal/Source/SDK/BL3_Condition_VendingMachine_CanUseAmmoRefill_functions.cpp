// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_VendingMachine_CanUseAmmoRefill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Condition_VendingMachine_CanUseAmmoRefill.Condition_VendingMachine_CanUseAmmoRefill_C.AmmoIsFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       Current                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       Max                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Full                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCondition_VendingMachine_CanUseAmmoRefill_C::AmmoIsFull(class AOakCharacter* Character, class UGbxAttributeData* Current, class UGbxAttributeData* Max, bool* Full)
{
	static auto fn = UObject::FindObject<UFunction>("Function Condition_VendingMachine_CanUseAmmoRefill.Condition_VendingMachine_CanUseAmmoRefill_C.AmmoIsFull");

	UCondition_VendingMachine_CanUseAmmoRefill_C_AmmoIsFull_Params params;
	params.Character = Character;
	params.Current = Current;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Full != nullptr)
		*Full = params.Full;
}


// Function Condition_VendingMachine_CanUseAmmoRefill.Condition_VendingMachine_CanUseAmmoRefill_C.EvaluateCondition
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                OptionalContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCondition_VendingMachine_CanUseAmmoRefill_C::EvaluateCondition(class UObject** Context, class UObject** OptionalContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Condition_VendingMachine_CanUseAmmoRefill.Condition_VendingMachine_CanUseAmmoRefill_C.EvaluateCondition");

	UCondition_VendingMachine_CanUseAmmoRefill_C_EvaluateCondition_Params params;
	params.Context = Context;
	params.OptionalContext = OptionalContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
