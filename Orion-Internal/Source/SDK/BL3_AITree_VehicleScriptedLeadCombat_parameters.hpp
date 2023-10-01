#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehicleScriptedLeadCombat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AITree_VehicleScriptedLeadCombat.AITree_VehicleScriptedLeadCombat_C.BndEvt__LeadVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleScriptedLeadCombat
struct UAITree_VehicleScriptedLeadCombat_C_BndEvt__LeadVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleScriptedLeadCombat_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AITree_VehicleScriptedLeadCombat.AITree_VehicleScriptedLeadCombat_C.ExecuteUbergraph_AITree_VehicleScriptedLeadCombat
struct UAITree_VehicleScriptedLeadCombat_C_ExecuteUbergraph_AITree_VehicleScriptedLeadCombat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
