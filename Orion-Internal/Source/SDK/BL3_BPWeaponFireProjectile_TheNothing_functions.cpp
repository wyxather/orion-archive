// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_TheNothing_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_TheNothing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ReceiveBeginPlay");

	UBPWeaponFireProjectile_TheNothing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.NotifyUsed_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_TheNothing_C::NotifyUsed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.NotifyUsed_Event");

	UBPWeaponFireProjectile_TheNothing_C_NotifyUsed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.FireProjectiles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Data_Blueprint                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SampleCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_TheNothing_C::FireProjectiles(class UClass* Data_Blueprint, int SampleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.FireProjectiles");

	UBPWeaponFireProjectile_TheNothing_C_FireProjectiles_Params params;
	params.Data_Blueprint = Data_Blueprint;
	params.SampleCount = SampleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ExecuteUbergraph_BPWeaponFireProjectile_TheNothing
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_TheNothing_C::ExecuteUbergraph_BPWeaponFireProjectile_TheNothing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_TheNothing.BPWeaponFireProjectile_TheNothing_C.ExecuteUbergraph_BPWeaponFireProjectile_TheNothing");

	UBPWeaponFireProjectile_TheNothing_C_ExecuteUbergraph_BPWeaponFireProjectile_TheNothing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
