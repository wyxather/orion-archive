#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemStatMiniVertical_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Get_StatValue_ColorAndOpacity_1
struct UWidget_ItemStatMiniVertical_C_Get_StatValue_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Refresh
struct UWidget_ItemStatMiniVertical_C_Refresh_Params
{
};

// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Construct
struct UWidget_ItemStatMiniVertical_C_Construct_Params
{
};

// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.Init
struct UWidget_ItemStatMiniVertical_C_Init_Params
{
	struct FInspectStat*                               Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectStat*                               CompareStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemStatMiniVertical.Widget_ItemStatMiniVertical_C.ExecuteUbergraph_Widget_ItemStatMiniVertical
struct UWidget_ItemStatMiniVertical_C_ExecuteUbergraph_Widget_ItemStatMiniVertical_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
