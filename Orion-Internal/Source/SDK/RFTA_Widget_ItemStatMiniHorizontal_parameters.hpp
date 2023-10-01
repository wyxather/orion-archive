#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemStatMiniHorizontal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemStatMiniHorizontal.Widget_ItemStatMiniHorizontal_C.Refresh
struct UWidget_ItemStatMiniHorizontal_C_Refresh_Params
{
};

// Function Widget_ItemStatMiniHorizontal.Widget_ItemStatMiniHorizontal_C.Construct
struct UWidget_ItemStatMiniHorizontal_C_Construct_Params
{
};

// Function Widget_ItemStatMiniHorizontal.Widget_ItemStatMiniHorizontal_C.Init
struct UWidget_ItemStatMiniHorizontal_C_Init_Params
{
	struct FInspectStat*                               Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectStat*                               CompareStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemStatMiniHorizontal.Widget_ItemStatMiniHorizontal_C.ExecuteUbergraph_Widget_ItemStatMiniHorizontal
struct UWidget_ItemStatMiniHorizontal_C_ExecuteUbergraph_Widget_ItemStatMiniHorizontal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
