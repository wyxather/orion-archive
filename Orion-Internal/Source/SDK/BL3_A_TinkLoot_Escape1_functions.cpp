// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkLoot_Escape1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkLoot_Escape1_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.OnServerBegin");

	UA_TinkLoot_Escape1_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.Escaped
// (BlueprintCallable, BlueprintEvent)

void UA_TinkLoot_Escape1_C::Escaped()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.Escaped");

	UA_TinkLoot_Escape1_C_Escaped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.TinkLockHitReact
// (BlueprintCallable, BlueprintEvent)

void UA_TinkLoot_Escape1_C::TinkLockHitReact()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.TinkLockHitReact");

	UA_TinkLoot_Escape1_C_TinkLockHitReact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.ExecuteUbergraph_A_TinkLoot_Escape1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_TinkLoot_Escape1_C::ExecuteUbergraph_A_TinkLoot_Escape1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_TinkLoot_Escape1.A_TinkLoot_Escape1_C.ExecuteUbergraph_A_TinkLoot_Escape1");

	UA_TinkLoot_Escape1_C_ExecuteUbergraph_A_TinkLoot_Escape1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
