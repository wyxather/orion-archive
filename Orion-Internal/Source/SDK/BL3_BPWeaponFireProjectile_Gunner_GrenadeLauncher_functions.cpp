// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Gunner_GrenadeLauncher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.GetShotLightProjectileData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::GetShotLightProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.GetShotLightProjectileData");

	UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_GetShotLightProjectileData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.SetNewGrenadeType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bReadyForSingularityGrenade    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::SetNewGrenadeType(bool bReadyForSingularityGrenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.SetNewGrenadeType");

	UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_SetNewGrenadeType_Params params;
	params.bReadyForSingularityGrenade = bReadyForSingularityGrenade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.GetShotProjectileData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::GetShotProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.GetShotProjectileData");

	UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_GetShotProjectileData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.ReceiveBeginPlay");

	UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C::ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_GrenadeLauncher.BPWeaponFireProjectile_Gunner_GrenadeLauncher_C.ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher");

	UBPWeaponFireProjectile_Gunner_GrenadeLauncher_C_ExecuteUbergraph_BPWeaponFireProjectile_Gunner_GrenadeLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
