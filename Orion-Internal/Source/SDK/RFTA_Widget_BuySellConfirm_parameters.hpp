#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BuySellConfirm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetMaxBuyQuantity
struct UWidget_BuySellConfirm_C_GetMaxBuyQuantity_Params
{
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetScrap
struct UWidget_BuySellConfirm_C_GetScrap_Params
{
	class UInventoryComponent**                        InventoryComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Scrap;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.HasScrap
struct UWidget_BuySellConfirm_C_HasScrap_Params
{
	int*                                               Scrap;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Cost;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.SellItem
struct UWidget_BuySellConfirm_C_SellItem_Params
{
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BuyItem
struct UWidget_BuySellConfirm_C_BuyItem_Params
{
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetQuantity
struct UWidget_BuySellConfirm_C_GetQuantity_Params
{
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityLabel_Visibility_1
struct UWidget_BuySellConfirm_C_Get_QuantityLabel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Cost_Visibility_1
struct UWidget_BuySellConfirm_C_Get_Cost_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Title_Text_1
struct UWidget_BuySellConfirm_C_Get_Title_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Cost_ColorAndOpacity_1
struct UWidget_BuySellConfirm_C_Get_Cost_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityLabel_ColorAndOpacity_1
struct UWidget_BuySellConfirm_C_Get_QuantityLabel_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Yes_bIsEnabled_1
struct UWidget_BuySellConfirm_C_Get_Yes_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetCost
struct UWidget_BuySellConfirm_C_GetCost_Params
{
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.CanAfford
struct UWidget_BuySellConfirm_C_CanAfford_Params
{
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Cost_Text_1
struct UWidget_BuySellConfirm_C_Get_Cost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityAvailable_Text_1
struct UWidget_BuySellConfirm_C_Get_QuantityAvailable_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_QuantityLabel_Text_1
struct UWidget_BuySellConfirm_C_Get_QuantityLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Label_Text_1
struct UWidget_BuySellConfirm_C_Get_Label_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Get_Icon_Brush_1
struct UWidget_BuySellConfirm_C_Get_Icon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Init
struct UWidget_BuySellConfirm_C_Init_Params
{
	bool*                                              Sell;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.GetInventoryItem
struct UWidget_BuySellConfirm_C_GetInventoryItem_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_BuySellConfirm_C_BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_BuySellConfirm_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__FocusButtonWidget_90_K2Node_ComponentBoundEvent_484_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_BuySellConfirm_C_BndEvt__FocusButtonWidget_90_K2Node_ComponentBoundEvent_484_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__FocusButtonWidget_134_K2Node_ComponentBoundEvent_634_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_BuySellConfirm_C_BndEvt__FocusButtonWidget_134_K2Node_ComponentBoundEvent_634_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_1017_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_BuySellConfirm_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_1017_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.Construct
struct UWidget_BuySellConfirm_C_Construct_Params
{
};

// Function Widget_BuySellConfirm.Widget_BuySellConfirm_C.ExecuteUbergraph_Widget_BuySellConfirm
struct UWidget_BuySellConfirm_C_ExecuteUbergraph_Widget_BuySellConfirm_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
