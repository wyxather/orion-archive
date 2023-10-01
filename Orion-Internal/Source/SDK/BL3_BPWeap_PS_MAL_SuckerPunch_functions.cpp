// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_MAL_SuckerPunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.TryIdleAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_MAL_SuckerPunch_C::TryIdleAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.TryIdleAudio");

	ABPWeap_PS_MAL_SuckerPunch_C_TryIdleAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_MAL_SuckerPunch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.UserConstructionScript");

	ABPWeap_PS_MAL_SuckerPunch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_MAL_SuckerPunch_C::WeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.WeaponAttached");

	ABPWeap_PS_MAL_SuckerPunch_C_WeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.EquipEventNotify
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_MAL_SuckerPunch_C::EquipEventNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.EquipEventNotify");

	ABPWeap_PS_MAL_SuckerPunch_C_EquipEventNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.WeaponPutDownEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_MAL_SuckerPunch_C::WeaponPutDownEvent(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.WeaponPutDownEvent");

	ABPWeap_PS_MAL_SuckerPunch_C_WeaponPutDownEvent_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.OnKilledEnemy_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPWeap_PS_MAL_SuckerPunch_C::OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.OnKilledEnemy_Event");

	ABPWeap_PS_MAL_SuckerPunch_C_OnKilledEnemy_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_MAL_SuckerPunch_C::Notify_ReloadStarted(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.Notify_ReloadStarted");

	ABPWeap_PS_MAL_SuckerPunch_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_MAL_SuckerPunch_C::ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch");

	ABPWeap_PS_MAL_SuckerPunch_C_ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
