#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_WaitDialog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_WaitDialog.Dialog_WaitDialog_C.UpdateWidgetCaption
struct ADialog_WaitDialog_C_UpdateWidgetCaption_Params
{
	struct FText*                                      NewCaption;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialogWithFade
struct ADialog_WaitDialog_C_EndDialogWithFade_Params
{
};

// Function Dialog_WaitDialog.Dialog_WaitDialog_C.EndDialog
struct ADialog_WaitDialog_C_EndDialog_Params
{
};

// Function Dialog_WaitDialog.Dialog_WaitDialog_C.OnBeginDialog
struct ADialog_WaitDialog_C_OnBeginDialog_Params
{
};

// Function Dialog_WaitDialog.Dialog_WaitDialog_C.ExecuteUbergraph_Dialog_WaitDialog
struct ADialog_WaitDialog_C_ExecuteUbergraph_Dialog_WaitDialog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
