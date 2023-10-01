// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkLoot_FidgetDig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_TinkLoot_FidgetDig.A_TinkLoot_FidgetDig_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkLoot_FidgetDig_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_FidgetDig.A_TinkLoot_FidgetDig_C.OnBegin");

	UA_TinkLoot_FidgetDig_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_TinkLoot_FidgetDig.A_TinkLoot_FidgetDig_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkLoot_FidgetDig_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_FidgetDig.A_TinkLoot_FidgetDig_C.OnEnd");

	UA_TinkLoot_FidgetDig_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_TinkLoot_FidgetDig.A_TinkLoot_FidgetDig_C.ExecuteUbergraph_A_TinkLoot_FidgetDig
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkLoot_FidgetDig_C::ExecuteUbergraph_A_TinkLoot_FidgetDig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_FidgetDig.A_TinkLoot_FidgetDig_C.ExecuteUbergraph_A_TinkLoot_FidgetDig");

	UA_TinkLoot_FidgetDig_C_ExecuteUbergraph_A_TinkLoot_FidgetDig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
