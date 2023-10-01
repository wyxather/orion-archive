#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_UnstableQuills_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.GetBaseDamageScalar
struct AMod_UnstableQuills_C_GetBaseDamageScalar_Params
{
	float                                              BaseDamage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.GetMaxDamageScalar
struct AMod_UnstableQuills_C_GetMaxDamageScalar_Params
{
	float                                              MaxDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.IsActionEndable
struct AMod_UnstableQuills_C_IsActionEndable_Params
{
	bool                                               Endable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.EndProjectileAction
struct AMod_UnstableQuills_C_EndProjectileAction_Params
{
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.DoSecondaryAction
struct AMod_UnstableQuills_C_DoSecondaryAction_Params
{
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.DetonateAllAttachedProjectiles
struct AMod_UnstableQuills_C_DetonateAllAttachedProjectiles_Params
{
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.RemoveAttachedProjectileInfo
struct AMod_UnstableQuills_C_RemoveAttachedProjectileInfo_Params
{
	class AProjectileSphere**                          ProjectileInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.GiveAttachedProjectileInfo
struct AMod_UnstableQuills_C_GiveAttachedProjectileInfo_Params
{
	class AProjectileSphere**                          NewProjectile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.ModifyDamage
struct AMod_UnstableQuills_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.DoAction
struct AMod_UnstableQuills_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.ModifyInspectInfo
struct AMod_UnstableQuills_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.OnSecondaryActivate
struct AMod_UnstableQuills_C_OnSecondaryActivate_Params
{
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.ServerFireProjectile
struct AMod_UnstableQuills_C_ServerFireProjectile_Params
{
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.OnBeginUse
struct AMod_UnstableQuills_C_OnBeginUse_Params
{
};

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.ExecuteUbergraph_Mod_UnstableQuills
struct AMod_UnstableQuills_C_ExecuteUbergraph_Mod_UnstableQuills_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
