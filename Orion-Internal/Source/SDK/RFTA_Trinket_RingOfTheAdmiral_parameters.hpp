#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trinket_RingOfTheAdmiral_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trinket_RingOfTheAdmiral.Trinket_RingOfTheAdmiral_C.ModifyInspectInfo
struct ATrinket_RingOfTheAdmiral_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInstanceData**                          InInstanceData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trinket_RingOfTheAdmiral.Trinket_RingOfTheAdmiral_C.OnComputeStats
struct ATrinket_RingOfTheAdmiral_C_OnComputeStats_Params
{
};

// Function Trinket_RingOfTheAdmiral.Trinket_RingOfTheAdmiral_C.ExecuteUbergraph_Trinket_RingOfTheAdmiral
struct ATrinket_RingOfTheAdmiral_C_ExecuteUbergraph_Trinket_RingOfTheAdmiral_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
