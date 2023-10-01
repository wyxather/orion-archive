#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Book_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interactive_Book.Interactive_Book_C.CheckReadNotify
struct AInteractive_Book_C_CheckReadNotify_Params
{
	struct FBookPage*                                  Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Interactive_Book.Interactive_Book_C.UpdatePageTurnUI
struct AInteractive_Book_C_UpdatePageTurnUI_Params
{
};

// Function Interactive_Book.Interactive_Book_C.GetLore
struct AInteractive_Book_C_GetLore_Params
{
	class ALoreItem*                                   Lore;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Book.Interactive_Book_C.OnRep_Page Turns
struct AInteractive_Book_C_OnRep_Page_Turns_Params
{
};

// Function Interactive_Book.Interactive_Book_C.Update All Materials
struct AInteractive_Book_C_Update_All_Materials_Params
{
};

// Function Interactive_Book.Interactive_Book_C.Update Page Material
struct AInteractive_Book_C_Update_Page_Material_Params
{
	int*                                               Page_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Book.Interactive_Book_C.Update Material
struct AInteractive_Book_C_Update_Material_Params
{
	int*                                               Material_Element_Index;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture**                                   Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Book.Interactive_Book_C.Get Current Page Index
struct AInteractive_Book_C_Get_Current_Page_Index_Params
{
	int*                                               Page_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Forward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Page_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Book.Interactive_Book_C.Assign All Render Textures
struct AInteractive_Book_C_Assign_All_Render_Textures_Params
{
	bool*                                              Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Book.Interactive_Book_C.GetBookWidget
struct AInteractive_Book_C_GetBookWidget_Params
{
	class UWidget_BookPages_C*                         Book_Widget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Book.Interactive_Book_C.Update Pages
struct AInteractive_Book_C_Update_Pages_Params
{
	bool*                                              Forward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Book.Interactive_Book_C.Assign Render Texture
struct AInteractive_Book_C_Assign_Render_Texture_Params
{
	int*                                               Material_Element_Index;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Book.Interactive_Book_C.PrevPage
struct AInteractive_Book_C_PrevPage_Params
{
};

// Function Interactive_Book.Interactive_Book_C.NextPage
struct AInteractive_Book_C_NextPage_Params
{
};

// Function Interactive_Book.Interactive_Book_C.ReceiveBeginPlay
struct AInteractive_Book_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_Book.Interactive_Book_C.Single Page Ready
struct AInteractive_Book_C_Single_Page_Ready_Params
{
};

// Function Interactive_Book.Interactive_Book_C.Page 4 Set
struct AInteractive_Book_C_Page_4_Set_Params
{
};

// Function Interactive_Book.Interactive_Book_C.Update Pages Delayed
struct AInteractive_Book_C_Update_Pages_Delayed_Params
{
	bool*                                              Forward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Book.Interactive_Book_C.OnNextDialog
struct AInteractive_Book_C_OnNextDialog_Params
{
};

// Function Interactive_Book.Interactive_Book_C.OnPrevDialog
struct AInteractive_Book_C_OnPrevDialog_Params
{
};

// Function Interactive_Book.Interactive_Book_C.InitLore
struct AInteractive_Book_C_InitLore_Params
{
};

// Function Interactive_Book.Interactive_Book_C.OnHUDInit
struct AInteractive_Book_C_OnHUDInit_Params
{
};

// Function Interactive_Book.Interactive_Book_C.ServerBeginInspect
struct AInteractive_Book_C_ServerBeginInspect_Params
{
};

// Function Interactive_Book.Interactive_Book_C.OnHUDUpdate
struct AInteractive_Book_C_OnHUDUpdate_Params
{
};

// Function Interactive_Book.Interactive_Book_C.CacheUIPage
struct AInteractive_Book_C_CacheUIPage_Params
{
	int*                                               CurrentPage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Book.Interactive_Book_C.OnInspectEnd
struct AInteractive_Book_C_OnInspectEnd_Params
{
};

// Function Interactive_Book.Interactive_Book_C.ExecuteUbergraph_Interactive_Book
struct AInteractive_Book_C_ExecuteUbergraph_Interactive_Book_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
