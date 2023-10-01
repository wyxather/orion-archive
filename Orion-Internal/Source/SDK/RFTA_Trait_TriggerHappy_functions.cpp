// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_TriggerHappy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trait_TriggerHappy.Trait_TriggerHappy_C.GetFireSpeedMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_TriggerHappy_C::GetFireSpeedMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_TriggerHappy.Trait_TriggerHappy_C.GetFireSpeedMod");

	UTrait_TriggerHappy_C_GetFireSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Trait_TriggerHappy.Trait_TriggerHappy_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UTrait_TriggerHappy_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_TriggerHappy.Trait_TriggerHappy_C.OnComputeStats");

	UTrait_TriggerHappy_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_TriggerHappy.Trait_TriggerHappy_C.ExecuteUbergraph_Trait_TriggerHappy
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_TriggerHappy_C::ExecuteUbergraph_Trait_TriggerHappy(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_TriggerHappy.Trait_TriggerHappy_C.ExecuteUbergraph_Trait_TriggerHappy");

	UTrait_TriggerHappy_C_ExecuteUbergraph_Trait_TriggerHappy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
