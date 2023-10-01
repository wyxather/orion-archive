// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_WillToLive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trait_WillToLive.Trait_WillToLive_C.GetWoundedHealth
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_WillToLive_C::GetWoundedHealth(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_WillToLive.Trait_WillToLive_C.GetWoundedHealth");

	UTrait_WillToLive_C_GetWoundedHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Trait_WillToLive.Trait_WillToLive_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UTrait_WillToLive_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_WillToLive.Trait_WillToLive_C.OnComputeStats");

	UTrait_WillToLive_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_WillToLive.Trait_WillToLive_C.ExecuteUbergraph_Trait_WillToLive
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_WillToLive_C::ExecuteUbergraph_Trait_WillToLive(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_WillToLive.Trait_WillToLive_C.ExecuteUbergraph_Trait_WillToLive");

	UTrait_WillToLive_C_ExecuteUbergraph_Trait_WillToLive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
