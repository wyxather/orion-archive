#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_BearFist_Mod2Jackhammer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.UserConstructionScript
struct AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C_UserConstructionScript_Params
{
};

// Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.CausedDamage_BearFist
struct AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C_CausedDamage_BearFist_Params
{
	class AActor**                                     DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType**                             DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource**                              DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails*                       Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.K2_InitializeMod
struct AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C_K2_InitializeMod_Params
{
};

// Function WeaponType_Hardpoints_BearFist_Mod2Jackhammer.WeaponType_Hardpoints_BearFist_Mod2Jackhammer_C.ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Mod2Jackhammer
struct AWeaponType_Hardpoints_BearFist_Mod2Jackhammer_C_ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Mod2Jackhammer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
