// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_MAL_SM_DestructoSpin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.ReceiveBeginPlay");

	UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.K2_OnActivated");

	UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.EvaluateShot
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C::EvaluateShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.EvaluateShot");

	UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C_EvaluateShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C::ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_DestructoSpin.BPWeaponFireProjectile_MAL_SM_DestructoSpin_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin");

	UBPWeaponFireProjectile_MAL_SM_DestructoSpin_C_ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_DestructoSpin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
