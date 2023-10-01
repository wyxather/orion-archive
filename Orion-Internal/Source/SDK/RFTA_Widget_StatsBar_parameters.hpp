#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatsBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_StatsBar.Widget_StatsBar_C.Get_SurvivalLevel
struct UWidget_StatsBar_C_Get_SurvivalLevel_Params
{
};

// Function Widget_StatsBar.Widget_StatsBar_C.NoCurrencyVisibility
struct UWidget_StatsBar_C_NoCurrencyVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatsBar.Widget_StatsBar_C.OnlyCurrencyVisibility
struct UWidget_StatsBar_C_OnlyCurrencyVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatsBar.Widget_StatsBar_C.Refresh
struct UWidget_StatsBar_C_Refresh_Params
{
};

// Function Widget_StatsBar.Widget_StatsBar_C.GetCurrency
struct UWidget_StatsBar_C_GetCurrency_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatsBar.Widget_StatsBar_C.Get_PlayerNameText_1
struct UWidget_StatsBar_C_Get_PlayerNameText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatsBar.Widget_StatsBar_C.Get_Age_Text_1
struct UWidget_StatsBar_C_Get_Age_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatsBar.Widget_StatsBar_C.Get_LevelUP_Visibility_1
struct UWidget_StatsBar_C_Get_LevelUP_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatsBar.Widget_StatsBar_C.Get_QueuedExperience_Text_1
struct UWidget_StatsBar_C_Get_QueuedExperience_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatsBar.Widget_StatsBar_C.GetPercent_1
struct UWidget_StatsBar_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatsBar.Widget_StatsBar_C.Get_ButtonConfirm_Visibility_1
struct UWidget_StatsBar_C_Get_ButtonConfirm_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatsBar.Widget_StatsBar_C.Get_AttributePoints_Text_1
struct UWidget_StatsBar_C_Get_AttributePoints_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatsBar.Widget_StatsBar_C.GetVisibility_1
struct UWidget_StatsBar_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatsBar.Widget_StatsBar_C.Get_Experience_Text_1
struct UWidget_StatsBar_C_Get_Experience_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatsBar.Widget_StatsBar_C.GetLevelText
struct UWidget_StatsBar_C_GetLevelText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatsBar.Widget_StatsBar_C.OnLoaded_771DE5E349697CC0FD3B5E8DAF16135B
struct UWidget_StatsBar_C_OnLoaded_771DE5E349697CC0FD3B5E8DAF16135B_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatsBar.Widget_StatsBar_C.Construct
struct UWidget_StatsBar_C_Construct_Params
{
};

// Function Widget_StatsBar.Widget_StatsBar_C.OnPostComputeStats_Event_1
struct UWidget_StatsBar_C_OnPostComputeStats_Event_1_Params
{
};

// Function Widget_StatsBar.Widget_StatsBar_C.ExecuteUbergraph_Widget_StatsBar
struct UWidget_StatsBar_C_ExecuteUbergraph_Widget_StatsBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
