// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Torgue_BaseWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateActiveProjectiles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_Torgue_BaseWeapon_C::DetonateActiveProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateActiveProjectiles");

	ABPWeap_Torgue_BaseWeapon_C_DetonateActiveProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Torgue_BaseWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.UserConstructionScript");

	ABPWeap_Torgue_BaseWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_Torgue_BaseWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ReceiveBeginPlay");

	ABPWeap_Torgue_BaseWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ModeSwitched
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Torgue_BaseWeapon_C::ModeSwitched()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ModeSwitched");

	ABPWeap_Torgue_BaseWeapon_C_ModeSwitched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Torgue_BaseWeapon_C::Notify_ReloadEnded(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Notify_ReloadEnded");

	ABPWeap_Torgue_BaseWeapon_C_Notify_ReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateProjectiles
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Torgue_BaseWeapon_C::DetonateProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateProjectiles");

	ABPWeap_Torgue_BaseWeapon_C_DetonateProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Weapon_NotifyPutDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Torgue_BaseWeapon_C::Weapon_NotifyPutDown(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Weapon_NotifyPutDown");

	ABPWeap_Torgue_BaseWeapon_C_Weapon_NotifyPutDown_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ExecuteUbergraph_BPWeap_Torgue_BaseWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Torgue_BaseWeapon_C::ExecuteUbergraph_BPWeap_Torgue_BaseWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ExecuteUbergraph_BPWeap_Torgue_BaseWeapon");

	ABPWeap_Torgue_BaseWeapon_C_ExecuteUbergraph_BPWeap_Torgue_BaseWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
