#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_WaitDialog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_WaitDialog.Widget_WaitDialog_C.UpdateCaption
struct UWidget_WaitDialog_C_UpdateCaption_Params
{
	struct FText*                                      NewCaption;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_WaitDialog.Widget_WaitDialog_C.Init
struct UWidget_WaitDialog_C_Init_Params
{
	struct FText*                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_WaitDialog.Widget_WaitDialog_C.Close
struct UWidget_WaitDialog_C_Close_Params
{
};

// Function Widget_WaitDialog.Widget_WaitDialog_C.Construct
struct UWidget_WaitDialog_C_Construct_Params
{
};

// Function Widget_WaitDialog.Widget_WaitDialog_C.CloseImmediate
struct UWidget_WaitDialog_C_CloseImmediate_Params
{
};

// Function Widget_WaitDialog.Widget_WaitDialog_C.ExecuteUbergraph_Widget_WaitDialog
struct UWidget_WaitDialog_C_ExecuteUbergraph_Widget_WaitDialog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
