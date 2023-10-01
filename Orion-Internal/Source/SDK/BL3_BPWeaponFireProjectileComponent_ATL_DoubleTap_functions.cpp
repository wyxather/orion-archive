// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_ATL_DoubleTap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.GetLockedTarget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBPWeaponFireProjectileComponent_ATL_DoubleTap_C::GetLockedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.GetLockedTarget");

	UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_GetLockedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_ATL_DoubleTap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.Notify_WeaponFired
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_ATL_DoubleTap_C::Notify_WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.Notify_WeaponFired");

	UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_Notify_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.NotifyReloadStart_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_ATL_DoubleTap_C::NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.NotifyReloadStart_Event");

	UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_NotifyReloadStart_Event_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_DoubleTap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_ATL_DoubleTap_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_DoubleTap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_DoubleTap.BPWeaponFireProjectileComponent_ATL_DoubleTap_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_DoubleTap");

	UBPWeaponFireProjectileComponent_ATL_DoubleTap_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_DoubleTap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
