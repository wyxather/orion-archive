#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Lilith_PhasewalkDoor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.OnBegin
struct UA_Lilith_PhasewalkDoor_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.OnEnd
struct UA_Lilith_PhasewalkDoor_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.PhaseOut
struct UA_Lilith_PhasewalkDoor_C_PhaseOut_Params
{
};

// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.PhaseIn
struct UA_Lilith_PhasewalkDoor_C_PhaseIn_Params
{
};

// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.ExecuteUbergraph_A_Lilith_PhasewalkDoor
struct UA_Lilith_PhasewalkDoor_C_ExecuteUbergraph_A_Lilith_PhasewalkDoor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
