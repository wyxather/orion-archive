#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Rural_FusionRifle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ModifyEmisMaterial
struct AWeapon_Rural_FusionRifle_C_ModifyEmisMaterial_Params
{
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.DetermineWeaponFireRecoil
struct AWeapon_Rural_FusionRifle_C_DetermineWeaponFireRecoil_Params
{
	float*                                             InRecoilScalar;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutRecoilScalar;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ActivateBeamFX
struct AWeapon_Rural_FusionRifle_C_ActivateBeamFX_Params
{
	int*                                               ChargesUsed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ModPowerDecaying
struct AWeapon_Rural_FusionRifle_C_ModPowerDecaying_Params
{
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.StartModPowerDecay
struct AWeapon_Rural_FusionRifle_C_StartModPowerDecay_Params
{
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ReceiveBeginPlay
struct AWeapon_Rural_FusionRifle_C_ReceiveBeginPlay_Params
{
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnHitTarget
struct AWeapon_Rural_FusionRifle_C_OnHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnFireBegin
struct AWeapon_Rural_FusionRifle_C_OnFireBegin_Params
{
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnFireEnd
struct AWeapon_Rural_FusionRifle_C_OnFireEnd_Params
{
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.Firing
struct AWeapon_Rural_FusionRifle_C_Firing_Params
{
	bool*                                              IsFiring;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ApplyRecoil
struct AWeapon_Rural_FusionRifle_C_ApplyRecoil_Params
{
	float*                                             Scalar;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.OnComputeStats
struct AWeapon_Rural_FusionRifle_C_OnComputeStats_Params
{
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ModPowerChanged
struct AWeapon_Rural_FusionRifle_C_ModPowerChanged_Params
{
	float*                                             Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.ExecuteUbergraph_Weapon_Rural_FusionRifle
struct AWeapon_Rural_FusionRifle_C_ExecuteUbergraph_Weapon_Rural_FusionRifle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.FireEnd__DelegateSignature
struct AWeapon_Rural_FusionRifle_C_FireEnd__DelegateSignature_Params
{
};

// Function Weapon_Rural_FusionRifle.Weapon_Rural_FusionRifle_C.FireStart__DelegateSignature
struct AWeapon_Rural_FusionRifle_C_FireStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
