#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_Bearfist_HeavyPunch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.DoMod1Effect
struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_DoMod1Effect_Params
{
	class UDamageSource*                               InDamageSource;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InDamageCauser;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.UserConstructionScript
struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_UserConstructionScript_Params
{
};

// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.CausedDamage_BearFist
struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_CausedDamage_BearFist_Params
{
	class AActor**                                     DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType**                             DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource**                              DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails*                       Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.BndEvt__IronBearWeaponUseComponent_Jackhammer_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_WeaponType_Hardpoints_Bearfist_HeavyPunch
struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_BndEvt__IronBearWeaponUseComponent_Jackhammer_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_WeaponType_Hardpoints_Bearfist_HeavyPunch_Params
{
};

// Function WeaponType_Hardpoints_Bearfist_HeavyPunch.WeaponType_Hardpoints_Bearfist_HeavyPunch_C.ExecuteUbergraph_WeaponType_Hardpoints_Bearfist_HeavyPunch
struct AWeaponType_Hardpoints_Bearfist_HeavyPunch_C_ExecuteUbergraph_WeaponType_Hardpoints_Bearfist_HeavyPunch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
