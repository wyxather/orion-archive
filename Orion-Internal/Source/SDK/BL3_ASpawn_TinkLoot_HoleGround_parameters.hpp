#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_TinkLoot_HoleGround_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ASpawn_TinkLoot_HoleGround.ASpawn_TinkLoot_HoleGround_C.StopDigAudio
struct UASpawn_TinkLoot_HoleGround_C_StopDigAudio_Params
{
};

// Function ASpawn_TinkLoot_HoleGround.ASpawn_TinkLoot_HoleGround_C.OnServerBegin
struct UASpawn_TinkLoot_HoleGround_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_TinkLoot_HoleGround.ASpawn_TinkLoot_HoleGround_C.OnServerEnd
struct UASpawn_TinkLoot_HoleGround_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_TinkLoot_HoleGround.ASpawn_TinkLoot_HoleGround_C.ExecuteUbergraph_ASpawn_TinkLoot_HoleGround
struct UASpawn_TinkLoot_HoleGround_C_ExecuteUbergraph_ASpawn_TinkLoot_HoleGround_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
