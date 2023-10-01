#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Fire_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Fire_Projectile.Action_Fire_Projectile_C.GetAutoArc
struct UAction_Fire_Projectile_C_GetAutoArc_Params
{
	EAutoArcType                                       Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Fire_Projectile.Action_Fire_Projectile_C.FireTheProjectile
struct UAction_Fire_Projectile_C_FireTheProjectile_Params
{
};

// Function Action_Fire_Projectile.Action_Fire_Projectile_C.OnActionStart
struct UAction_Fire_Projectile_C_OnActionStart_Params
{
};

// Function Action_Fire_Projectile.Action_Fire_Projectile_C.ExecuteUbergraph_Action_Fire_Projectile
struct UAction_Fire_Projectile_C_ExecuteUbergraph_Action_Fire_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
