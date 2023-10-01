// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_SleightOfHand_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trait_SleightOfHand.Trait_SleightOfHand_C.GetSwapSpeedMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_SleightOfHand_C::GetSwapSpeedMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_SleightOfHand.Trait_SleightOfHand_C.GetSwapSpeedMod");

	UTrait_SleightOfHand_C_GetSwapSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Trait_SleightOfHand.Trait_SleightOfHand_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UTrait_SleightOfHand_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_SleightOfHand.Trait_SleightOfHand_C.OnComputeStats");

	UTrait_SleightOfHand_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_SleightOfHand.Trait_SleightOfHand_C.ExecuteUbergraph_Trait_SleightOfHand
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_SleightOfHand_C::ExecuteUbergraph_Trait_SleightOfHand(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_SleightOfHand.Trait_SleightOfHand_C.ExecuteUbergraph_Trait_SleightOfHand");

	UTrait_SleightOfHand_C_ExecuteUbergraph_Trait_SleightOfHand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
