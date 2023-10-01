#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LevelTravelStationBillboard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LevelTravelStationBillboard.LevelTravelStationBillboard_C.ReceiveTick
struct ULevelTravelStationBillboard_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelTravelStationBillboard.LevelTravelStationBillboard_C.ExecuteUbergraph_LevelTravelStationBillboard
struct ULevelTravelStationBillboard_C_ExecuteUbergraph_LevelTravelStationBillboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
