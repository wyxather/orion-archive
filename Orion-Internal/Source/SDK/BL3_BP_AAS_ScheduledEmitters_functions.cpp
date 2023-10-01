// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_AAS_ScheduledEmitters_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AAS_ScheduledEmitters_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.UserConstructionScript");

	ABP_AAS_ScheduledEmitters_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AAS_ScheduledEmitters_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.ReceiveBeginPlay");

	ABP_AAS_ScheduledEmitters_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AAS_ScheduledEmitters_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.ReceiveTick");

	ABP_AAS_ScheduledEmitters_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.ExecuteUbergraph_BP_AAS_ScheduledEmitters
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AAS_ScheduledEmitters_C::ExecuteUbergraph_BP_AAS_ScheduledEmitters(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.ExecuteUbergraph_BP_AAS_ScheduledEmitters");

	ABP_AAS_ScheduledEmitters_C_ExecuteUbergraph_BP_AAS_ScheduledEmitters_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
