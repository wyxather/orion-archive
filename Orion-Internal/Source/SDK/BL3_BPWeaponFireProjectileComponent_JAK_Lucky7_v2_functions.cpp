// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_Lucky7_v2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.OnRep_ReelsBools
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::OnRep_ReelsBools()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.OnRep_ReelsBools");

	UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_OnRep_ReelsBools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadEnded_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::NotifyReloadEnded_Event(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadEnded_Event");

	UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_NotifyReloadEnded_Event_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadStarted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.NotifyReloadStarted_Event");

	UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_NotifyReloadStarted_Event_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnDeactivated");

	UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.K2_OnActivated");

	UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsFX
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::SetReelsFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsFX");

	UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SetReelsFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsBonuses
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::SetReelsBonuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SetReelsBonuses");

	UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SetReelsBonuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SpinReels
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::SpinReels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.SpinReels");

	UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_SpinReels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Lucky7_v2.BPWeaponFireProjectileComponent_JAK_Lucky7_v2_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2");

	UBPWeaponFireProjectileComponent_JAK_Lucky7_v2_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Lucky7_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
