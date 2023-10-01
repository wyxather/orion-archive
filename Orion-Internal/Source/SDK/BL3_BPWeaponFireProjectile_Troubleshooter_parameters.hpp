#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Troubleshooter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.K2_OnActivated
struct UBPWeaponFireProjectile_Troubleshooter_C_K2_OnActivated_Params
{
};

// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.WeaponFired
struct UBPWeaponFireProjectile_Troubleshooter_C_WeaponFired_Params
{
};

// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.OnCausedDamage
struct UBPWeaponFireProjectile_Troubleshooter_C_OnCausedDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.ClearLastTarget
struct UBPWeaponFireProjectile_Troubleshooter_C_ClearLastTarget_Params
{
};

// Function BPWeaponFireProjectile_Troubleshooter.BPWeaponFireProjectile_Troubleshooter_C.ExecuteUbergraph_BPWeaponFireProjectile_Troubleshooter
struct UBPWeaponFireProjectile_Troubleshooter_C_ExecuteUbergraph_BPWeaponFireProjectile_Troubleshooter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
