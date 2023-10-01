// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Enforcer_BountyPrologue_TauntButt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Enforcer_BountyPrologue_TauntButt_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.OnBegin");

	UA_Enforcer_BountyPrologue_TauntButt_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.Notify_AllowButtStagger_Begin
// (BlueprintCallable, BlueprintEvent)

void UA_Enforcer_BountyPrologue_TauntButt_C::Notify_AllowButtStagger_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.Notify_AllowButtStagger_Begin");

	UA_Enforcer_BountyPrologue_TauntButt_C_Notify_AllowButtStagger_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.Notify_AllowButtStagger_End
// (BlueprintCallable, BlueprintEvent)

void UA_Enforcer_BountyPrologue_TauntButt_C::Notify_AllowButtStagger_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.Notify_AllowButtStagger_End");

	UA_Enforcer_BountyPrologue_TauntButt_C_Notify_AllowButtStagger_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.Notify_AllowButtStagger_Abort
// (BlueprintCallable, BlueprintEvent)

void UA_Enforcer_BountyPrologue_TauntButt_C::Notify_AllowButtStagger_Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.Notify_AllowButtStagger_Abort");

	UA_Enforcer_BountyPrologue_TauntButt_C_Notify_AllowButtStagger_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Enforcer_BountyPrologue_TauntButt_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.OnEnd");

	UA_Enforcer_BountyPrologue_TauntButt_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.ExecuteUbergraph_A_Enforcer_BountyPrologue_TauntButt
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Enforcer_BountyPrologue_TauntButt_C::ExecuteUbergraph_A_Enforcer_BountyPrologue_TauntButt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Enforcer_BountyPrologue_TauntButt.A_Enforcer_BountyPrologue_TauntButt_C.ExecuteUbergraph_A_Enforcer_BountyPrologue_TauntButt");

	UA_Enforcer_BountyPrologue_TauntButt_C_ExecuteUbergraph_A_Enforcer_BountyPrologue_TauntButt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
