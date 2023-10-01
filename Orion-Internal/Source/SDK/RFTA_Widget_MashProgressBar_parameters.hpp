#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MashProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Get_Image_114_Brush_1
struct UWidget_MashProgressBar_C_Get_Image_114_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Update Mashable
struct UWidget_MashProgressBar_C_Update_Mashable_Params
{
};

// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Get_MashValue_Percent
struct UWidget_MashProgressBar_C_Get_MashValue_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Construct
struct UWidget_MashProgressBar_C_Construct_Params
{
};

// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Tick
struct UWidget_MashProgressBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MashProgressBar.Widget_MashProgressBar_C.ExecuteUbergraph_Widget_MashProgressBar
struct UWidget_MashProgressBar_C_ExecuteUbergraph_Widget_MashProgressBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
