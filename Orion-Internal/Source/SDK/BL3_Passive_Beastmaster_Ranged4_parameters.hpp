#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ApplyConditionalDamageModifiers
struct UPassive_Beastmaster_Ranged4_C_ApplyConditionalDamageModifiers_Params
{
};

// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_EquippedItem
struct UPassive_Beastmaster_Ranged4_C_Ranged4_EquippedItem_Params
{
	class AActor*                                      EquippedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_UnequippedItem
struct UPassive_Beastmaster_Ranged4_C_Ranged4_UnequippedItem_Params
{
	class AActor*                                      UnequippedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.RemoveConditionalModifiers
struct UPassive_Beastmaster_Ranged4_C_RemoveConditionalModifiers_Params
{
};

// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnActivated
struct UPassive_Beastmaster_Ranged4_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnResumed
struct UPassive_Beastmaster_Ranged4_C_OnResumed_Params
{
};

// Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ExecuteUbergraph_Passive_Beastmaster_Ranged4
struct UPassive_Beastmaster_Ranged4_C_ExecuteUbergraph_Passive_Beastmaster_Ranged4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
