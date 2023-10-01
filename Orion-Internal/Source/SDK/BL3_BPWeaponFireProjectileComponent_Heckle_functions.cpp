// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Heckle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Heckle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_Heckle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_Heckle_C::ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ReloadStarted");

	UBPWeaponFireProjectileComponent_Heckle_C_ReloadStarted_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.PowersCombined
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Heckle_C::PowersCombined()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.PowersCombined");

	UBPWeaponFireProjectileComponent_Heckle_C_PowersCombined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Heckle_C::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnDeactivated");

	UBPWeaponFireProjectileComponent_Heckle_C_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.CheckPlayers
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Heckle_C::CheckPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.CheckPlayers");

	UBPWeaponFireProjectileComponent_Heckle_C_CheckPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Heckle_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.K2_OnActivated");

	UBPWeaponFireProjectileComponent_Heckle_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_Heckle_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Heckle.BPWeaponFireProjectileComponent_Heckle_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle");

	UBPWeaponFireProjectileComponent_Heckle_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Heckle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
