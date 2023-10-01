#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_CheckpointMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.SetContext
struct ADialog_CheckpointMenu_C_SetContext_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.InpActEvt_Menu_K2Node_InputActionEvent_1
struct ADialog_CheckpointMenu_C_InpActEvt_Menu_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.ReceiveBeginPlay
struct ADialog_CheckpointMenu_C_ReceiveBeginPlay_Params
{
};

// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.OnNotifyTakeDamage_Event_1
struct ADialog_CheckpointMenu_C_OnNotifyTakeDamage_Event_1_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.OnEndDialog
struct ADialog_CheckpointMenu_C_OnEndDialog_Params
{
};

// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.OnBeginDialog
struct ADialog_CheckpointMenu_C_OnBeginDialog_Params
{
};

// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.ExecuteUbergraph_Dialog_CheckpointMenu
struct ADialog_CheckpointMenu_C_ExecuteUbergraph_Dialog_CheckpointMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
