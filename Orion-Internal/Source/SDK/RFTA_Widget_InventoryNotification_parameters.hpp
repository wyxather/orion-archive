#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryNotification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.IsAmmo
struct UWidget_InventoryNotification_C_IsAmmo_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.GetNumAmmo
struct UWidget_InventoryNotification_C_GetNumAmmo_Params
{
	struct FName*                                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.AdjustQuantity
struct UWidget_InventoryNotification_C_AdjustQuantity_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.SetSmall
struct UWidget_InventoryNotification_C_SetSmall_Params
{
	bool*                                              Small;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.Get_Descript_Visibility_1
struct UWidget_InventoryNotification_C_Get_Descript_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.Build Loot Entry
struct UWidget_InventoryNotification_C_Build_Loot_Entry_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     Trait;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.Construct
struct UWidget_InventoryNotification_C_Construct_Params
{
};

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_1
struct UWidget_InventoryNotification_C_WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function Widget_InventoryNotification.Widget_InventoryNotification_C.ExecuteUbergraph_Widget_InventoryNotification
struct UWidget_InventoryNotification_C_ExecuteUbergraph_Widget_InventoryNotification_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
