#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagPup_TongueCatchBackwardR_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.OnEnd
struct UA_SkagPup_TongueCatchBackwardR_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.Notify_TongueCatch
struct UA_SkagPup_TongueCatchBackwardR_C_Notify_TongueCatch_Params
{
};

// Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.OnBegin
struct UA_SkagPup_TongueCatchBackwardR_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.ExecuteUbergraph_A_SkagPup_TongueCatchBackwardR
struct UA_SkagPup_TongueCatchBackwardR_C_ExecuteUbergraph_A_SkagPup_TongueCatchBackwardR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
