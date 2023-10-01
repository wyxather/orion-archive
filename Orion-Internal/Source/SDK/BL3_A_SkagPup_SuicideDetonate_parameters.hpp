#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagPup_SuicideDetonate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C.OnBegin
struct UA_SkagPup_SuicideDetonate_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C.Detonate
struct UA_SkagPup_SuicideDetonate_C_Detonate_Params
{
};

// Function A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C.ExecuteUbergraph_A_SkagPup_SuicideDetonate
struct UA_SkagPup_SuicideDetonate_C_ExecuteUbergraph_A_SkagPup_SuicideDetonate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
