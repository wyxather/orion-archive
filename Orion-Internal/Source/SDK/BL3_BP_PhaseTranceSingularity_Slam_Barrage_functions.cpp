// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhaseTranceSingularity_Slam_Barrage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PhaseTranceSingularity_Slam_Barrage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.UserConstructionScript");

	ABP_PhaseTranceSingularity_Slam_Barrage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PhaseTranceSingularity_Slam_Barrage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.ReceiveBeginPlay");

	ABP_PhaseTranceSingularity_Slam_Barrage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhaseTranceSingularity_Slam_Barrage_C::ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage");

	ABP_PhaseTranceSingularity_Slam_Barrage_C_ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
