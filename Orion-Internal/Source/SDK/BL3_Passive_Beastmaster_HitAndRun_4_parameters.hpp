#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_HitAndRun_4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.OnActivated
struct UPassive_Beastmaster_HitAndRun_3_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.CausedDeath_Beastmaster_HitAndRun3
struct UPassive_Beastmaster_HitAndRun_3_C_CausedDeath_Beastmaster_HitAndRun3_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun_4
struct UPassive_Beastmaster_HitAndRun_3_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun_4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
