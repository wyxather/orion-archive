// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_MAL_SM_Tsunami_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_SM_Tsunami_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.ReceiveBeginPlay");

	UBPWeaponFireProjectile_MAL_SM_Tsunami_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_SM_Tsunami_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.K2_OnActivated");

	UBPWeaponFireProjectile_MAL_SM_Tsunami_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.EvaluateShot
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_MAL_SM_Tsunami_C::EvaluateShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.EvaluateShot");

	UBPWeaponFireProjectile_MAL_SM_Tsunami_C_EvaluateShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_MAL_SM_Tsunami_C::ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_MAL_SM_Tsunami.BPWeaponFireProjectile_MAL_SM_Tsunami_C.ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami");

	UBPWeaponFireProjectile_MAL_SM_Tsunami_C_ExecuteUbergraph_BPWeaponFireProjectile_MAL_SM_Tsunami_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
