// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_HijackDestinationStation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CatchARide_HijackDestinationStation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.UserConstructionScript");

	ABP_CatchARide_HijackDestinationStation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CatchARide_HijackDestinationStation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.ReceiveBeginPlay");

	ABP_CatchARide_HijackDestinationStation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.EnteredVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAttachSlotComponent* PawnAttachSlotComponent        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CatchARide_HijackDestinationStation_C::EnteredVehicle(class UPawnAttachSlotComponent* PawnAttachSlotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.EnteredVehicle");

	ABP_CatchARide_HijackDestinationStation_C_EnteredVehicle_Params params;
	params.PawnAttachSlotComponent = PawnAttachSlotComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.ExitedVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAttachSlotComponent* PawnAttachSlotComponent        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_CatchARide_HijackDestinationStation_C::ExitedVehicle(class UPawnAttachSlotComponent* PawnAttachSlotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.ExitedVehicle");

	ABP_CatchARide_HijackDestinationStation_C_ExitedVehicle_Params params;
	params.PawnAttachSlotComponent = PawnAttachSlotComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void ABP_CatchARide_HijackDestinationStation_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.OnEnabled");

	ABP_CatchARide_HijackDestinationStation_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void ABP_CatchARide_HijackDestinationStation_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.OnDisabled");

	ABP_CatchARide_HijackDestinationStation_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.SetupForCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGbxCharacter*           NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CatchARide_HijackDestinationStation_C::SetupForCharacter(class AGbxCharacter* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.SetupForCharacter");

	ABP_CatchARide_HijackDestinationStation_C_SetupForCharacter_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.ExecuteUbergraph_BP_CatchARide_HijackDestinationStation
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CatchARide_HijackDestinationStation_C::ExecuteUbergraph_BP_CatchARide_HijackDestinationStation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CatchARide_HijackDestinationStation.BP_CatchARide_HijackDestinationStation_C.ExecuteUbergraph_BP_CatchARide_HijackDestinationStation");

	ABP_CatchARide_HijackDestinationStation_C_ExecuteUbergraph_BP_CatchARide_HijackDestinationStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
