#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.TryRefillAttackCommandPool
struct UPassive_Beastmaster_Bond2_C_TryRefillAttackCommandPool_Params
{
};

// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.RandomChanceByGrade
struct UPassive_Beastmaster_Bond2_C_RandomChanceByGrade_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnKilledEnemy_Bond2
struct UPassive_Beastmaster_Bond2_C_OnKilledEnemy_Bond2_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnActivated
struct UPassive_Beastmaster_Bond2_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.DoCooldownReduction_Bond2
struct UPassive_Beastmaster_Bond2_C_DoCooldownReduction_Bond2_Params
{
};

// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.ExecuteUbergraph_Passive_Beastmaster_Bond2
struct UPassive_Beastmaster_Bond2_C_ExecuteUbergraph_Passive_Beastmaster_Bond2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
