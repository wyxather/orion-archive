#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inventory_SkinList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.DoAction
struct UWidget_Inventory_SkinList_C_DoAction_Params
{
};

// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.Init
struct UWidget_Inventory_SkinList_C_Init_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.Refresh
struct UWidget_Inventory_SkinList_C_Refresh_Params
{
};

// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.OnEquipped
struct UWidget_Inventory_SkinList_C_OnEquipped_Params
{
};

// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.OnSelected
struct UWidget_Inventory_SkinList_C_OnSelected_Params
{
	class UWidget_Inventory_SkinItem_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.ExecuteUbergraph_Widget_Inventory_SkinList
struct UWidget_Inventory_SkinList_C_ExecuteUbergraph_Widget_Inventory_SkinList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinList.Widget_Inventory_SkinList_C.OnSkinEquipped__DelegateSignature
struct UWidget_Inventory_SkinList_C_OnSkinEquipped__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
