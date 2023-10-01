#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemModSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.GetSlotLabel
struct UWidget_ItemModSlot_C_GetSlotLabel_Params
{
	struct FText                                       Label;                                                    // (Parm, OutParm)
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.GetVisibility_1
struct UWidget_ItemModSlot_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.CacheInspectInfo
struct UWidget_ItemModSlot_C_CacheInspectInfo_Params
{
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.Refresh
struct UWidget_ItemModSlot_C_Refresh_Params
{
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.Construct
struct UWidget_ItemModSlot_C_Construct_Params
{
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_200_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_ItemModSlot_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_200_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_236_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_ItemModSlot_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_236_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_254_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_ItemModSlot_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_254_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.InitFromInspectInfo
struct UWidget_ItemModSlot_C_InitFromInspectInfo_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               InspectInfoCompare;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.OnInstanceDataChanged
struct UWidget_ItemModSlot_C_OnInstanceDataChanged_Params
{
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.ExecuteUbergraph_Widget_ItemModSlot
struct UWidget_ItemModSlot_C_ExecuteUbergraph_Widget_ItemModSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.OnModClicked__DelegateSignature
struct UWidget_ItemModSlot_C_OnModClicked__DelegateSignature_Params
{
	class UWidget_ItemModSlot_C**                      ModSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.OnModSelected__DelegateSignature
struct UWidget_ItemModSlot_C_OnModSelected__DelegateSignature_Params
{
	class UWidget_ItemModSlot_C**                      ModSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
