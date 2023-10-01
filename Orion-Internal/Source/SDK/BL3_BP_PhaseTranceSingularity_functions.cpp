// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhaseTranceSingularity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetIgnoredActors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>          res                            (Parm, OutParm, ZeroConstructor)

void ABP_PhaseTranceSingularity_C::GetIgnoredActors(TArray<class AActor*>* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetIgnoredActors");

	ABP_PhaseTranceSingularity_C_GetIgnoredActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetSingularityDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PhaseTranceSingularity_C::GetSingularityDuration(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.GetSingularityDuration");

	ABP_PhaseTranceSingularity_C_GetSingularityDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PhaseTranceSingularity_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.UserConstructionScript");

	ABP_PhaseTranceSingularity_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PhaseTranceSingularity_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReceiveBeginPlay");

	ABP_PhaseTranceSingularity_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ConfigureSingularity
// (Event, Protected, BlueprintEvent)

void ABP_PhaseTranceSingularity_C::ConfigureSingularity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ConfigureSingularity");

	ABP_PhaseTranceSingularity_C_ConfigureSingularity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.OnShutdownRequested
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bForced                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhaseTranceSingularity_C::OnShutdownRequested(bool* bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.OnShutdownRequested");

	ABP_PhaseTranceSingularity_C_OnShutdownRequested_Params params;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.CleanShutdownMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PhaseTranceSingularity_C::CleanShutdownMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.CleanShutdownMulticast");

	ABP_PhaseTranceSingularity_C_CleanShutdownMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReleaseParticleSystem
// (BlueprintCallable, BlueprintEvent)

void ABP_PhaseTranceSingularity_C::ReleaseParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ReleaseParticleSystem");

	ABP_PhaseTranceSingularity_C_ReleaseParticleSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ExecuteUbergraph_BP_PhaseTranceSingularity
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhaseTranceSingularity_C::ExecuteUbergraph_BP_PhaseTranceSingularity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C.ExecuteUbergraph_BP_PhaseTranceSingularity");

	ABP_PhaseTranceSingularity_C_ExecuteUbergraph_BP_PhaseTranceSingularity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
