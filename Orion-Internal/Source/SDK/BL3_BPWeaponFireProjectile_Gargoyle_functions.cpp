// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Gargoyle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Gargoyle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.ReceiveBeginPlay");

	UBPWeaponFireProjectile_Gargoyle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.NotifyReloadStart_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Gargoyle_C::NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.NotifyReloadStart_Event");

	UBPWeaponFireProjectile_Gargoyle_C_NotifyReloadStart_Event_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.NotifyUsed_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_Gargoyle_C::NotifyUsed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.NotifyUsed_Event");

	UBPWeaponFireProjectile_Gargoyle_C_NotifyUsed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.ExecuteUbergraph_BPWeaponFireProjectile_Gargoyle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Gargoyle_C::ExecuteUbergraph_BPWeaponFireProjectile_Gargoyle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gargoyle.BPWeaponFireProjectile_Gargoyle_C.ExecuteUbergraph_BPWeaponFireProjectile_Gargoyle");

	UBPWeaponFireProjectile_Gargoyle_C_ExecuteUbergraph_BPWeaponFireProjectile_Gargoyle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
