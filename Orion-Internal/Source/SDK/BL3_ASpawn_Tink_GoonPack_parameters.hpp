#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Tink_GoonPack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ASpawn_Tink_GoonPack.ASpawn_Tink_GoonPack_C.OnServerEnd
struct UASpawn_Tink_GoonPack_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_Tink_GoonPack.ASpawn_Tink_GoonPack_C.OnServerBegin
struct UASpawn_Tink_GoonPack_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_Tink_GoonPack.ASpawn_Tink_GoonPack_C.ExecuteUbergraph_ASpawn_Tink_GoonPack
struct UASpawn_Tink_GoonPack_C_ExecuteUbergraph_ASpawn_Tink_GoonPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
