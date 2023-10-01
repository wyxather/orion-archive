#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_VarkidFlying_Land_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_VarkidFlying_Land.A_VarkidFlying_Land_C.OnBegin
struct UA_VarkidFlying_Land_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_VarkidFlying_Land.A_VarkidFlying_Land_C.OnEnd
struct UA_VarkidFlying_Land_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_VarkidFlying_Land.A_VarkidFlying_Land_C.ExecuteUbergraph_A_VarkidFlying_Land
struct UA_VarkidFlying_Land_C_ExecuteUbergraph_A_VarkidFlying_Land_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
