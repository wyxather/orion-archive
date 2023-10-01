#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Flamethrower_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_Flamethrower.Mod_Flamethrower_C.GetFirePuddleDoTDamage
struct AMod_Flamethrower_C_GetFirePuddleDoTDamage_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Flamethrower.Mod_Flamethrower_C.GetOnFireDoTDamage
struct AMod_Flamethrower_C_GetOnFireDoTDamage_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Flamethrower.Mod_Flamethrower_C.ModifyInspectInfo
struct AMod_Flamethrower_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_Flamethrower.Mod_Flamethrower_C.ModifyDamage
struct AMod_Flamethrower_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Mod_Flamethrower.Mod_Flamethrower_C.OnFire
struct AMod_Flamethrower_C_OnFire_Params
{
	struct FVector*                                    from;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WeaponSpread;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Flamethrower.Mod_Flamethrower_C.OnFireBegin
struct AMod_Flamethrower_C_OnFireBegin_Params
{
};

// Function Mod_Flamethrower.Mod_Flamethrower_C.OnFireEnd
struct AMod_Flamethrower_C_OnFireEnd_Params
{
};

// Function Mod_Flamethrower.Mod_Flamethrower_C.UpdateFlamethrowerVFX
struct AMod_Flamethrower_C_UpdateFlamethrowerVFX_Params
{
	struct FVector*                                    from;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_Flamethrower.Mod_Flamethrower_C.ExecuteUbergraph_Mod_Flamethrower
struct AMod_Flamethrower_C_ExecuteUbergraph_Mod_Flamethrower_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
