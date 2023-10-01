// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagBadass_Howl_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagBadass_Howl_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.OnBegin");

	UA_SkagBadass_Howl_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagBadass_Howl_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.OnEnd");

	UA_SkagBadass_Howl_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.Notify_Transform
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_Howl_C::Notify_Transform()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.Notify_Transform");

	UA_SkagBadass_Howl_C_Notify_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.Notify_Howl
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_Howl_C::Notify_Howl()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.Notify_Howl");

	UA_SkagBadass_Howl_C_Notify_Howl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.Notify_Howl_Jump
// (BlueprintCallable, BlueprintEvent)

void UA_SkagBadass_Howl_C::Notify_Howl_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.Notify_Howl_Jump");

	UA_SkagBadass_Howl_C_Notify_Howl_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.ExecuteUbergraph_A_SkagBadass_Howl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagBadass_Howl_C::ExecuteUbergraph_A_SkagBadass_Howl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.ExecuteUbergraph_A_SkagBadass_Howl");

	UA_SkagBadass_Howl_C_ExecuteUbergraph_A_SkagBadass_Howl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
