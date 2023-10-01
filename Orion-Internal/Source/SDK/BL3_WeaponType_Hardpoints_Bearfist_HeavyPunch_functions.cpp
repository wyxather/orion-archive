// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_Bearfist_HeavyPunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.DoMod1Effect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageSource*           InDamageSource                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InDamageCauser                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_Bearfist_HeavyPunch_C::DoMod1Effect(class UDamageSource* InDamageSource, class AActor* InDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.DoMod1Effect");

	AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_DoMod1Effect_Params params;
	params.InDamageSource = InDamageSource;
	params.InDamageCauser = InDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponType_Hardpoints_Bearfist_HeavyPunch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.UserConstructionScript");

	AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.CausedDamage_BearFist
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType**         DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource**          DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails*   Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AWeaponType_Hardpoints_Bearfist_HeavyPunch_C::CausedDamage_BearFist(class AActor** DamageInstigator, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AActor** DamagedActor, struct FCausedDamageDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.CausedDamage_BearFist");

	AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_CausedDamage_BearFist_Params params;
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


// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.BndEvt__IronBearWeaponUseComponent_Jackhammer_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_WeaponType_Hardpoints_Bearfist_HeavyPunch
// (BlueprintEvent)

void AWeaponType_Hardpoints_Bearfist_HeavyPunch_C::BndEvt__IronBearWeaponUseComponent_Jackhammer_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_WeaponType_Hardpoints_Bearfist_HeavyPunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.BndEvt__IronBearWeaponUseComponent_Jackhammer_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_WeaponType_Hardpoints_Bearfist_HeavyPunch");

	AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_BndEvt__IronBearWeaponUseComponent_Jackhammer_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_WeaponType_Hardpoints_Bearfist_HeavyPunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.ExecuteUbergraph_WeaponType_Hardpoints_Bearfist_HeavyPunch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_Bearfist_HeavyPunch_C::ExecuteUbergraph_WeaponType_Hardpoints_Bearfist_HeavyPunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.ExecuteUbergraph_WeaponType_Hardpoints_Bearfist_HeavyPunch");

	AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_ExecuteUbergraph_WeaponType_Hardpoints_Bearfist_HeavyPunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
