// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Shoveler_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Shoveler_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.ReceiveBeginPlay");

	UBPWeaponFireProjectile_Shoveler_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.NotifyReloadStart_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Shoveler_C::NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.NotifyReloadStart_Event");

	UBPWeaponFireProjectile_Shoveler_C_NotifyReloadStart_Event_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Shoveler_C::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.K2_OnDeactivated");

	UBPWeaponFireProjectile_Shoveler_C_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.ExecuteUbergraph_BPWeaponFireProjectile_Shoveler
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Shoveler_C::ExecuteUbergraph_BPWeaponFireProjectile_Shoveler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C.ExecuteUbergraph_BPWeaponFireProjectile_Shoveler");

	UBPWeaponFireProjectile_Shoveler_C_ExecuteUbergraph_BPWeaponFireProjectile_Shoveler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
