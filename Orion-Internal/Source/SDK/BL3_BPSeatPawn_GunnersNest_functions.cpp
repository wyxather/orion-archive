// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPSeatPawn_GunnersNest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPSeatPawn_GunnersNest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.UserConstructionScript");

	ABPSeatPawn_GunnersNest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPSeatPawn_GunnersNest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceiveBeginPlay");

	ABPSeatPawn_GunnersNest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPSeatPawn_GunnersNest_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceivePossessed");

	ABPSeatPawn_GunnersNest_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPSeatPawn_GunnersNest_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ReceiveUnpossessed");

	ABPSeatPawn_GunnersNest_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ExecuteUbergraph_BPSeatPawn_GunnersNest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPSeatPawn_GunnersNest_C::ExecuteUbergraph_BPSeatPawn_GunnersNest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSeatPawn_GunnersNest.BPSeatPawn_GunnersNest_C.ExecuteUbergraph_BPSeatPawn_GunnersNest");

	ABPSeatPawn_GunnersNest_C_ExecuteUbergraph_BPSeatPawn_GunnersNest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
