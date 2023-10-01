// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_BarrelToss_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.Notify_Throw
// (BlueprintCallable, BlueprintEvent)

void UA_PetJabbermon_BarrelToss_C::Notify_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.Notify_Throw");

	UA_PetJabbermon_BarrelToss_C_Notify_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_BarrelToss_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.OnServerBegin");

	UA_PetJabbermon_BarrelToss_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_BarrelToss_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.OnServerEnd");

	UA_PetJabbermon_BarrelToss_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.ExecuteUbergraph_A_PetJabbermon_BarrelToss
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetJabbermon_BarrelToss_C::ExecuteUbergraph_A_PetJabbermon_BarrelToss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.ExecuteUbergraph_A_PetJabbermon_BarrelToss");

	UA_PetJabbermon_BarrelToss_C_ExecuteUbergraph_A_PetJabbermon_BarrelToss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
