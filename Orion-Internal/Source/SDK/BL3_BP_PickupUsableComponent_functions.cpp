// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PickupUsableComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_GetOptionalErrorText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_PickupUsableComponent_C::K2_GetOptionalErrorText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_GetOptionalErrorText");

	UBP_PickupUsableComponent_C_K2_GetOptionalErrorText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_CanBeUsed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FUsabilityQuery*        Query                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PickupUsableComponent_C::K2_CanBeUsed(struct FUsabilityQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_CanBeUsed");

	UBP_PickupUsableComponent_C_K2_CanBeUsed_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
