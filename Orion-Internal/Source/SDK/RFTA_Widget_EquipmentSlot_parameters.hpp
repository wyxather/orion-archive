#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_EquipmentSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.GetEquippedItem
struct UWidget_EquipmentSlot_C_GetEquippedItem_Params
{
	class AEquipment*                                  Equipment;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.SimulateAction
struct UWidget_EquipmentSlot_C_SimulateAction_Params
{
};

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.GetSlotItemType
struct UWidget_EquipmentSlot_C_GetSlotItemType_Params
{
	class UClass*                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.Refresh
struct UWidget_EquipmentSlot_C_Refresh_Params
{
};

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.Cache
struct UWidget_EquipmentSlot_C_Cache_Params
{
};

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.Construct
struct UWidget_EquipmentSlot_C_Construct_Params
{
};

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.OnInventoryChanged_Event_1
struct UWidget_EquipmentSlot_C_OnInventoryChanged_Event_1_Params
{
};

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.ExecuteUbergraph_Widget_EquipmentSlot
struct UWidget_EquipmentSlot_C_ExecuteUbergraph_Widget_EquipmentSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.OnSelected__DelegateSignature
struct UWidget_EquipmentSlot_C_OnSelected__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
