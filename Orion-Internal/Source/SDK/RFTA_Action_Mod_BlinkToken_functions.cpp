// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_BlinkToken_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ForceStopTeleport
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Mod_BlinkToken_C::ForceStopTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ForceStopTeleport");

	UAction_Mod_BlinkToken_C_ForceStopTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.CanBlink
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_BlinkToken_C::CanBlink(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.CanBlink");

	UAction_Mod_BlinkToken_C_CanBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_BlinkToken_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.FilterIncomingDamage");

	UAction_Mod_BlinkToken_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.Set Player State
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_BlinkToken_C::Set_Player_State(struct FName* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.Set Player State");

	UAction_Mod_BlinkToken_C_Set_Player_State_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.UpdateIndicator
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Mod_BlinkToken_C::UpdateIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.UpdateIndicator");

	UAction_Mod_BlinkToken_C_UpdateIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ClearIndicator
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Mod_BlinkToken_C::ClearIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ClearIndicator");

	UAction_Mod_BlinkToken_C_ClearIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.SetPlayerVisibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_BlinkToken_C::SetPlayerVisibility(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.SetPlayerVisibility");

	UAction_Mod_BlinkToken_C_SetPlayerVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.TryFinalizeTeleport
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                FinalLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_BlinkToken_C::TryFinalizeTeleport(struct FVector* FinalLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.TryFinalizeTeleport");

	UAction_Mod_BlinkToken_C_TryFinalizeTeleport_Params params;
	params.FinalLocation = FinalLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.TryInitializeTeleport
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Mod_BlinkToken_C::TryInitializeTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.TryInitializeTeleport");

	UAction_Mod_BlinkToken_C_TryInitializeTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_BlinkToken_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.OnActionStart");

	UAction_Mod_BlinkToken_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.OnTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_BlinkToken_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.OnTick");

	UAction_Mod_BlinkToken_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.MulticastFinalizeLocation
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_BlinkToken_C::MulticastFinalizeLocation(class AActor** Owner, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.MulticastFinalizeLocation");

	UAction_Mod_BlinkToken_C_MulticastFinalizeLocation_Params params;
	params.Owner = Owner;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ServerFinalizeTeleport
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Mod_BlinkToken_C::ServerFinalizeTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ServerFinalizeTeleport");

	UAction_Mod_BlinkToken_C_ServerFinalizeTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_BlinkToken_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.OnActionStop");

	UAction_Mod_BlinkToken_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ExecuteUbergraph_Action_Mod_BlinkToken
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_BlinkToken_C::ExecuteUbergraph_Action_Mod_BlinkToken(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_BlinkToken.Action_Mod_BlinkToken_C.ExecuteUbergraph_Action_Mod_BlinkToken");

	UAction_Mod_BlinkToken_C_ExecuteUbergraph_Action_Mod_BlinkToken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
