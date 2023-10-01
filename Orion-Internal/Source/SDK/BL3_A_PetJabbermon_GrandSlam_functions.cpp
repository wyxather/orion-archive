// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_GrandSlam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_GrandSlam_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnBegin");

	UA_PetJabbermon_GrandSlam_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_Melee
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_GrandSlam_C::Notify_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_Melee");

	UA_PetJabbermon_GrandSlam_C_Notify_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_GrandSlam_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnEnd");

	UA_PetJabbermon_GrandSlam_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_BatVis
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_GrandSlam_C::Notify_BatVis()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_BatVis");

	UA_PetJabbermon_GrandSlam_C_Notify_BatVis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.ExecuteUbergraph_A_PetJabbermon_GrandSlam
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_GrandSlam_C::ExecuteUbergraph_A_PetJabbermon_GrandSlam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.ExecuteUbergraph_A_PetJabbermon_GrandSlam");

	UA_PetJabbermon_GrandSlam_C_ExecuteUbergraph_A_PetJabbermon_GrandSlam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
