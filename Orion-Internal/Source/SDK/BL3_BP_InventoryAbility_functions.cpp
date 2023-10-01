// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_InventoryAbility_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InventoryAbility.BP_InventoryAbility_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UBP_InventoryAbility_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryAbility.BP_InventoryAbility_C.CalculateAbilityState");

	UBP_InventoryAbility_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_InventoryAbility.BP_InventoryAbility_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UBP_InventoryAbility_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryAbility.BP_InventoryAbility_C.OnActivated");

	UBP_InventoryAbility_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryAbility.BP_InventoryAbility_C.ExecuteUbergraph_BP_InventoryAbility
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_InventoryAbility_C::ExecuteUbergraph_BP_InventoryAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryAbility.BP_InventoryAbility_C.ExecuteUbergraph_BP_InventoryAbility");

	UBP_InventoryAbility_C_ExecuteUbergraph_BP_InventoryAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
