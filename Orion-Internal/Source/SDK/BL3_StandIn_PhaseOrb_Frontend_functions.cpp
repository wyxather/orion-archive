// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_PhaseOrb_Frontend_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandIn_PhaseOrb_Frontend.StandIn_PhaseOrb_Frontend_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStandIn_PhaseOrb_Frontend_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_PhaseOrb_Frontend.StandIn_PhaseOrb_Frontend_C.UserConstructionScript");

	AStandIn_PhaseOrb_Frontend_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_PhaseOrb_Frontend.StandIn_PhaseOrb_Frontend_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStandIn_PhaseOrb_Frontend_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_PhaseOrb_Frontend.StandIn_PhaseOrb_Frontend_C.ReceiveBeginPlay");

	AStandIn_PhaseOrb_Frontend_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_PhaseOrb_Frontend.StandIn_PhaseOrb_Frontend_C.ExecuteUbergraph_StandIn_PhaseOrb_Frontend
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStandIn_PhaseOrb_Frontend_C::ExecuteUbergraph_StandIn_PhaseOrb_Frontend(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_PhaseOrb_Frontend.StandIn_PhaseOrb_Frontend_C.ExecuteUbergraph_StandIn_PhaseOrb_Frontend");

	AStandIn_PhaseOrb_Frontend_C_ExecuteUbergraph_StandIn_PhaseOrb_Frontend_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
