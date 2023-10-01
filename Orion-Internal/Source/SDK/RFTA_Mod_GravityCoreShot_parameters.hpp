#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_GravityCoreShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.GetGravityWellMultiTargetAddedDamage
struct AMod_GravityCoreShot_C_GetGravityWellMultiTargetAddedDamage_Params
{
	float                                              BonusDamagePerHitsDamage;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.GetGravityWellDamage
struct AMod_GravityCoreShot_C_GetGravityWellDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.Get Projectile Damage
struct AMod_GravityCoreShot_C_Get_Projectile_Damage_Params
{
	float                                              ImpactDamage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.ModifyInspectInfo
struct AMod_GravityCoreShot_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.ModifyDamage
struct AMod_GravityCoreShot_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.WindupForceFeedback__FinishedFunc
struct AMod_GravityCoreShot_C_WindupForceFeedback__FinishedFunc_Params
{
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.WindupForceFeedback__UpdateFunc
struct AMod_GravityCoreShot_C_WindupForceFeedback__UpdateFunc_Params
{
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnFire
struct AMod_GravityCoreShot_C_OnFire_Params
{
	struct FVector*                                    from;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WeaponSpread;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnPreFireBegin
struct AMod_GravityCoreShot_C_OnPreFireBegin_Params
{
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnPreFireEnd
struct AMod_GravityCoreShot_C_OnPreFireEnd_Params
{
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.OnDetached
struct AMod_GravityCoreShot_C_OnDetached_Params
{
};

// Function Mod_GravityCoreShot.Mod_GravityCoreShot_C.ExecuteUbergraph_Mod_GravityCoreShot
struct AMod_GravityCoreShot_C_ExecuteUbergraph_Mod_GravityCoreShot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
