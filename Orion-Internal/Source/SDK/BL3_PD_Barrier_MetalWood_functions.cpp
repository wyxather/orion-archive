// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Barrier_MetalWood_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PD_Barrier_MetalWood.PD_Barrier_MetalWood_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APD_Barrier_MetalWood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Barrier_MetalWood.PD_Barrier_MetalWood_C.UserConstructionScript");

	APD_Barrier_MetalWood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Barrier_MetalWood.PD_Barrier_MetalWood_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APD_Barrier_MetalWood_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Barrier_MetalWood.PD_Barrier_MetalWood_C.ReceiveBeginPlay");

	APD_Barrier_MetalWood_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Barrier_MetalWood.PD_Barrier_MetalWood_C.ExecuteUbergraph_PD_Barrier_MetalWood
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APD_Barrier_MetalWood_C::ExecuteUbergraph_PD_Barrier_MetalWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Barrier_MetalWood.PD_Barrier_MetalWood_C.ExecuteUbergraph_PD_Barrier_MetalWood");

	APD_Barrier_MetalWood_C_ExecuteUbergraph_PD_Barrier_MetalWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
