#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_InGameBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_InGameBase.Dialog_InGameBase_C.InpActEvt_Menu_K2Node_InputActionEvent_1
struct ADialog_InGameBase_C_InpActEvt_Menu_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_InGameBase.Dialog_InGameBase_C.OnBeginDialog
struct ADialog_InGameBase_C_OnBeginDialog_Params
{
};

// Function Dialog_InGameBase.Dialog_InGameBase_C.OnEndDialog
struct ADialog_InGameBase_C_OnEndDialog_Params
{
};

// Function Dialog_InGameBase.Dialog_InGameBase_C.ReceiveBeginPlay
struct ADialog_InGameBase_C_ReceiveBeginPlay_Params
{
};

// Function Dialog_InGameBase.Dialog_InGameBase_C.OnInteractive_Event_1
struct ADialog_InGameBase_C_OnInteractive_Event_1_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_InGameBase.Dialog_InGameBase_C.ExecuteUbergraph_Dialog_InGameBase
struct ADialog_InGameBase_C_ExecuteUbergraph_Dialog_InGameBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
