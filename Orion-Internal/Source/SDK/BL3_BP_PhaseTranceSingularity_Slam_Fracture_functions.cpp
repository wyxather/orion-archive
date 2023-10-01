// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhaseTranceSingularity_Slam_Fracture_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.GetSingularityAttachComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBoxComponent*           res                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PhaseTranceSingularity_Slam_Fracture_C::GetSingularityAttachComponent(class UBoxComponent** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.GetSingularityAttachComponent");

	ABP_PhaseTranceSingularity_Slam_Fracture_C_GetSingularityAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PhaseTranceSingularity_Slam_Fracture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.UserConstructionScript");

	ABP_PhaseTranceSingularity_Slam_Fracture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.ConfigureSingularity
// (Event, Protected, BlueprintEvent)

void ABP_PhaseTranceSingularity_Slam_Fracture_C::ConfigureSingularity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.ConfigureSingularity");

	ABP_PhaseTranceSingularity_Slam_Fracture_C_ConfigureSingularity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Fracture
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhaseTranceSingularity_Slam_Fracture_C::ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Fracture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Fracture");

	ABP_PhaseTranceSingularity_Slam_Fracture_C_ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Fracture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
