// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Tracer_FusionRifle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tracer_FusionRifle.Tracer_FusionRifle_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ATracer_FusionRifle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_FusionRifle.Tracer_FusionRifle_C.ReceiveBeginPlay");

	ATracer_FusionRifle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tracer_FusionRifle.Tracer_FusionRifle_C.ExecuteUbergraph_Tracer_FusionRifle
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATracer_FusionRifle_C::ExecuteUbergraph_Tracer_FusionRifle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_FusionRifle.Tracer_FusionRifle_C.ExecuteUbergraph_Tracer_FusionRifle");

	ATracer_FusionRifle_C_ExecuteUbergraph_Tracer_FusionRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
