#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_RadialItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_RadialItem.Widget_RadialItem_C.CheckEntitlement
struct UWidget_RadialItem_C_CheckEntitlement_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              NotifyOnNoEntitlement;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsEntitled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RadialItem.Widget_RadialItem_C.PlayEquipSound
struct UWidget_RadialItem_C_PlayEquipSound_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RadialItem.Widget_RadialItem_C.RefreshChildren
struct UWidget_RadialItem_C_RefreshChildren_Params
{
};

// Function Widget_RadialItem.Widget_RadialItem_C.IsEquipped
struct UWidget_RadialItem_C_IsEquipped_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RadialItem.Widget_RadialItem_C.HasValidItem
struct UWidget_RadialItem_C_HasValidItem_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RadialItem.Widget_RadialItem_C.Equip
struct UWidget_RadialItem_C_Equip_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RadialItem.Widget_RadialItem_C.GetItemBP
struct UWidget_RadialItem_C_GetItemBP_Params
{
	class UClass*                                      ItemBP;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RadialItem.Widget_RadialItem_C.SetEquipItemBP
struct UWidget_RadialItem_C_SetEquipItemBP_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RadialItem.Widget_RadialItem_C.Refresh
struct UWidget_RadialItem_C_Refresh_Params
{
};

// Function Widget_RadialItem.Widget_RadialItem_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_58_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_RadialItem_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_58_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RadialItem.Widget_RadialItem_C.SimulateClick
struct UWidget_RadialItem_C_SimulateClick_Params
{
};

// Function Widget_RadialItem.Widget_RadialItem_C.Construct
struct UWidget_RadialItem_C_Construct_Params
{
};

// Function Widget_RadialItem.Widget_RadialItem_C.ExecuteUbergraph_Widget_RadialItem
struct UWidget_RadialItem_C_ExecuteUbergraph_Widget_RadialItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
