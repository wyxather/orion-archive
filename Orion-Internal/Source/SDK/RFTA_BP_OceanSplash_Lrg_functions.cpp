// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_OceanSplash_Lrg_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OceanSplash_Lrg.BP_OceanSplash_Lrg_C.RandomizeRotation
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OceanSplash_Lrg_C::RandomizeRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OceanSplash_Lrg.BP_OceanSplash_Lrg_C.RandomizeRotation");

	ABP_OceanSplash_Lrg_C_RandomizeRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OceanSplash_Lrg.BP_OceanSplash_Lrg_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_OceanSplash_Lrg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OceanSplash_Lrg.BP_OceanSplash_Lrg_C.ReceiveBeginPlay");

	ABP_OceanSplash_Lrg_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OceanSplash_Lrg.BP_OceanSplash_Lrg_C.ExecuteUbergraph_BP_OceanSplash_Lrg
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OceanSplash_Lrg_C::ExecuteUbergraph_BP_OceanSplash_Lrg(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OceanSplash_Lrg.BP_OceanSplash_Lrg_C.ExecuteUbergraph_BP_OceanSplash_Lrg");

	ABP_OceanSplash_Lrg_C_ExecuteUbergraph_BP_OceanSplash_Lrg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
