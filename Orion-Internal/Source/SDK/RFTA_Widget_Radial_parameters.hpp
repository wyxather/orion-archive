#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Radial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Radial.Widget_Radial_C.GetRadialItemForPanel
struct UWidget_Radial_C_GetRadialItemForPanel_Params
{
	class UPanelWidget**                               Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_RadialItem_C*                        RadialItem;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Radial.Widget_Radial_C.InitSlots
struct UWidget_Radial_C_InitSlots_Params
{
	class UPanelWidget**                               Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Radial.Widget_Radial_C.Init
struct UWidget_Radial_C_Init_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     EquipItemBP;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Radial.Widget_Radial_C.GetRadialItem
struct UWidget_Radial_C_GetRadialItem_Params
{
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_RadialItem_C*                        RadialItem;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Radial.Widget_Radial_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Radial_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Radial.Widget_Radial_C.OnQuickSelect1
struct UWidget_Radial_C_OnQuickSelect1_Params
{
};

// Function Widget_Radial.Widget_Radial_C.OnQuickSelect2
struct UWidget_Radial_C_OnQuickSelect2_Params
{
};

// Function Widget_Radial.Widget_Radial_C.OnQuickSelect3
struct UWidget_Radial_C_OnQuickSelect3_Params
{
};

// Function Widget_Radial.Widget_Radial_C.OnQuickSelect4
struct UWidget_Radial_C_OnQuickSelect4_Params
{
};

// Function Widget_Radial.Widget_Radial_C.Construct
struct UWidget_Radial_C_Construct_Params
{
};

// Function Widget_Radial.Widget_Radial_C.ExecuteUbergraph_Widget_Radial
struct UWidget_Radial_C_ExecuteUbergraph_Widget_Radial_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
