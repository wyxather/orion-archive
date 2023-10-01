#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_Teamwork_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_Teamwork.Trait_Teamwork_C.QueryNearbyPlayers
struct UTrait_Teamwork_C_QueryNearbyPlayers_Params
{
};

// Function Trait_Teamwork.Trait_Teamwork_C.FilterIncomingDamage
struct UTrait_Teamwork_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trait_Teamwork.Trait_Teamwork_C.GetDamageMod
struct UTrait_Teamwork_C_GetDamageMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_Teamwork.Trait_Teamwork_C.ModifyInspectInfo
struct UTrait_Teamwork_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               InspectLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trait_Teamwork.Trait_Teamwork_C.SetNumNearbyPlayers
struct UTrait_Teamwork_C_SetNumNearbyPlayers_Params
{
	int*                                               NumPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_Teamwork.Trait_Teamwork_C.GetTeamworkRange
struct UTrait_Teamwork_C_GetTeamworkRange_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_Teamwork.Trait_Teamwork_C.OnEquipped
struct UTrait_Teamwork_C_OnEquipped_Params
{
};

// Function Trait_Teamwork.Trait_Teamwork_C.OnUnequipped
struct UTrait_Teamwork_C_OnUnequipped_Params
{
};

// Function Trait_Teamwork.Trait_Teamwork_C.ExecuteUbergraph_Trait_Teamwork
struct UTrait_Teamwork_C_ExecuteUbergraph_Trait_Teamwork_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
