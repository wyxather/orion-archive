#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_ExperimentalMunitions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.OnActivated
struct UPassive_Gunner_ExperimentalMunitions_C_OnActivated_Params
{
};

// Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.ExperimentalMunitions_IronBearReady
struct UPassive_Gunner_ExperimentalMunitions_C_ExperimentalMunitions_IronBearReady_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.ExecuteUbergraph_Passive_Gunner_ExperimentalMunitions
struct UPassive_Gunner_ExperimentalMunitions_C_ExecuteUbergraph_Passive_Gunner_ExperimentalMunitions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
