// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_ATL_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.GetLockedTarget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBPWeaponFireProjectileComponent_ATL_C::GetLockedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.GetLockedTarget");

	UBPWeaponFireProjectileComponent_ATL_C_GetLockedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_ATL_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_ATL_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.Notify_WeaponFired
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_ATL_C::Notify_WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.Notify_WeaponFired");

	UBPWeaponFireProjectileComponent_ATL_C_Notify_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_ATL_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL");

	UBPWeaponFireProjectileComponent_ATL_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
