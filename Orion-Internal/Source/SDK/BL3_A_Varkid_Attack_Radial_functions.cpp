// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Varkid_Attack_Radial_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Varkid_Attack_Radial_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.OnBegin");

	UA_Varkid_Attack_Radial_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Varkid_Attack_Radial_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.OnEnd");

	UA_Varkid_Attack_Radial_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.Notify_Slam
// (BlueprintCallable, BlueprintEvent)

void UA_Varkid_Attack_Radial_C::Notify_Slam()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.Notify_Slam");

	UA_Varkid_Attack_Radial_C_Notify_Slam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.ExecuteUbergraph_A_Varkid_Attack_Radial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Varkid_Attack_Radial_C::ExecuteUbergraph_A_Varkid_Attack_Radial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.ExecuteUbergraph_A_Varkid_Attack_Radial");

	UA_Varkid_Attack_Radial_C_ExecuteUbergraph_A_Varkid_Attack_Radial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
