#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagBadass_Bomb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.SpawnSputter
struct AProj_SkagBadass_Bomb_C_SpawnSputter_Params
{
};

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.UserConstructionScript
struct AProj_SkagBadass_Bomb_C_UserConstructionScript_Params
{
};

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.GbxAsyncRequest_Failed_301C06484A8C9281AB589CA01D4AAE79
struct AProj_SkagBadass_Bomb_C_GbxAsyncRequest_Failed_301C06484A8C9281AB589CA01D4AAE79_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.GbxAsyncRequest_Spawned_301C06484A8C9281AB589CA01D4AAE79
struct AProj_SkagBadass_Bomb_C_GbxAsyncRequest_Spawned_301C06484A8C9281AB589CA01D4AAE79_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.ReceiveBeginPlay
struct AProj_SkagBadass_Bomb_C_ReceiveBeginPlay_Params
{
};

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.OnExplode
struct AProj_SkagBadass_Bomb_C_OnExplode_Params
{
};

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.OnHitWorld
struct AProj_SkagBadass_Bomb_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.OnHitDamagableObject
struct AProj_SkagBadass_Bomb_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.ExecuteUbergraph_Proj_SkagBadass_Bomb
struct AProj_SkagBadass_Bomb_C_ExecuteUbergraph_Proj_SkagBadass_Bomb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
