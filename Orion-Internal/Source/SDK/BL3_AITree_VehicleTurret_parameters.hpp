#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehicleTurret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AITree_VehicleTurret.AITree_VehicleTurret_C.BndEvt__GetOutVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleTurret
struct UAITree_VehicleTurret_C_BndEvt__GetOutVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleTurret_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AITree_VehicleTurret.AITree_VehicleTurret_C.ExecuteUbergraph_AITree_VehicleTurret
struct UAITree_VehicleTurret_C_ExecuteUbergraph_AITree_VehicleTurret_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
