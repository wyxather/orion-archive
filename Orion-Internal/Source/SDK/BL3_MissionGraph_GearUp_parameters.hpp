#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_GearUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree: Introduction]
struct UMissionGraph_GearUp_C__Shlooting_Spree__Introduction__Params
{
	void*                                              Unlocks;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	void*                                              Next_Mission;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree]
struct UMissionGraph_GearUp_C__Shlooting_Spree__Params
{
	void*                                              Unlocks;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	void*                                              Next_Mission;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionGraph_GearUp.MissionGraph_GearUp_C.ExecuteUbergraph_MissionGraph_GearUp
struct UMissionGraph_GearUp_C_ExecuteUbergraph_MissionGraph_GearUp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
