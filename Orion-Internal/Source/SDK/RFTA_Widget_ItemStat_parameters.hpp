#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemStat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemStat.Widget_ItemStat_C.Get_PrevValue_ColorAndOpacity_1
struct UWidget_ItemStat_C_Get_PrevValue_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStat.Widget_ItemStat_C.Refresh
struct UWidget_ItemStat_C_Refresh_Params
{
};

// Function Widget_ItemStat.Widget_ItemStat_C.Get_Bullet_Visibility_1
struct UWidget_ItemStat_C_Get_Bullet_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemStat.Widget_ItemStat_C.Get_StatName_ColorAndOpacity_1
struct UWidget_ItemStat_C_Get_StatName_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStat.Widget_ItemStat_C.Get_StatValue_Visibility_1
struct UWidget_ItemStat_C_Get_StatValue_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemStat.Widget_ItemStat_C.GetPostfix
struct UWidget_ItemStat_C_GetPostfix_Params
{
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function Widget_ItemStat.Widget_ItemStat_C.GetPrefix
struct UWidget_ItemStat_C_GetPrefix_Params
{
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function Widget_ItemStat.Widget_ItemStat_C.Get_StatValue_ColorAndOpacity_1
struct UWidget_ItemStat_C_Get_StatValue_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStat.Widget_ItemStat_C.GetStatValue
struct UWidget_ItemStat_C_GetStatValue_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStat.Widget_ItemStat_C.GetStatName
struct UWidget_ItemStat_C_GetStatName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStat.Widget_ItemStat_C.Construct
struct UWidget_ItemStat_C_Construct_Params
{
};

// Function Widget_ItemStat.Widget_ItemStat_C.OnBeginPreview_Event_1
struct UWidget_ItemStat_C_OnBeginPreview_Event_1_Params
{
};

// Function Widget_ItemStat.Widget_ItemStat_C.OnEndPreview_Event_1
struct UWidget_ItemStat_C_OnEndPreview_Event_1_Params
{
};

// Function Widget_ItemStat.Widget_ItemStat_C.Init
struct UWidget_ItemStat_C_Init_Params
{
	struct FInspectStat*                               Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectStat*                               CompareStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemStat.Widget_ItemStat_C.ExecuteUbergraph_Widget_ItemStat
struct UWidget_ItemStat_C_ExecuteUbergraph_Widget_ItemStat_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
