#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MainMenuItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.ForceLeftAlign
struct UWidget_MainMenuItem_C_ForceLeftAlign_Params
{
	bool*                                              Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.SetItemBP
struct UWidget_MainMenuItem_C_SetItemBP_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.GetVisibility_1
struct UWidget_MainMenuItem_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.Get_BG_ColorAndOpacity_1
struct UWidget_MainMenuItem_C_Get_BG_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.GetInspectInfo
struct UWidget_MainMenuItem_C_GetInspectInfo_Params
{
	struct FInspectInfo                                InspectInfo;                                              // (Parm, OutParm)
};

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.SetInspectInfo
struct UWidget_MainMenuItem_C_SetInspectInfo_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	unsigned char*                                     Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.GetPrimaryStat
struct UWidget_MainMenuItem_C_GetPrimaryStat_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectStat                                InspectStat;                                              // (Parm, OutParm)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.Construct
struct UWidget_MainMenuItem_C_Construct_Params
{
};

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.ExecuteUbergraph_Widget_MainMenuItem
struct UWidget_MainMenuItem_C_ExecuteUbergraph_Widget_MainMenuItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
