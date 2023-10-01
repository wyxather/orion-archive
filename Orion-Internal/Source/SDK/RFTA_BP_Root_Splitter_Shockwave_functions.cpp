// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Root_Splitter_Shockwave_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Root_Splitter_Shockwave_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.ReceiveBeginPlay");

	ABP_Root_Splitter_Shockwave_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.DoRingExplosion
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Root_Splitter_Shockwave_C::DoRingExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.DoRingExplosion");

	ABP_Root_Splitter_Shockwave_C_DoRingExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.MulticastFX
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         SphereMidRadius                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           EmitterIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Root_Splitter_Shockwave_C::MulticastFX(float* SphereMidRadius, int* EmitterIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.MulticastFX");

	ABP_Root_Splitter_Shockwave_C_MulticastFX_Params params;
	params.SphereMidRadius = SphereMidRadius;
	params.EmitterIndex = EmitterIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.ExecuteUbergraph_BP_Root_Splitter_Shockwave
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Root_Splitter_Shockwave_C::ExecuteUbergraph_BP_Root_Splitter_Shockwave(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Splitter_Shockwave.BP_Root_Splitter_Shockwave_C.ExecuteUbergraph_BP_Root_Splitter_Shockwave");

	ABP_Root_Splitter_Shockwave_C_ExecuteUbergraph_BP_Root_Splitter_Shockwave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
