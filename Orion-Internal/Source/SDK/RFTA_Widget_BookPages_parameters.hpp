#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BookPages_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_BookPages.Widget_BookPages_C.SetPageFont
struct UWidget_BookPages_C_SetPageFont_Params
{
	class UAdvTextBlock**                              Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo*                             Font;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_BookPages.Widget_BookPages_C.GetDisplayPage
struct UWidget_BookPages_C_GetDisplayPage_Params
{
	int*                                               PageID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                     Page_Image;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAdvTextBlock*                               Text_Block;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BookPages.Widget_BookPages_C.SetPage
struct UWidget_BookPages_C_SetPage_Params
{
	int*                                               Page_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBookPage*                                  Page_Data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_BookPages.Widget_BookPages_C.Set Font
struct UWidget_BookPages_C_Set_Font_Params
{
	struct FSlateFontInfo*                             Font;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Widget_BookPages.Widget_BookPages_C.Construct
struct UWidget_BookPages_C_Construct_Params
{
};

// Function Widget_BookPages.Widget_BookPages_C.ExecuteUbergraph_Widget_BookPages
struct UWidget_BookPages_C_ExecuteUbergraph_Widget_BookPages_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
