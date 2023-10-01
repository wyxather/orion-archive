#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Tannis_SetKeyOnTable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.OnBegin
struct UAction_Tannis_SetKeyOnTable_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.KeySwitch
struct UAction_Tannis_SetKeyOnTable_C_KeySwitch_Params
{
};

// Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.OnServerEnd
struct UAction_Tannis_SetKeyOnTable_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Tannis_SetKeyOnTable.Action_Tannis_SetKeyOnTable_C.ExecuteUbergraph_Action_Tannis_SetKeyOnTable
struct UAction_Tannis_SetKeyOnTable_C_ExecuteUbergraph_Action_Tannis_SetKeyOnTable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
