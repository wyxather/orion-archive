// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_Ingenuity_BarrelGrab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Attach
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_Ingenuity_BarrelGrab_C::Notify_Barrel_Attach()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Attach");

	UA_PetJabbermon_Ingenuity_BarrelGrab_C_Notify_Barrel_Attach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_Ingenuity_BarrelGrab_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnEnd");

	UA_PetJabbermon_Ingenuity_BarrelGrab_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Align
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_Ingenuity_BarrelGrab_C::Notify_Barrel_Align()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Align");

	UA_PetJabbermon_Ingenuity_BarrelGrab_C_Notify_Barrel_Align_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_Ingenuity_BarrelGrab_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnServerBegin");

	UA_PetJabbermon_Ingenuity_BarrelGrab_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_Ingenuity_BarrelGrab_C::ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab");

	UA_PetJabbermon_Ingenuity_BarrelGrab_C_ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
