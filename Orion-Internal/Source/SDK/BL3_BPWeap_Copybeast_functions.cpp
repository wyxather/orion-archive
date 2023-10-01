// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Copybeast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_Copybeast.BPWeap_Copybeast_C.Tediore_WeaponData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageRadius                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumMirvProjectiles             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FireRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LoadedAmmo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ThrowType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Copybeast_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int* ThrowType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.Tediore_WeaponData");

	ABPWeap_Copybeast_C_Tediore_WeaponData_Params params;

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


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.DetonateActiveProjectiles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_Copybeast_C::DetonateActiveProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.DetonateActiveProjectiles");

	ABPWeap_Copybeast_C_DetonateActiveProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.HideWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Copybeast_C::HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.HideWeapon");

	ABPWeap_Copybeast_C_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.ShowWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_Copybeast_C::ShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.ShowWeapon");

	ABPWeap_Copybeast_C_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.ThrowWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Copybeast_C::ThrowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.ThrowWeapon");

	ABPWeap_Copybeast_C_ThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Copybeast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.UserConstructionScript");

	ABPWeap_Copybeast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Copybeast_C::WeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.WeaponAttached");

	ABPWeap_Copybeast_C_WeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Copybeast_C::Notify_ReloadStarted(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.Notify_ReloadStarted");

	ABPWeap_Copybeast_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_Copybeast_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.ReceiveBeginPlay");

	ABPWeap_Copybeast_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.Weapon_NotifyPutDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Copybeast_C::Weapon_NotifyPutDown(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.Weapon_NotifyPutDown");

	ABPWeap_Copybeast_C_Weapon_NotifyPutDown_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.DetonateProjectiles
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Copybeast_C::DetonateProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.DetonateProjectiles");

	ABPWeap_Copybeast_C_DetonateProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Copybeast.BPWeap_Copybeast_C.ExecuteUbergraph_BPWeap_Copybeast
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Copybeast_C::ExecuteUbergraph_BPWeap_Copybeast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Copybeast.BPWeap_Copybeast_C.ExecuteUbergraph_BPWeap_Copybeast");

	ABPWeap_Copybeast_C_ExecuteUbergraph_BPWeap_Copybeast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
