// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_TinkLoot_EscapeDig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.StartDig
// (BlueprintCallable, BlueprintEvent)

void UALoop_TinkLoot_EscapeDig_C::StartDig()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.StartDig");

	UALoop_TinkLoot_EscapeDig_C_StartDig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.Escape
// (BlueprintCallable, BlueprintEvent)

void UALoop_TinkLoot_EscapeDig_C::Escape()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.Escape");

	UALoop_TinkLoot_EscapeDig_C_Escape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_TinkLoot_EscapeDig_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.OnServerBegin");

	UALoop_TinkLoot_EscapeDig_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_TinkLoot_EscapeDig_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.OnServerEnd");

	UALoop_TinkLoot_EscapeDig_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.Notify_DigDust
// (BlueprintCallable, BlueprintEvent)

void UALoop_TinkLoot_EscapeDig_C::Notify_DigDust()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.Notify_DigDust");

	UALoop_TinkLoot_EscapeDig_C_Notify_DigDust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.ExecuteUbergraph_ALoop_TinkLoot_EscapeDig
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALoop_TinkLoot_EscapeDig_C::ExecuteUbergraph_ALoop_TinkLoot_EscapeDig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALoop_TinkLoot_EscapeDig.ALoop_TinkLoot_EscapeDig_C.ExecuteUbergraph_ALoop_TinkLoot_EscapeDig");

	UALoop_TinkLoot_EscapeDig_C_ExecuteUbergraph_ALoop_TinkLoot_EscapeDig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
