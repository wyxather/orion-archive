// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_VehicleTechnical_SwapToTurret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_VehicleTechnical_SwapToTurret.Action_VehicleTechnical_SwapToTurret_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_VehicleTechnical_SwapToTurret_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_VehicleTechnical_SwapToTurret.Action_VehicleTechnical_SwapToTurret_C.OnBegin");

	UAction_VehicleTechnical_SwapToTurret_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_VehicleTechnical_SwapToTurret.Action_VehicleTechnical_SwapToTurret_C.ExecuteUbergraph_Action_VehicleTechnical_SwapToTurret
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_VehicleTechnical_SwapToTurret_C::ExecuteUbergraph_Action_VehicleTechnical_SwapToTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_VehicleTechnical_SwapToTurret.Action_VehicleTechnical_SwapToTurret_C.ExecuteUbergraph_Action_VehicleTechnical_SwapToTurret");

	UAction_VehicleTechnical_SwapToTurret_C_ExecuteUbergraph_Action_VehicleTechnical_SwapToTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
