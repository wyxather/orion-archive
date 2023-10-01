#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Item_Trinket_TriggerOnEquip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnEquipped
struct AItem_Trinket_TriggerOnEquip_C_OnEquipped_Params
{
};

// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnUnequipped
struct AItem_Trinket_TriggerOnEquip_C_OnUnequipped_Params
{
};

// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.ExecuteUbergraph_Item_Trinket_TriggerOnEquip
struct AItem_Trinket_TriggerOnEquip_C_ExecuteUbergraph_Item_Trinket_TriggerOnEquip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
