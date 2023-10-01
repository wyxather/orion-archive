#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Tink_DoorSmallCloth_Combat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ASpawn_Tink_DoorSmallCloth_Combat.ASpawn_Tink_DoorSmallCloth_Combat_C.OnBegin
struct UASpawn_Tink_DoorSmallCloth_Combat_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_Tink_DoorSmallCloth_Combat.ASpawn_Tink_DoorSmallCloth_Combat_C.OnEnd
struct UASpawn_Tink_DoorSmallCloth_Combat_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ASpawn_Tink_DoorSmallCloth_Combat.ASpawn_Tink_DoorSmallCloth_Combat_C.ExecuteUbergraph_ASpawn_Tink_DoorSmallCloth_Combat
struct UASpawn_Tink_DoorSmallCloth_Combat_C_ExecuteUbergraph_ASpawn_Tink_DoorSmallCloth_Combat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
