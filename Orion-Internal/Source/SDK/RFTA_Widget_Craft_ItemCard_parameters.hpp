#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Craft_ItemCard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.GetItemQuantityFromRecipe
struct UWidget_Craft_ItemCard_C_GetItemQuantityFromRecipe_Params
{
	class UCraftingRecipe_Base**                       Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.GetVisibility_2
struct UWidget_Craft_ItemCard_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.GetVisibility_1
struct UWidget_Craft_ItemCard_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.CacheShouldShowInfo
struct UWidget_Craft_ItemCard_C_CacheShouldShowInfo_Params
{
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.SetInfo
struct UWidget_Craft_ItemCard_C_SetInfo_Params
{
	struct FInspectInfo*                               Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               LevelOverride;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Quantity_Visibility_1
struct UWidget_Craft_ItemCard_C_Get_Quantity_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.BuildStats
struct UWidget_Craft_ItemCard_C_BuildStats_Params
{
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Quantity_Text_1
struct UWidget_Craft_ItemCard_C_Get_Quantity_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Icon_Brush_1
struct UWidget_Craft_ItemCard_C_Get_Icon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Get_Label_Text_1
struct UWidget_Craft_ItemCard_C_Get_Label_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.Construct
struct UWidget_Craft_ItemCard_C_Construct_Params
{
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.ZoomIn
struct UWidget_Craft_ItemCard_C_ZoomIn_Params
{
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.ZoomOut
struct UWidget_Craft_ItemCard_C_ZoomOut_Params
{
};

// Function Widget_Craft_ItemCard.Widget_Craft_ItemCard_C.ExecuteUbergraph_Widget_Craft_ItemCard
struct UWidget_Craft_ItemCard_C_ExecuteUbergraph_Widget_Craft_ItemCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
