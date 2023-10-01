// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehicleScriptedLeadCombat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_VehicleScriptedLeadCombat.AITree_VehicleScriptedLeadCombat_C.BndEvt__LeadVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleScriptedLeadCombat
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_VehicleScriptedLeadCombat_C::BndEvt__LeadVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleScriptedLeadCombat(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehicleScriptedLeadCombat.AITree_VehicleScriptedLeadCombat_C.BndEvt__LeadVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleScriptedLeadCombat");

	UAITree_VehicleScriptedLeadCombat_C_BndEvt__LeadVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleScriptedLeadCombat_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_VehicleScriptedLeadCombat.AITree_VehicleScriptedLeadCombat_C.ExecuteUbergraph_AITree_VehicleScriptedLeadCombat
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_VehicleScriptedLeadCombat_C::ExecuteUbergraph_AITree_VehicleScriptedLeadCombat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehicleScriptedLeadCombat.AITree_VehicleScriptedLeadCombat_C.ExecuteUbergraph_AITree_VehicleScriptedLeadCombat");

	UAITree_VehicleScriptedLeadCombat_C_ExecuteUbergraph_AITree_VehicleScriptedLeadCombat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
