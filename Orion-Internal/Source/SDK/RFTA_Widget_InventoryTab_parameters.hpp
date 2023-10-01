#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryTab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_InventoryTab.Widget_InventoryTab_C.OverrideVisibility
struct UWidget_InventoryTab_C_OverrideVisibility_Params
{
	ESlateVisibility*                                  OverrideVisibilityType;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.HasValidItems
struct UWidget_InventoryTab_C_HasValidItems_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.GetColorAndOpacity_1
struct UWidget_InventoryTab_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.IsValidCategory
struct UWidget_InventoryTab_C_IsValidCategory_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.IsValidItemType
struct UWidget_InventoryTab_C_IsValidItemType_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.EvaluateVisibility
struct UWidget_InventoryTab_C_EvaluateVisibility_Params
{
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.Init
struct UWidget_InventoryTab_C_Init_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EInventoryAction>*                     InAction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.GetLabel
struct UWidget_InventoryTab_C_GetLabel_Params
{
	struct FText                                       Label;                                                    // (Parm, OutParm)
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.Construct
struct UWidget_InventoryTab_C_Construct_Params
{
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.BndEvt__TabButton_0_K2Node_ComponentBoundEvent_59_OnTabFocusDelegate__DelegateSignature
struct UWidget_InventoryTab_C_BndEvt__TabButton_0_K2Node_ComponentBoundEvent_59_OnTabFocusDelegate__DelegateSignature_Params
{
	class UWidget**                                    Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.BndEvt__TabButton_0_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature
struct UWidget_InventoryTab_C_BndEvt__TabButton_0_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.ExecuteUbergraph_Widget_InventoryTab
struct UWidget_InventoryTab_C_ExecuteUbergraph_Widget_InventoryTab_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryTab.Widget_InventoryTab_C.OnTabFocus__DelegateSignature
struct UWidget_InventoryTab_C_OnTabFocus__DelegateSignature_Params
{
	class UWidget_InventoryTab_C**                     Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
