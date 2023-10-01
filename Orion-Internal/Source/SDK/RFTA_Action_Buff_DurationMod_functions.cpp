// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Buff_DurationMod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.PotencyTraitGetDuration
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Buff_DurationMod_C::PotencyTraitGetDuration(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.PotencyTraitGetDuration");

	UAction_Buff_DurationMod_C_PotencyTraitGetDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Buff_DurationMod_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnActionStart");

	UAction_Buff_DurationMod_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnReapplyBuff
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Buff_DurationMod_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnReapplyBuff");

	UAction_Buff_DurationMod_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.ExecuteUbergraph_Action_Buff_DurationMod
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Buff_DurationMod_C::ExecuteUbergraph_Action_Buff_DurationMod(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.ExecuteUbergraph_Action_Buff_DurationMod");

	UAction_Buff_DurationMod_C_ExecuteUbergraph_Action_Buff_DurationMod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
