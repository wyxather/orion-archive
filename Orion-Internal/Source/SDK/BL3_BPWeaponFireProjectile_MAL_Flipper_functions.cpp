// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_MAL_Flipper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_Flipper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ReceiveBeginPlay");

	UBPWeaponFireProjectile_MAL_Flipper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedStarted_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_Flipper_C::NotifyUsedStarted_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedStarted_Event");

	UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsedStarted_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_Flipper_C::NotifyUsedFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsedFinished_Event");

	UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsedFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsed_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_Flipper_C::NotifyUsed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyUsed_Event");

	UBPWeaponFireProjectile_MAL_Flipper_C_NotifyUsed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyReloadStarted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_MAL_Flipper_C::NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.NotifyReloadStarted_Event");

	UBPWeaponFireProjectile_MAL_Flipper_C_NotifyReloadStarted_Event_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_MAL_Flipper_C::ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper");

	UBPWeaponFireProjectile_MAL_Flipper_C_ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
