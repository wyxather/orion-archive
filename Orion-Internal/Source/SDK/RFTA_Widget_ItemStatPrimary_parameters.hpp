#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemStatPrimary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.LeftAligned
struct UWidget_ItemStatPrimary_C_LeftAligned_Params
{
	bool*                                              Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Refresh
struct UWidget_ItemStatPrimary_C_Refresh_Params
{
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Get_PrevValue_Text_1
struct UWidget_ItemStatPrimary_C_Get_PrevValue_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.GetVisibility_1
struct UWidget_ItemStatPrimary_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Get_StatValue_ColorAndOpacity_1
struct UWidget_ItemStatPrimary_C_Get_StatValue_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Get_StatValue_Text_1
struct UWidget_ItemStatPrimary_C_Get_StatValue_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Construct
struct UWidget_ItemStatPrimary_C_Construct_Params
{
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.OnBeginPreview_Event_1
struct UWidget_ItemStatPrimary_C_OnBeginPreview_Event_1_Params
{
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.OnEndPreview_Event_1
struct UWidget_ItemStatPrimary_C_OnEndPreview_Event_1_Params
{
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Init
struct UWidget_ItemStatPrimary_C_Init_Params
{
	struct FInspectStat*                               Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectStat*                               CompareStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.ExecuteUbergraph_Widget_ItemStatPrimary
struct UWidget_ItemStatPrimary_C_ExecuteUbergraph_Widget_ItemStatPrimary_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
