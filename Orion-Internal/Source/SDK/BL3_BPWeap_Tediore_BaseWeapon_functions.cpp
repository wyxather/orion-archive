// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Tediore_BaseWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Tediore_WeaponData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageRadius                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumMirvProjectiles             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FireRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LoadedAmmo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ThrowType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Tediore_BaseWeapon_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int* ThrowType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Tediore_WeaponData");

	ABPWeap_Tediore_BaseWeapon_C_Tediore_WeaponData_Params params;

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


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.OnRep_HideLegs
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::OnRep_HideLegs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.OnRep_HideLegs");

	ABPWeap_Tediore_BaseWeapon_C_OnRep_HideLegs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreShowWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::TedioreShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreShowWeapon");

	ABPWeap_Tediore_BaseWeapon_C_TedioreShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreHideWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::TedioreHideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreHideWeapon");

	ABPWeap_Tediore_BaseWeapon_C_TedioreHideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreThrowWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ThrownProjectile               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Tediore_BaseWeapon_C::TedioreThrowWeapon(class AActor** ThrownProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreThrowWeapon");

	ABPWeap_Tediore_BaseWeapon_C_TedioreThrowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ThrownProjectile != nullptr)
		*ThrownProjectile = params.ThrownProjectile;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.UserConstructionScript");

	ABPWeap_Tediore_BaseWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ReceiveBeginPlay");

	ABPWeap_Tediore_BaseWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Tediore_BaseWeapon_C::Notify_ReloadStarted(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Notify_ReloadStarted");

	ABPWeap_Tediore_BaseWeapon_C_Notify_ReloadStarted_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::WeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.WeaponAttached");

	ABPWeap_Tediore_BaseWeapon_C_WeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeOverhand
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeOverhand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeOverhand");

	ABPWeap_Tediore_BaseWeapon_C_ThrowTypeOverhand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideRL
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeSideRL()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideRL");

	ABPWeap_Tediore_BaseWeapon_C_ThrowTypeSideRL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeUnderhand
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeUnderhand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeUnderhand");

	ABPWeap_Tediore_BaseWeapon_C_ThrowTypeUnderhand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideLR
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeSideLR()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideLR");

	ABPWeap_Tediore_BaseWeapon_C_ThrowTypeSideLR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ExecuteUbergraph_BPWeap_Tediore_BaseWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Tediore_BaseWeapon_C::ExecuteUbergraph_BPWeap_Tediore_BaseWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ExecuteUbergraph_BPWeap_Tediore_BaseWeapon");

	ABPWeap_Tediore_BaseWeapon_C_ExecuteUbergraph_BPWeap_Tediore_BaseWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
