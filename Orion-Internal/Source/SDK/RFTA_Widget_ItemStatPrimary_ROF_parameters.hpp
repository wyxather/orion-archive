#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemStatPrimary_ROF_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.Get_StatValue_Text_1
struct UWidget_ItemStatPrimary_ROF_C_Get_StatValue_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.Refresh
struct UWidget_ItemStatPrimary_ROF_C_Refresh_Params
{
};

// Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.Init
struct UWidget_ItemStatPrimary_ROF_C_Init_Params
{
	struct FInspectStat*                               Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectStat*                               CompareStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.ExecuteUbergraph_Widget_ItemStatPrimary_ROF
struct UWidget_ItemStatPrimary_ROF_C_ExecuteUbergraph_Widget_ItemStatPrimary_ROF_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
