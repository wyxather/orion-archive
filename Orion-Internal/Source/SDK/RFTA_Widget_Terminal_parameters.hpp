#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Terminal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Terminal.Widget_Terminal_C.SetFocusParentForChildren
struct UWidget_Terminal_C_SetFocusParentForChildren_Params
{
	class UWidget**                                    FocusParent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Terminal.Widget_Terminal_C.Get Screen
struct UWidget_Terminal_C_Get_Screen_Params
{
	class UWidget_Screen_C*                            Screen;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Terminal.Widget_Terminal_C.Initialize Terminal
struct UWidget_Terminal_C_Initialize_Terminal_Params
{
	class UDialogComponent**                           DialogComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Computer_C**                             Computer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    FocusParent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Terminal.Widget_Terminal_C.Set Stage
struct UWidget_Terminal_C_Set_Stage_Params
{
	struct FName*                                      WidgetName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Terminal.Widget_Terminal_C.OnDialogBegin
struct UWidget_Terminal_C_OnDialogBegin_Params
{
};

// Function Widget_Terminal.Widget_Terminal_C.OnDialogSetStage
struct UWidget_Terminal_C_OnDialogSetStage_Params
{
};

// Function Widget_Terminal.Widget_Terminal_C.ExecuteUbergraph_Widget_Terminal
struct UWidget_Terminal_C_ExecuteUbergraph_Widget_Terminal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
