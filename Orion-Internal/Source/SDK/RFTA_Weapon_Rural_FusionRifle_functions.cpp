// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Rural_FusionRifle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ModifyEmisMaterial
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Rural_FusionRifle_C::ModifyEmisMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ModifyEmisMaterial");

	AWeapon_Rural_FusionRifle_C_ModifyEmisMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.DetermineWeaponFireRecoil
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InRecoilScalar                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OutRecoilScalar                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Rural_FusionRifle_C::DetermineWeaponFireRecoil(float* InRecoilScalar, float* OutRecoilScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.DetermineWeaponFireRecoil");

	AWeapon_Rural_FusionRifle_C_DetermineWeaponFireRecoil_Params params;
	params.InRecoilScalar = InRecoilScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRecoilScalar != nullptr)
		*OutRecoilScalar = params.OutRecoilScalar;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ActivateBeamFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ChargesUsed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Rural_FusionRifle_C::ActivateBeamFX(int* ChargesUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ActivateBeamFX");

	AWeapon_Rural_FusionRifle_C_ActivateBeamFX_Params params;
	params.ChargesUsed = ChargesUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ModPowerDecaying
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Rural_FusionRifle_C::ModPowerDecaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ModPowerDecaying");

	AWeapon_Rural_FusionRifle_C_ModPowerDecaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.StartModPowerDecay
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeapon_Rural_FusionRifle_C::StartModPowerDecay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.StartModPowerDecay");

	AWeapon_Rural_FusionRifle_C_StartModPowerDecay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_Rural_FusionRifle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ReceiveBeginPlay");

	AWeapon_Rural_FusionRifle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnHitTarget
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AWeapon_Rural_FusionRifle_C::OnHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnHitTarget");

	AWeapon_Rural_FusionRifle_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnFireBegin
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_Rural_FusionRifle_C::OnFireBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnFireBegin");

	AWeapon_Rural_FusionRifle_C_OnFireBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnFireEnd
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_Rural_FusionRifle_C::OnFireEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnFireEnd");

	AWeapon_Rural_FusionRifle_C_OnFireEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.Firing
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFiring                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Rural_FusionRifle_C::Firing(bool* IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.Firing");

	AWeapon_Rural_FusionRifle_C_Firing_Params params;
	params.IsFiring = IsFiring;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ApplyRecoil
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scalar                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Rural_FusionRifle_C::ApplyRecoil(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ApplyRecoil");

	AWeapon_Rural_FusionRifle_C_ApplyRecoil_Params params;
	params.Scalar = Scalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_Rural_FusionRifle_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnComputeStats");

	AWeapon_Rural_FusionRifle_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ModPowerChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Rural_FusionRifle_C::ModPowerChanged(float* Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ModPowerChanged");

	AWeapon_Rural_FusionRifle_C_ModPowerChanged_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ExecuteUbergraph_Weapon_Rural_FusionRifle
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Rural_FusionRifle_C::ExecuteUbergraph_Weapon_Rural_FusionRifle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ExecuteUbergraph_Weapon_Rural_FusionRifle");

	AWeapon_Rural_FusionRifle_C_ExecuteUbergraph_Weapon_Rural_FusionRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.FireEnd__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AWeapon_Rural_FusionRifle_C::FireEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.FireEnd__DelegateSignature");

	AWeapon_Rural_FusionRifle_C_FireEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.FireStart__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AWeapon_Rural_FusionRifle_C::FireStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.FireStart__DelegateSignature");

	AWeapon_Rural_FusionRifle_C_FireStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
