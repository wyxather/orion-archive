#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Emotes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Emotes.Widget_Emotes_C.Get_Cancel_Visibility_1
struct UWidget_Emotes_C_Get_Cancel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Emotes.Widget_Emotes_C.MakeSelection
struct UWidget_Emotes_C_MakeSelection_Params
{
	bool*                                              FireSingle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Emotes.Widget_Emotes_C.CanScroll
struct UWidget_Emotes_C_CanScroll_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Emotes.Widget_Emotes_C.Get_LeftButton_Visibility_1
struct UWidget_Emotes_C_Get_LeftButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Emotes.Widget_Emotes_C.Get_RightButton_Visibility_1
struct UWidget_Emotes_C_Get_RightButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Emotes.Widget_Emotes_C.ResolveIndex
struct UWidget_Emotes_C_ResolveIndex_Params
{
	int*                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Emotes.Widget_Emotes_C.SetIndex
struct UWidget_Emotes_C_SetIndex_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Emotes.Widget_Emotes_C.SelectEmote
struct UWidget_Emotes_C_SelectEmote_Params
{
	class UWidget_Emote_C**                            NewEmote;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Emotes.Widget_Emotes_C.Init
struct UWidget_Emotes_C_Init_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Emotes.Widget_Emotes_C.Tick
struct UWidget_Emotes_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Emotes.Widget_Emotes_C.DoRightScroll
struct UWidget_Emotes_C_DoRightScroll_Params
{
};

// Function Widget_Emotes.Widget_Emotes_C.DoLeftScroll
struct UWidget_Emotes_C_DoLeftScroll_Params
{
};

// Function Widget_Emotes.Widget_Emotes_C.Construct
struct UWidget_Emotes_C_Construct_Params
{
};

// Function Widget_Emotes.Widget_Emotes_C.OnFinishedScrollingRight
struct UWidget_Emotes_C_OnFinishedScrollingRight_Params
{
};

// Function Widget_Emotes.Widget_Emotes_C.OnFinishedScrollingLeft
struct UWidget_Emotes_C_OnFinishedScrollingLeft_Params
{
};

// Function Widget_Emotes.Widget_Emotes_C.SetNavigate
struct UWidget_Emotes_C_SetNavigate_Params
{
	bool*                                              IsNavigating;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool*                                              Rightward;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Emotes.Widget_Emotes_C.SelectNextEmote
struct UWidget_Emotes_C_SelectNextEmote_Params
{
};

// Function Widget_Emotes.Widget_Emotes_C.SelectPreviousEmote
struct UWidget_Emotes_C_SelectPreviousEmote_Params
{
};

// Function Widget_Emotes.Widget_Emotes_C.AttemptNavigation
struct UWidget_Emotes_C_AttemptNavigation_Params
{
};

// Function Widget_Emotes.Widget_Emotes_C.ExecuteUbergraph_Widget_Emotes
struct UWidget_Emotes_C_ExecuteUbergraph_Widget_Emotes_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
