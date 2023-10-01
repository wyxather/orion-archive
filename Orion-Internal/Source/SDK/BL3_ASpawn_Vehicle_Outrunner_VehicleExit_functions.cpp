// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Vehicle_Outrunner_VehicleExit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ASpawn_Vehicle_Outrunner_VehicleExit.ASpawn_Vehicle_Outrunner_VehicleExit_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Vehicle_Outrunner_VehicleExit_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Vehicle_Outrunner_VehicleExit.ASpawn_Vehicle_Outrunner_VehicleExit_C.OnBegin");

	UASpawn_Vehicle_Outrunner_VehicleExit_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_Vehicle_Outrunner_VehicleExit.ASpawn_Vehicle_Outrunner_VehicleExit_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Vehicle_Outrunner_VehicleExit_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Vehicle_Outrunner_VehicleExit.ASpawn_Vehicle_Outrunner_VehicleExit_C.OnEnd");

	UASpawn_Vehicle_Outrunner_VehicleExit_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_Vehicle_Outrunner_VehicleExit.ASpawn_Vehicle_Outrunner_VehicleExit_C.ExecuteUbergraph_ASpawn_Vehicle_Outrunner_VehicleExit
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Vehicle_Outrunner_VehicleExit_C::ExecuteUbergraph_ASpawn_Vehicle_Outrunner_VehicleExit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Vehicle_Outrunner_VehicleExit.ASpawn_Vehicle_Outrunner_VehicleExit_C.ExecuteUbergraph_ASpawn_Vehicle_Outrunner_VehicleExit");

	UASpawn_Vehicle_Outrunner_VehicleExit_C_ExecuteUbergraph_ASpawn_Vehicle_Outrunner_VehicleExit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
