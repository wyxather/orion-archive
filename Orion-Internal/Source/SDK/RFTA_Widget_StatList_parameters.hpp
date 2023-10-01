#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_StatList.Widget_StatList_C.GetWidgetForStat
struct UWidget_StatList_C_GetWidgetForStat_Params
{
	struct FName*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_ItemStat_C*                          Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_StatList.Widget_StatList_C.BuildList
struct UWidget_StatList_C_BuildList_Params
{
};

// Function Widget_StatList.Widget_StatList_C.SetInspectInfo
struct UWidget_StatList_C_SetInspectInfo_Params
{
	struct FInspectInfo*                               Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_StatList.Widget_StatList_C.Construct
struct UWidget_StatList_C_Construct_Params
{
};

// Function Widget_StatList.Widget_StatList_C.ExecuteUbergraph_Widget_StatList
struct UWidget_StatList_C_ExecuteUbergraph_Widget_StatList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
