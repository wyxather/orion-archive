// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_MAL_ElemSecondary_00_Master_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MAL_ElemSecondary_00_Master.BP_MAL_ElemSecondary_00_Master_C.K2_OnApplyAspect
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 InventoryActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryBalanceStateComponent** InventoryBalanceState          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_MAL_ElemSecondary_00_Master_C::K2_OnApplyAspect(class AActor** InventoryActor, class UInventoryBalanceStateComponent** InventoryBalanceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MAL_ElemSecondary_00_Master.BP_MAL_ElemSecondary_00_Master_C.K2_OnApplyAspect");

	UBP_MAL_ElemSecondary_00_Master_C_K2_OnApplyAspect_Params params;
	params.InventoryActor = InventoryActor;
	params.InventoryBalanceState = InventoryBalanceState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MAL_ElemSecondary_00_Master.BP_MAL_ElemSecondary_00_Master_C.K2_GetFriendlyDescription
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UBP_MAL_ElemSecondary_00_Master_C::K2_GetFriendlyDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MAL_ElemSecondary_00_Master.BP_MAL_ElemSecondary_00_Master_C.K2_GetFriendlyDescription");

	UBP_MAL_ElemSecondary_00_Master_C_K2_GetFriendlyDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
