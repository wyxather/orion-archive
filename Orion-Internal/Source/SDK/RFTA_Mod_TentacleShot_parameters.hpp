#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_TentacleShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_TentacleShot.Mod_TentacleShot_C.GetTentacleHealthScalar
struct AMod_TentacleShot_C_GetTentacleHealthScalar_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_TentacleShot.Mod_TentacleShot_C.GetHealthPerHitScalar
struct AMod_TentacleShot_C_GetHealthPerHitScalar_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_TentacleShot.Mod_TentacleShot_C.GetDamage
struct AMod_TentacleShot_C_GetDamage_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_TentacleShot.Mod_TentacleShot_C.GetDuration
struct AMod_TentacleShot_C_GetDuration_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_TentacleShot.Mod_TentacleShot_C.ModifyDamage
struct AMod_TentacleShot_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_TentacleShot.Mod_TentacleShot_C.ModifyInspectInfo
struct AMod_TentacleShot_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_TentacleShot.Mod_TentacleShot_C.GetHealthMax
struct AMod_TentacleShot_C_GetHealthMax_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_TentacleShot.Mod_TentacleShot_C.OnFire
struct AMod_TentacleShot_C_OnFire_Params
{
	struct FVector*                                    from;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WeaponSpread;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_TentacleShot.Mod_TentacleShot_C.OnPreActivate
struct AMod_TentacleShot_C_OnPreActivate_Params
{
};

// Function Mod_TentacleShot.Mod_TentacleShot_C.ExecuteUbergraph_Mod_TentacleShot
struct AMod_TentacleShot_C_ExecuteUbergraph_Mod_TentacleShot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
