// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_TheSeventhSense_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_TheSeventhSense_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.ReceiveBeginPlay");

	UBPWeaponFireProjectile_TheSeventhSense_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.NotifyReloadStart_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_TheSeventhSense_C::NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.NotifyReloadStart_Event");

	UBPWeaponFireProjectile_TheSeventhSense_C_NotifyReloadStart_Event_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.HomeOnReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightProjectile*        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_TheSeventhSense_C::HomeOnReload(class ULightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.HomeOnReload");

	UBPWeaponFireProjectile_TheSeventhSense_C_HomeOnReload_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_TheSeventhSense_C::ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C.ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense");

	UBPWeaponFireProjectile_TheSeventhSense_C_ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
