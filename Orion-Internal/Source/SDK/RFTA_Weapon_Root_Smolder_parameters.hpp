#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Root_Smolder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.ModifyInspectInfo
struct AWeapon_Root_Smolder_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.Set Light Intensity
struct AWeapon_Root_Smolder_C_Set_Light_Intensity_Params
{
	float*                                             NewIntensity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnNotInHand
struct AWeapon_Root_Smolder_C_OnNotInHand_Params
{
};

// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnActivated
struct AWeapon_Root_Smolder_C_OnActivated_Params
{
};

// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnInHand
struct AWeapon_Root_Smolder_C_OnInHand_Params
{
};

// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnHitTarget
struct AWeapon_Root_Smolder_C_OnHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.ExecuteUbergraph_Weapon_Root_Smolder
struct AWeapon_Root_Smolder_C_ExecuteUbergraph_Weapon_Root_Smolder_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
