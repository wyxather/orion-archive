#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagBadass_Bomb_Sputter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.UserConstructionScript
struct AProj_SkagBadass_Bomb_Sputter_C_UserConstructionScript_Params
{
};

// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.OnHitDamagableObject
struct AProj_SkagBadass_Bomb_Sputter_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.OnHitWorld
struct AProj_SkagBadass_Bomb_Sputter_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.OnExplode
struct AProj_SkagBadass_Bomb_Sputter_C_OnExplode_Params
{
};

// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.ReceiveBeginPlay
struct AProj_SkagBadass_Bomb_Sputter_C_ReceiveBeginPlay_Params
{
};

// Function Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C.ExecuteUbergraph_Proj_SkagBadass_Bomb_Sputter
struct AProj_SkagBadass_Bomb_Sputter_C_ExecuteUbergraph_Proj_SkagBadass_Bomb_Sputter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
