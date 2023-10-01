// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_Hyperion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Tediore_WeaponData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageRadius                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumMirvProjectiles             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FireRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LoadedAmmo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ThrowType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SM_Hyperion_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int* ThrowType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Tediore_WeaponData");

	ABPWeap_SM_Hyperion_C_Tediore_WeaponData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageRadius != nullptr)
		*DamageRadius = params.DamageRadius;
	if (DamageTypeClass != nullptr)
		*DamageTypeClass = params.DamageTypeClass;
	if (NumMirvProjectiles != nullptr)
		*NumMirvProjectiles = params.NumMirvProjectiles;
	if (FireRate != nullptr)
		*FireRate = params.FireRate;
	if (LoadedAmmo != nullptr)
		*LoadedAmmo = params.LoadedAmmo;
	if (ThrowType != nullptr)
		*ThrowType = params.ThrowType;
}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.HideWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_Hyperion_C::HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.HideWeapon");

	ABPWeap_SM_Hyperion_C_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ShowWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_Hyperion_C::ShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ShowWeapon");

	ABPWeap_SM_Hyperion_C_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ThrowWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_Hyperion_C::ThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ThrowWeapon");

	ABPWeap_SM_Hyperion_C_ThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_Hyperion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.UserConstructionScript");

	ABPWeap_SM_Hyperion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_Hyperion_C::WeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.WeaponAttached");

	ABPWeap_SM_Hyperion_C_WeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SM_Hyperion_C::Notify_ReloadStarted(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Notify_ReloadStarted");

	ABPWeap_SM_Hyperion_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ExecuteUbergraph_BPWeap_SM_Hyperion
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SM_Hyperion_C::ExecuteUbergraph_BPWeap_SM_Hyperion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ExecuteUbergraph_BPWeap_SM_Hyperion");

	ABPWeap_SM_Hyperion_C_ExecuteUbergraph_BPWeap_SM_Hyperion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
