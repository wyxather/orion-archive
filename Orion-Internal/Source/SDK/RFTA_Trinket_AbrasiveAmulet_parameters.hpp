#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trinket_AbrasiveAmulet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C.ModifyInspectInfo
struct ATrinket_AbrasiveAmulet_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C.Trigger
struct ATrinket_AbrasiveAmulet_C_Trigger_Params
{
	struct FDamageInfo*                                Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C.OnEquipped
struct ATrinket_AbrasiveAmulet_C_OnEquipped_Params
{
};

// Function Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C.OnUnequipped
struct ATrinket_AbrasiveAmulet_C_OnUnequipped_Params
{
};

// Function Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C.ExecuteUbergraph_Trinket_AbrasiveAmulet
struct ATrinket_AbrasiveAmulet_C_ExecuteUbergraph_Trinket_AbrasiveAmulet_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
