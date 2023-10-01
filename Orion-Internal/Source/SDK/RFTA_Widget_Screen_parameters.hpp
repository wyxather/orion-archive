#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Screen.Widget_Screen_C.OptionsUpdated
struct UWidget_Screen_C_OptionsUpdated_Params
{
};

// Function Widget_Screen.Widget_Screen_C.InitScreen
struct UWidget_Screen_C_InitScreen_Params
{
};

// Function Widget_Screen.Widget_Screen_C.Get Context Color Parent 
struct UWidget_Screen_C_Get_Context_Color_Parent__Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Screen.Widget_Screen_C.Set Button Style
struct UWidget_Screen_C_Set_Button_Style_Params
{
	class UWidget_Screen_Option_C**                    Option_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Screen.Widget_Screen_C.Get Inspector
struct UWidget_Screen_C_Get_Inspector_Params
{
	class APlayerController*                           Player_Controller;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Screen.Widget_Screen_C.RefreshFocus
struct UWidget_Screen_C_RefreshFocus_Params
{
};

// Function Widget_Screen.Widget_Screen_C.GetAttributeValue
struct UWidget_Screen_C_GetAttributeValue_Params
{
	struct FName*                                      Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function Widget_Screen.Widget_Screen_C.InitScreenInternal
struct UWidget_Screen_C_InitScreenInternal_Params
{
	class UDialogComponent**                           DialogueComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_Terminal_C**                         Terminal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    FocusParent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Screen.Widget_Screen_C.Clear Options
struct UWidget_Screen_C_Clear_Options_Params
{
};

// Function Widget_Screen.Widget_Screen_C.Add Option
struct UWidget_Screen_C_Add_Option_Params
{
	class UWidget_Screen_Option_C**                    Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Screen.Widget_Screen_C.Update Options
struct UWidget_Screen_C_Update_Options_Params
{
};

// Function Widget_Screen.Widget_Screen_C.OnOptionsUpdate
struct UWidget_Screen_C_OnOptionsUpdate_Params
{
};

// Function Widget_Screen.Widget_Screen_C.OnDialogUpdate
struct UWidget_Screen_C_OnDialogUpdate_Params
{
};

// Function Widget_Screen.Widget_Screen_C.ExecuteUbergraph_Widget_Screen
struct UWidget_Screen_C_ExecuteUbergraph_Widget_Screen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
