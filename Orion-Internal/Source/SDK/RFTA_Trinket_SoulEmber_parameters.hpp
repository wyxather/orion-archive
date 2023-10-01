#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trinket_SoulEmber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trinket_SoulEmber.Trinket_SoulEmber_C.ModifyInspectInfo
struct ATrinket_SoulEmber_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnEquipped
struct ATrinket_SoulEmber_C_OnEquipped_Params
{
};

// Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnUnequipped
struct ATrinket_SoulEmber_C_OnUnequipped_Params
{
};

// Function Trinket_SoulEmber.Trinket_SoulEmber_C.ExecuteUbergraph_Trinket_SoulEmber
struct ATrinket_SoulEmber_C_ExecuteUbergraph_Trinket_SoulEmber_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
