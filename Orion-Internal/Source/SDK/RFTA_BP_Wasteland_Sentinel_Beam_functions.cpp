// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Wasteland_Sentinel_Beam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Wasteland_Sentinel_Beam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ReceiveBeginPlay");

	ABP_Wasteland_Sentinel_Beam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ExecuteUbergraph_BP_Wasteland_Sentinel_Beam
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wasteland_Sentinel_Beam_C::ExecuteUbergraph_BP_Wasteland_Sentinel_Beam(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ExecuteUbergraph_BP_Wasteland_Sentinel_Beam");

	ABP_Wasteland_Sentinel_Beam_C_ExecuteUbergraph_BP_Wasteland_Sentinel_Beam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
