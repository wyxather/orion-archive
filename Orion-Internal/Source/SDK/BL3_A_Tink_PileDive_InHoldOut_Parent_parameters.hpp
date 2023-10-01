#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_PileDive_InHoldOut_Parent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.TinkOutOfPile
struct UA_Tink_PileDive_InHoldOut_Parent_C_TinkOutOfPile_Params
{
};

// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.SpawnTurret
struct UA_Tink_PileDive_InHoldOut_Parent_C_SpawnTurret_Params
{
};

// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.TinkEnterPile
struct UA_Tink_PileDive_InHoldOut_Parent_C_TinkEnterPile_Params
{
};

// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.TinkExitPile
struct UA_Tink_PileDive_InHoldOut_Parent_C_TinkExitPile_Params
{
};

// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.OnEnd
struct UA_Tink_PileDive_InHoldOut_Parent_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.OnBegin
struct UA_Tink_PileDive_InHoldOut_Parent_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Tink_PileDive_InHoldOut_Parent.A_Tink_PileDive_InHoldOut_Parent_C.ExecuteUbergraph_A_Tink_PileDive_InHoldOut_Parent
struct UA_Tink_PileDive_InHoldOut_Parent_C_ExecuteUbergraph_A_Tink_PileDive_InHoldOut_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
