#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_OpCannon_Fire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_OpCannon_Fire.A_OpCannon_Fire_C.OnServerEnd
struct UA_OpCannon_Fire_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_OpCannon_Fire.A_OpCannon_Fire_C.AN_FireShot
struct UA_OpCannon_Fire_C_AN_FireShot_Params
{
};

// Function A_OpCannon_Fire.A_OpCannon_Fire_C.ExecuteUbergraph_A_OpCannon_Fire
struct UA_OpCannon_Fire_C_ExecuteUbergraph_A_OpCannon_Fire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
