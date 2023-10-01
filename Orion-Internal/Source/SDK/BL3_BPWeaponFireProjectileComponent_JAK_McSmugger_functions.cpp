// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_McSmugger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnActivated");

	UBPWeaponFireProjectileComponent_JAK_McSmugger_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.OnCausedDeath_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.OnCausedDeath_Event");

	UBPWeaponFireProjectileComponent_JAK_McSmugger_C_OnCausedDeath_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.K2_OnDeactivated");

	UBPWeaponFireProjectileComponent_JAK_McSmugger_C_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.NotifyReloadStarted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.NotifyReloadStarted_Event");

	UBPWeaponFireProjectileComponent_JAK_McSmugger_C_NotifyReloadStarted_Event_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.PlayEffect
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::PlayEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.PlayEffect");

	UBPWeaponFireProjectileComponent_JAK_McSmugger_C_PlayEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.StopEffect
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::StopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.StopEffect");

	UBPWeaponFireProjectileComponent_JAK_McSmugger_C_StopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_JAK_McSmugger_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_McSmugger.BPWeaponFireProjectileComponent_JAK_McSmugger_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger");

	UBPWeaponFireProjectileComponent_JAK_McSmugger_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_McSmugger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
