#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_StandIn_Flourish_Digiclone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C.OnBegin
struct UAction_StandIn_Flourish_Digiclone_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C.OnEnd
struct UAction_StandIn_Flourish_Digiclone_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C.ExecuteUbergraph_Action_StandIn_Flourish_Digiclone
struct UAction_StandIn_Flourish_Digiclone_C_ExecuteUbergraph_Action_StandIn_Flourish_Digiclone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
