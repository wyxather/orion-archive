#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Root_Spitfire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.OnRep_FlameActive
struct AWeapon_Root_Spitfire_C_OnRep_FlameActive_Params
{
};

// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.UserConstructionScript
struct AWeapon_Root_Spitfire_C_UserConstructionScript_Params
{
};

// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.SetFlameActive
struct AWeapon_Root_Spitfire_C_SetFlameActive_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.ServerSetFlameActive
struct AWeapon_Root_Spitfire_C_ServerSetFlameActive_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.UpdateFlameVFX
struct AWeapon_Root_Spitfire_C_UpdateFlameVFX_Params
{
	struct FVector*                                    from;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Weapon_Root_Spitfire.Weapon_Root_Spitfire_C.ExecuteUbergraph_Weapon_Root_Spitfire
struct AWeapon_Root_Spitfire_C_ExecuteUbergraph_Weapon_Root_Spitfire_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
