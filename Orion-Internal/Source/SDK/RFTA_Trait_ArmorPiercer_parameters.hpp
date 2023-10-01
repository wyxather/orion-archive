#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_ArmorPiercer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyInspectInfo
struct UTrait_ArmorPiercer_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               InspectLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyDamage
struct UTrait_ArmorPiercer_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.GetArmoredDamageMod
struct UTrait_ArmorPiercer_C_GetArmoredDamageMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.OnComputeStats
struct UTrait_ArmorPiercer_C_OnComputeStats_Params
{
};

// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ExecuteUbergraph_Trait_ArmorPiercer
struct UTrait_ArmorPiercer_C_ExecuteUbergraph_Trait_ArmorPiercer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
