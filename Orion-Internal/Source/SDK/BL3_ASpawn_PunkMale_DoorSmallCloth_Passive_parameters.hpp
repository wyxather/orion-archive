#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_PunkMale_DoorSmallCloth_Passive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ASpawn_PunkMale_DoorSmallCloth_Passive.ASpawn_PunkMale_DoorSmallCloth_Passive_C.OnBegin
struct UASpawn_PunkMale_DoorSmallCloth_Passive_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_PunkMale_DoorSmallCloth_Passive.ASpawn_PunkMale_DoorSmallCloth_Passive_C.OnEnd
struct UASpawn_PunkMale_DoorSmallCloth_Passive_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_PunkMale_DoorSmallCloth_Passive.ASpawn_PunkMale_DoorSmallCloth_Passive_C.ExecuteUbergraph_ASpawn_PunkMale_DoorSmallCloth_Passive
struct UASpawn_PunkMale_DoorSmallCloth_Passive_C_ExecuteUbergraph_ASpawn_PunkMale_DoorSmallCloth_Passive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
