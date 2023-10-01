#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InGameMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_InGameMenu.Widget_InGameMenu_C.InitTabPanel
struct UWidget_InGameMenu_C_InitTabPanel_Params
{
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.CreateTabPanel
struct UWidget_InGameMenu_C_CreateTabPanel_Params
{
	struct FName*                                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     WidgetBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 Out;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsTabFocused
struct UWidget_InGameMenu_C_IsTabFocused_Params
{
	struct FName*                                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.CreateAndFocusWidget
struct UWidget_InGameMenu_C_CreateAndFocusWidget_Params
{
	struct FName*                                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     WidgetBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_TabButton_C**                        TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.SetShowAdvancedPanel
struct UWidget_InGameMenu_C_SetShowAdvancedPanel_Params
{
	bool*                                              ShowAdvancedPanel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.ShowAdvancedPanel
struct UWidget_InGameMenu_C_ShowAdvancedPanel_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsSellFocused
struct UWidget_InGameMenu_C_IsSellFocused_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsCraftingFocused
struct UWidget_InGameMenu_C_IsCraftingFocused_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsBuyFocused
struct UWidget_InGameMenu_C_IsBuyFocused_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsUpgradeFocused
struct UWidget_InGameMenu_C_IsUpgradeFocused_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusSell
struct UWidget_InGameMenu_C_FocusSell_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsCharacterFocused
struct UWidget_InGameMenu_C_IsCharacterFocused_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsOptionsFocused
struct UWidget_InGameMenu_C_IsOptionsFocused_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsQuestFocused
struct UWidget_InGameMenu_C_IsQuestFocused_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsTraitsFocused
struct UWidget_InGameMenu_C_IsTraitsFocused_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.IsInventoryFocused
struct UWidget_InGameMenu_C_IsInventoryFocused_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusOptions
struct UWidget_InGameMenu_C_FocusOptions_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.GetVisibility_1
struct UWidget_InGameMenu_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusTraits
struct UWidget_InGameMenu_C_FocusTraits_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusUpgrade
struct UWidget_InGameMenu_C_FocusUpgrade_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusBuy
struct UWidget_InGameMenu_C_FocusBuy_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusCrafting
struct UWidget_InGameMenu_C_FocusCrafting_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.ShowHideTabs
struct UWidget_InGameMenu_C_ShowHideTabs_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusQuest
struct UWidget_InGameMenu_C_FocusQuest_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusInventory
struct UWidget_InGameMenu_C_FocusInventory_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.FocusCharacter
struct UWidget_InGameMenu_C_FocusCharacter_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__BuyTab_K2Node_ComponentBoundEvent_10_OnTabPressed__DelegateSignature
struct UWidget_InGameMenu_C_BndEvt__BuyTab_K2Node_ComponentBoundEvent_10_OnTabPressed__DelegateSignature_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__TraitsTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature
struct UWidget_InGameMenu_C_BndEvt__TraitsTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.Construct
struct UWidget_InGameMenu_C_Construct_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__SellTab_K2Node_ComponentBoundEvent_7_OnTabPressed__DelegateSignature
struct UWidget_InGameMenu_C_BndEvt__SellTab_K2Node_ComponentBoundEvent_7_OnTabPressed__DelegateSignature_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.Tick
struct UWidget_InGameMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__UpgradeTab_K2Node_ComponentBoundEvent_6_OnTabPressed__DelegateSignature
struct UWidget_InGameMenu_C_BndEvt__UpgradeTab_K2Node_ComponentBoundEvent_6_OnTabPressed__DelegateSignature_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__CharacterTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature
struct UWidget_InGameMenu_C_BndEvt__CharacterTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_4_OnTabPressed__DelegateSignature
struct UWidget_InGameMenu_C_BndEvt__CraftingTab_K2Node_ComponentBoundEvent_4_OnTabPressed__DelegateSignature_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__QuestTab_K2Node_ComponentBoundEvent_3_OnTabPressed__DelegateSignature
struct UWidget_InGameMenu_C_BndEvt__QuestTab_K2Node_ComponentBoundEvent_3_OnTabPressed__DelegateSignature_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__InventoryTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature
struct UWidget_InGameMenu_C_BndEvt__InventoryTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Inventory
struct UWidget_InGameMenu_C_AnimateLine_Inventory_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Crafting
struct UWidget_InGameMenu_C_AnimateLine_Crafting_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Trait
struct UWidget_InGameMenu_C_AnimateLine_Trait_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Quest
struct UWidget_InGameMenu_C_AnimateLine_Quest_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Options
struct UWidget_InGameMenu_C_AnimateLine_Options_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Sell
struct UWidget_InGameMenu_C_AnimateLine_Sell_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Buy
struct UWidget_InGameMenu_C_AnimateLine_Buy_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Upgrade
struct UWidget_InGameMenu_C_AnimateLine_Upgrade_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.BndEvt__OptionsTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature
struct UWidget_InGameMenu_C_BndEvt__OptionsTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.Destruct
struct UWidget_InGameMenu_C_Destruct_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AdvancedStatsBtnClicked
struct UWidget_InGameMenu_C_AdvancedStatsBtnClicked_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.AnimateLine_Materials
struct UWidget_InGameMenu_C_AnimateLine_Materials_Params
{
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.OnDialogPopped
struct UWidget_InGameMenu_C_OnDialogPopped_Params
{
	class AUIActor**                                   Dialog;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.ExecuteUbergraph_Widget_InGameMenu
struct UWidget_InGameMenu_C_ExecuteUbergraph_Widget_InGameMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InGameMenu.Widget_InGameMenu_C.Closed__DelegateSignature
struct UWidget_InGameMenu_C_Closed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
