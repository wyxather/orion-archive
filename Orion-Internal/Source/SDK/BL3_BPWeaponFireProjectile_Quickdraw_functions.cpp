// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Quickdraw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReloadTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Quickdraw_C::ReloadTime(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReloadTime");

	UBPWeaponFireProjectile_Quickdraw_C_ReloadTime_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ApplyShotModAndReload
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_Quickdraw_C::ApplyShotModAndReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ApplyShotModAndReload");

	UBPWeaponFireProjectile_Quickdraw_C_ApplyShotModAndReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReloadTimer
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_Quickdraw_C::ReloadTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReloadTimer");

	UBPWeaponFireProjectile_Quickdraw_C_ReloadTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Quickdraw_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.K2_OnActivated");

	UBPWeaponFireProjectile_Quickdraw_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Quickdraw_C::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.K2_OnDeactivated");

	UBPWeaponFireProjectile_Quickdraw_C_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Quickdraw_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ReceiveEndPlay");

	UBPWeaponFireProjectile_Quickdraw_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Quickdraw_C::ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Quickdraw.BPWeaponFireProjectile_Quickdraw_C.ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw");

	UBPWeaponFireProjectile_Quickdraw_C_ExecuteUbergraph_BPWeaponFireProjectile_Quickdraw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
