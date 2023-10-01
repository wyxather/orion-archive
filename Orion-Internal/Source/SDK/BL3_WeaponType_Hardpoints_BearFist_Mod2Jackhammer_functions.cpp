// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_BearFist_Mod2Jackhammer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.UserConstructionScript");

	AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.CausedDamage_BearFist
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType**         DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource**          DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails*   Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C::CausedDamage_BearFist(class AActor** DamageInstigator, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AActor** DamagedActor, struct FCausedDamageDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.CausedDamage_BearFist");

	AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C_CausedDamage_BearFist_Params params;
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


// Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.K2_InitializeMod
// (Event, Protected, BlueprintEvent)

void AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C::K2_InitializeMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.K2_InitializeMod");

	AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C_K2_InitializeMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Mod2Jackhammer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C::ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Mod2Jackhammer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Mod2Jackhammer");

	AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C_ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Mod2Jackhammer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
