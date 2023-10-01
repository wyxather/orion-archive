// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehicleTurret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_VehicleTurret.AITree_VehicleTurret_C.BndEvt__GetOutVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleTurret
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_VehicleTurret_C::BndEvt__GetOutVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehicleTurret.AITree_VehicleTurret_C.BndEvt__GetOutVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleTurret");

	UAITree_VehicleTurret_C_BndEvt__GetOutVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehicleTurret_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_VehicleTurret.AITree_VehicleTurret_C.ExecuteUbergraph_AITree_VehicleTurret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_VehicleTurret_C::ExecuteUbergraph_AITree_VehicleTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_VehicleTurret.AITree_VehicleTurret_C.ExecuteUbergraph_AITree_VehicleTurret");

	UAITree_VehicleTurret_C_ExecuteUbergraph_AITree_VehicleTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
