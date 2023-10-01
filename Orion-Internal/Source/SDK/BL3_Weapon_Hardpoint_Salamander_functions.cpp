// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_Salamander_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod3
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_C::SetupMod3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod3");

	AWeapon_Hardpoint_Salamander_C_SetupMod3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupNoMod
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_C::SetupNoMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupNoMod");

	AWeapon_Hardpoint_Salamander_C_SetupNoMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod2
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_C::SetupMod2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod2");

	AWeapon_Hardpoint_Salamander_C_SetupMod2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ApplySalamanderMod2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Hardpoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Hardpoint_Salamander_C::ApplySalamanderMod2(class UObject* DamageSource, class AActor* Hardpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ApplySalamanderMod2");

	AWeapon_Hardpoint_Salamander_C_ApplySalamanderMod2_Params params;
	params.DamageSource = DamageSource;
	params.Hardpoint = Hardpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ToggleBlockEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Toggle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Hardpoint_Salamander_C::ToggleBlockEnabled(bool Toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ToggleBlockEnabled");

	AWeapon_Hardpoint_Salamander_C_ToggleBlockEnabled_Params params;
	params.Toggle = Toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.UserConstructionScript");

	AWeapon_Hardpoint_Salamander_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.CausedDamage_Salamander
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AWeapon_Hardpoint_Salamander_C::CausedDamage_Salamander(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.CausedDamage_Salamander");

	AWeapon_Hardpoint_Salamander_C_CausedDamage_Salamander_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander
// (BlueprintEvent)
// Parameters:
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Hardpoint_Salamander_C::BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander(bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander");

	AWeapon_Hardpoint_Salamander_C_BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize
// (Event, Protected, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_C::K2_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize");

	AWeapon_Hardpoint_Salamander_C_K2_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize1P
// (Event, Protected, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_C::K2_Initialize1P()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize1P");

	AWeapon_Hardpoint_Salamander_C_K2_Initialize1P_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Hardpoint_Salamander_C::ExecuteUbergraph_Weapon_Hardpoint_Salamander(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander");

	AWeapon_Hardpoint_Salamander_C_ExecuteUbergraph_Weapon_Hardpoint_Salamander_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
