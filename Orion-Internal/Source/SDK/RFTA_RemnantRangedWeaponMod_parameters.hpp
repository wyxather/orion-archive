#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RemnantRangedWeaponMod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetLabyrinthArmorModDamageScalar
struct ARemnantRangedWeaponMod_C_GetLabyrinthArmorModDamageScalar_Params
{
	float                                              ModDamageScalar;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetLevelScalar
struct ARemnantRangedWeaponMod_C_GetLevelScalar_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetInvokerTraitSummonDamageMod
struct ARemnantRangedWeaponMod_C_GetInvokerTraitSummonDamageMod_Params
{
	float                                              SummonedCreatureModDamage;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetConcentrationTraitDurationMod
struct ARemnantRangedWeaponMod_C_GetConcentrationTraitDurationMod_Params
{
	float                                              ModDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetEvocationTraitDamageMod
struct ARemnantRangedWeaponMod_C_GetEvocationTraitDamageMod_Params
{
	float                                              ModDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.CanUse
struct ARemnantRangedWeaponMod_C_CanUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetWeaponDamageScalar
struct ARemnantRangedWeaponMod_C_GetWeaponDamageScalar_Params
{
	bool*                                              ApplyLevelDamageScalar;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetSpiritScalar
struct ARemnantRangedWeaponMod_C_GetSpiritScalar_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.OnFire
struct ARemnantRangedWeaponMod_C_OnFire_Params
{
	struct FVector*                                    from;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector*                                    to;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WeaponSpread;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.ExecuteUbergraph_RemnantRangedWeaponMod
struct ARemnantRangedWeaponMod_C_ExecuteUbergraph_RemnantRangedWeaponMod_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
