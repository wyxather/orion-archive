// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Consumable_HydroCoolant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.PlayFX
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Consumable_HydroCoolant_C::PlayFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.PlayFX");

	UAction_Consumable_HydroCoolant_C_PlayFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Consumable_HydroCoolant_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.OnActionStart");

	UAction_Consumable_HydroCoolant_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Consumable_HydroCoolant_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.OnComputeStats");

	UAction_Consumable_HydroCoolant_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.OnReapplyBuff
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Consumable_HydroCoolant_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.OnReapplyBuff");

	UAction_Consumable_HydroCoolant_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.ExecuteUbergraph_Action_Consumable_HydroCoolant
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Consumable_HydroCoolant_C::ExecuteUbergraph_Action_Consumable_HydroCoolant(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HydroCoolant.Action_Consumable_HydroCoolant_C.ExecuteUbergraph_Action_Consumable_HydroCoolant");

	UAction_Consumable_HydroCoolant_C_ExecuteUbergraph_Action_Consumable_HydroCoolant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
