#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_BearFist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C.UserConstructionScript
struct AWeaponType_Hardpoints_BearFist_C_UserConstructionScript_Params
{
};

// Function WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C.CausedDamage_BearFist
struct AWeaponType_Hardpoints_BearFist_C_CausedDamage_BearFist_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C.K2_Initialize
struct AWeaponType_Hardpoints_BearFist_C_K2_Initialize_Params
{
};

// Function WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C.K2_InitializeMod
struct AWeaponType_Hardpoints_BearFist_C_K2_InitializeMod_Params
{
};

// Function WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C.K2_Initialize1P
struct AWeaponType_Hardpoints_BearFist_C_K2_Initialize1P_Params
{
};

// Function WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C.K2_InitializeMod1P
struct AWeaponType_Hardpoints_BearFist_C_K2_InitializeMod1P_Params
{
};

// Function WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C.InitializeHardPointIronCub
struct AWeaponType_Hardpoints_BearFist_C_InitializeHardPointIronCub_Params
{
};

// Function WeaponType_Hardpoints_BearFist.WeaponType_Hardpoints_BearFist_C.ExecuteUbergraph_WeaponType_Hardpoints_BearFist
struct AWeaponType_Hardpoints_BearFist_C_ExecuteUbergraph_WeaponType_Hardpoints_BearFist_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
