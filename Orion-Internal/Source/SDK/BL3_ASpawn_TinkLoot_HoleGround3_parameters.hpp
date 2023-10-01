#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_TinkLoot_HoleGround3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.StopDigAudio
struct UASpawn_TinkLoot_HoleGround3_C_StopDigAudio_Params
{
};

// Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.OnServerBegin
struct UASpawn_TinkLoot_HoleGround3_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.OnServerEnd
struct UASpawn_TinkLoot_HoleGround3_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.ExecuteUbergraph_ASpawn_TinkLoot_HoleGround3
struct UASpawn_TinkLoot_HoleGround3_C_ExecuteUbergraph_ASpawn_TinkLoot_HoleGround3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
