// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_Revivalist_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trait_Revivalist.Trait_Revivalist_C.GetWoundedReviveSpeedMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_Revivalist_C::GetWoundedReviveSpeedMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Revivalist.Trait_Revivalist_C.GetWoundedReviveSpeedMod");

	UTrait_Revivalist_C_GetWoundedReviveSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Trait_Revivalist.Trait_Revivalist_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UTrait_Revivalist_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Revivalist.Trait_Revivalist_C.OnComputeStats");

	UTrait_Revivalist_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trait_Revivalist.Trait_Revivalist_C.ExecuteUbergraph_Trait_Revivalist
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrait_Revivalist_C::ExecuteUbergraph_Trait_Revivalist(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Revivalist.Trait_Revivalist_C.ExecuteUbergraph_Trait_Revivalist");

	UTrait_Revivalist_C_ExecuteUbergraph_Trait_Revivalist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
