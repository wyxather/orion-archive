#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_TentacleShot_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.Init
struct AMod_TentacleShot_Projectile_C_Init_Params
{
	float*                                             HealthMax;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.Get Owning Character Aggro Group
struct AMod_TentacleShot_Projectile_C_Get_Owning_Character_Aggro_Group_Params
{
	struct FName                                       AggroGroup;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.OnHitGround
struct AMod_TentacleShot_Projectile_C_OnHitGround_Params
{
	struct FHitResult*                                 Impact;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector*                                    GroundLocation;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.ReceiveBeginPlay
struct AMod_TentacleShot_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C.ExecuteUbergraph_Mod_TentacleShot_Projectile
struct AMod_TentacleShot_Projectile_C_ExecuteUbergraph_Mod_TentacleShot_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
