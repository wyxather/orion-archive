// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Debuff_Frozen_OnPlayer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.PlayFrozenMeltFX_WithoutSpiceroot
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Debuff_Frozen_OnPlayer_C::PlayFrozenMeltFX_WithoutSpiceroot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.PlayFrozenMeltFX_WithoutSpiceroot");

	UAction_Debuff_Frozen_OnPlayer_C_PlayFrozenMeltFX_WithoutSpiceroot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Debuff_Frozen_OnPlayer_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnActionStop");

	UAction_Debuff_Frozen_OnPlayer_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Debuff_Frozen_OnPlayer_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnActionStart");

	UAction_Debuff_Frozen_OnPlayer_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Debuff_Frozen_OnPlayer_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.OnComputeStats");

	UAction_Debuff_Frozen_OnPlayer_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.SFX_Frozen_DeActivate
// 00007FF6F8B35350
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UAction_Debuff_Frozen_OnPlayer_C::SFX_Frozen_DeActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.SFX_Frozen_DeActivate");

	UAction_Debuff_Frozen_OnPlayer_C_SFX_Frozen_DeActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_Frozen_OnPlayer_C::ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C.ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer");

	UAction_Debuff_Frozen_OnPlayer_C_ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
