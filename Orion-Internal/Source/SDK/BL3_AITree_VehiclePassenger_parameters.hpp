#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehiclePassenger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AITree_VehiclePassenger.AITree_VehiclePassenger_C.BndEvt__LeapOnVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehiclePassenger
struct UAITree_VehiclePassenger_C_BndEvt__LeapOnVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehiclePassenger_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AITree_VehiclePassenger.AITree_VehiclePassenger_C.ExecuteUbergraph_AITree_VehiclePassenger
struct UAITree_VehiclePassenger_C_ExecuteUbergraph_AITree_VehiclePassenger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
