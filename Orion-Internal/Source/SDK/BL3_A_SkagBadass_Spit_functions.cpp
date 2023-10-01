// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagBadass_Spit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagBadass_Spit_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.OnBegin");

	UA_SkagBadass_Spit_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagBadass_Spit_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.OnEnd");

	UA_SkagBadass_Spit_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.NotifyState_Spit_Begin
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_Spit_C::NotifyState_Spit_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.NotifyState_Spit_Begin");

	UA_SkagBadass_Spit_C_NotifyState_Spit_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.NotifyState_Spit_End
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_Spit_C::NotifyState_Spit_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.NotifyState_Spit_End");

	UA_SkagBadass_Spit_C_NotifyState_Spit_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.NotifyState_Spit_Abort
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_Spit_C::NotifyState_Spit_Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.NotifyState_Spit_Abort");

	UA_SkagBadass_Spit_C_NotifyState_Spit_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.ExecuteUbergraph_A_SkagBadass_Spit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagBadass_Spit_C::ExecuteUbergraph_A_SkagBadass_Spit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.ExecuteUbergraph_A_SkagBadass_Spit");

	UA_SkagBadass_Spit_C_ExecuteUbergraph_A_SkagBadass_Spit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
