#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trinket_VulcansDetonator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trinket_VulcansDetonator.Trinket_VulcansDetonator_C.ModifyInspectInfo
struct ATrinket_VulcansDetonator_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trinket_VulcansDetonator.Trinket_VulcansDetonator_C.OnEquipped
struct ATrinket_VulcansDetonator_C_OnEquipped_Params
{
};

// Function Trinket_VulcansDetonator.Trinket_VulcansDetonator_C.OnUnequipped
struct ATrinket_VulcansDetonator_C_OnUnequipped_Params
{
};

// Function Trinket_VulcansDetonator.Trinket_VulcansDetonator_C.ExecuteUbergraph_Trinket_VulcansDetonator
struct ATrinket_VulcansDetonator_C_ExecuteUbergraph_Trinket_VulcansDetonator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
