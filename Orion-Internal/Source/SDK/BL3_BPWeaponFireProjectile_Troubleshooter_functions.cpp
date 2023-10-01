// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Troubleshooter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Troubleshooter_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.K2_OnActivated");

	UBPWeaponFireProjectile_Troubleshooter_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_Troubleshooter_C::WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.WeaponFired");

	UBPWeaponFireProjectile_Troubleshooter_C_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.OnCausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPWeaponFireProjectile_Troubleshooter_C::OnCausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.OnCausedDamage");

	UBPWeaponFireProjectile_Troubleshooter_C_OnCausedDamage_Params params;
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


// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.ClearLastTarget
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectile_Troubleshooter_C::ClearLastTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.ClearLastTarget");

	UBPWeaponFireProjectile_Troubleshooter_C_ClearLastTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.ExecuteUbergraph_BPWeaponFireProjectile_Troubleshooter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Troubleshooter_C::ExecuteUbergraph_BPWeaponFireProjectile_Troubleshooter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.ExecuteUbergraph_BPWeaponFireProjectile_Troubleshooter");

	UBPWeaponFireProjectile_Troubleshooter_C_ExecuteUbergraph_BPWeaponFireProjectile_Troubleshooter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
