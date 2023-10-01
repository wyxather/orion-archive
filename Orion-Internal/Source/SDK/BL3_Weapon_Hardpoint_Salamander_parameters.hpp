#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_Salamander_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod3
struct AWeapon_Hardpoint_Salamander_C_SetupMod3_Params
{
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupNoMod
struct AWeapon_Hardpoint_Salamander_C_SetupNoMod_Params
{
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod2
struct AWeapon_Hardpoint_Salamander_C_SetupMod2_Params
{
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ApplySalamanderMod2
struct AWeapon_Hardpoint_Salamander_C_ApplySalamanderMod2_Params
{
	class UObject*                                     DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Hardpoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ToggleBlockEnabled
struct AWeapon_Hardpoint_Salamander_C_ToggleBlockEnabled_Params
{
	bool                                               Toggle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.UserConstructionScript
struct AWeapon_Hardpoint_Salamander_C_UserConstructionScript_Params
{
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.CausedDamage_Salamander
struct AWeapon_Hardpoint_Salamander_C_CausedDamage_Salamander_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander
struct AWeapon_Hardpoint_Salamander_C_BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Params
{
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize
struct AWeapon_Hardpoint_Salamander_C_K2_Initialize_Params
{
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize1P
struct AWeapon_Hardpoint_Salamander_C_K2_Initialize1P_Params
{
};

// Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander
struct AWeapon_Hardpoint_Salamander_C_ExecuteUbergraph_Weapon_Hardpoint_Salamander_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
