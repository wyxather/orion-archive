#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemCard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemCard.Widget_ItemCard_C.ModDetect
struct UWidget_ItemCard_C_ModDetect_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_ItemCard.Widget_ItemCard_C.GetLabel
struct UWidget_ItemCard_C_GetLabel_Params
{
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function Widget_ItemCard.Widget_ItemCard_C.GetVisibility_2
struct UWidget_ItemCard_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemCard.Widget_ItemCard_C.GetVisibility_1
struct UWidget_ItemCard_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemCard.Widget_ItemCard_C.SetInfo
struct UWidget_ItemCard_C_SetInfo_Params
{
	struct FInspectInfo*                               Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemCard.Widget_ItemCard_C.Get_Quantity_Visibility_1
struct UWidget_ItemCard_C_Get_Quantity_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemCard.Widget_ItemCard_C.Get_Quantity_Text_1
struct UWidget_ItemCard_C_Get_Quantity_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemCard.Widget_ItemCard_C.Get_Icon_Brush_1
struct UWidget_ItemCard_C_Get_Icon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_ItemCard.Widget_ItemCard_C.Construct
struct UWidget_ItemCard_C_Construct_Params
{
};

// Function Widget_ItemCard.Widget_ItemCard_C.ZoomIn
struct UWidget_ItemCard_C_ZoomIn_Params
{
};

// Function Widget_ItemCard.Widget_ItemCard_C.ZoomOut
struct UWidget_ItemCard_C_ZoomOut_Params
{
};

// Function Widget_ItemCard.Widget_ItemCard_C.ExecuteUbergraph_Widget_ItemCard
struct UWidget_ItemCard_C_ExecuteUbergraph_Widget_ItemCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
