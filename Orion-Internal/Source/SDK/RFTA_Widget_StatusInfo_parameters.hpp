#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_StatusInfo.Widget_StatusInfo_C.Init
struct UWidget_StatusInfo_C_Init_Params
{
};

// Function Widget_StatusInfo.Widget_StatusInfo_C.Get_Name_Text_1
struct UWidget_StatusInfo_C_Get_Name_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StatusInfo.Widget_StatusInfo_C.Construct
struct UWidget_StatusInfo_C_Construct_Params
{
};

// Function Widget_StatusInfo.Widget_StatusInfo_C.ExecuteUbergraph_Widget_StatusInfo
struct UWidget_StatusInfo_C_ExecuteUbergraph_Widget_StatusInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
