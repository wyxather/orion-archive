// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_HW_COV_Poop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.TryIdleAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_HW_COV_Poop_C::TryIdleAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.TryIdleAudio");

	ABPWeap_HW_COV_Poop_C_TryIdleAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_HW_COV_Poop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.UserConstructionScript");

	ABPWeap_HW_COV_Poop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_HW_COV_Poop_C::Notify_ReloadStarted(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.Notify_ReloadStarted");

	ABPWeap_HW_COV_Poop_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_HW_COV_Poop_C::WeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponAttached");

	ABPWeap_HW_COV_Poop_C_WeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.EquipEventNotify
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_HW_COV_Poop_C::EquipEventNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.EquipEventNotify");

	ABPWeap_HW_COV_Poop_C_EquipEventNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponPutDownEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_HW_COV_Poop_C::WeaponPutDownEvent(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponPutDownEvent");

	ABPWeap_HW_COV_Poop_C_WeaponPutDownEvent_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.OnKilledEnemy_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPWeap_HW_COV_Poop_C::OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.OnKilledEnemy_Event");

	ABPWeap_HW_COV_Poop_C_OnKilledEnemy_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.ExecuteUbergraph_BPWeap_HW_COV_Poop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_HW_COV_Poop_C::ExecuteUbergraph_BPWeap_HW_COV_Poop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.ExecuteUbergraph_BPWeap_HW_COV_Poop");

	ABPWeap_HW_COV_Poop_C_ExecuteUbergraph_BPWeap_HW_COV_Poop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
