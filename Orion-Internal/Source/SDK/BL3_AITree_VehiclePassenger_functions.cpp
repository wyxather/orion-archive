// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehiclePassenger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_VehiclePassenger.AITree_VehiclePassenger_C.BndEvt__LeapOnVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehiclePassenger
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_VehiclePassenger_C::BndEvt__LeapOnVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehiclePassenger(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehiclePassenger.AITree_VehiclePassenger_C.BndEvt__LeapOnVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehiclePassenger");

	UAITree_VehiclePassenger_C_BndEvt__LeapOnVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehiclePassenger_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_VehiclePassenger.AITree_VehiclePassenger_C.ExecuteUbergraph_AITree_VehiclePassenger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_VehiclePassenger_C::ExecuteUbergraph_AITree_VehiclePassenger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehiclePassenger.AITree_VehiclePassenger_C.ExecuteUbergraph_AITree_VehiclePassenger");

	UAITree_VehiclePassenger_C_ExecuteUbergraph_AITree_VehiclePassenger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
