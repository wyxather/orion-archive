#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_TinkLoot_HoleGround2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ASpawn_TinkLoot_HoleGround2.ASpawn_TinkLoot_HoleGround2_C.StopDigAudio
struct UASpawn_TinkLoot_HoleGround2_C_StopDigAudio_Params
{
};

// Function ASpawn_TinkLoot_HoleGround2.ASpawn_TinkLoot_HoleGround2_C.OnServerBegin
struct UASpawn_TinkLoot_HoleGround2_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_TinkLoot_HoleGround2.ASpawn_TinkLoot_HoleGround2_C.OnServerEnd
struct UASpawn_TinkLoot_HoleGround2_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_TinkLoot_HoleGround2.ASpawn_TinkLoot_HoleGround2_C.ExecuteUbergraph_ASpawn_TinkLoot_HoleGround2
struct UASpawn_TinkLoot_HoleGround2_C_ExecuteUbergraph_ASpawn_TinkLoot_HoleGround2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
