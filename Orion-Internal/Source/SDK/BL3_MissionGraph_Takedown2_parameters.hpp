#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_Takedown2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Takedown at the Guardian Breach]
struct UMissionGraph_Takedown2_C__Takedown_at_the_Guardian_Breach__Params
{
	void*                                              Unlocks;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	void*                                              Next_Mission;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Discovery: Takedown at the Guardian Breach]
struct UMissionGraph_Takedown2_C__Discovery__Takedown_at_the_Guardian_Breach__Params
{
	void*                                              Unlocks;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	void*                                              Next_Mission;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.ExecuteUbergraph_MissionGraph_Takedown2
struct UMissionGraph_Takedown2_C_ExecuteUbergraph_MissionGraph_Takedown2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
