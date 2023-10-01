// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Operative_BarrierBash_Miss_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Melee_Operative_BarrierBash_Miss.Action_Melee_Operative_BarrierBash_Miss_C.TurnOffOperativeBlades
// (BlueprintCallable, BlueprintEvent)

void UAction_Melee_Operative_BarrierBash_Miss_C::TurnOffOperativeBlades()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_BarrierBash_Miss.Action_Melee_Operative_BarrierBash_Miss_C.TurnOffOperativeBlades");

	UAction_Melee_Operative_BarrierBash_Miss_C_TurnOffOperativeBlades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Operative_BarrierBash_Miss.Action_Melee_Operative_BarrierBash_Miss_C.TurnOnOperativeBlades
// (BlueprintCallable, BlueprintEvent)

void UAction_Melee_Operative_BarrierBash_Miss_C::TurnOnOperativeBlades()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_BarrierBash_Miss.Action_Melee_Operative_BarrierBash_Miss_C.TurnOnOperativeBlades");

	UAction_Melee_Operative_BarrierBash_Miss_C_TurnOnOperativeBlades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Operative_BarrierBash_Miss.Action_Melee_Operative_BarrierBash_Miss_C.ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Miss
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Operative_BarrierBash_Miss_C::ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Miss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_BarrierBash_Miss.Action_Melee_Operative_BarrierBash_Miss_C.ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Miss");

	UAction_Melee_Operative_BarrierBash_Miss_C_ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Miss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
