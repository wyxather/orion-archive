// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkLoot_Announce1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_TinkLoot_Announce1.A_TinkLoot_Announce1_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkLoot_Announce1_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_Announce1.A_TinkLoot_Announce1_C.OnServerBegin");

	UA_TinkLoot_Announce1_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_TinkLoot_Announce1.A_TinkLoot_Announce1_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkLoot_Announce1_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_Announce1.A_TinkLoot_Announce1_C.OnServerEnd");

	UA_TinkLoot_Announce1_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_TinkLoot_Announce1.A_TinkLoot_Announce1_C.ExecuteUbergraph_A_TinkLoot_Announce1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkLoot_Announce1_C::ExecuteUbergraph_A_TinkLoot_Announce1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_Announce1.A_TinkLoot_Announce1_C.ExecuteUbergraph_A_TinkLoot_Announce1");

	UA_TinkLoot_Announce1_C_ExecuteUbergraph_A_TinkLoot_Announce1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
