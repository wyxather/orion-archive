#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_TinkLoot_EscapeDig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.StartDig
struct UALoop_TinkLoot_EscapeDig_C_StartDig_Params
{
};

// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.Escape
struct UALoop_TinkLoot_EscapeDig_C_Escape_Params
{
};

// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.OnServerBegin
struct UALoop_TinkLoot_EscapeDig_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.OnServerEnd
struct UALoop_TinkLoot_EscapeDig_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.Notify_DigDust
struct UALoop_TinkLoot_EscapeDig_C_Notify_DigDust_Params
{
};

// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.ExecuteUbergraph_ALoop_TinkLoot_EscapeDig
struct UALoop_TinkLoot_EscapeDig_C_ExecuteUbergraph_ALoop_TinkLoot_EscapeDig_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
