// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Enemy_RagdollLaunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function APhys_Enemy_RagdollLaunch.APhys_Enemy_RagdollLaunch_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhys_Enemy_RagdollLaunch_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhys_Enemy_RagdollLaunch.APhys_Enemy_RagdollLaunch_C.OnBegin");

	UAPhys_Enemy_RagdollLaunch_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function APhys_Enemy_RagdollLaunch.APhys_Enemy_RagdollLaunch_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhys_Enemy_RagdollLaunch_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhys_Enemy_RagdollLaunch.APhys_Enemy_RagdollLaunch_C.OnEnd");

	UAPhys_Enemy_RagdollLaunch_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function APhys_Enemy_RagdollLaunch.APhys_Enemy_RagdollLaunch_C.ExecuteUbergraph_APhys_Enemy_RagdollLaunch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhys_Enemy_RagdollLaunch_C::ExecuteUbergraph_APhys_Enemy_RagdollLaunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhys_Enemy_RagdollLaunch.APhys_Enemy_RagdollLaunch_C.ExecuteUbergraph_APhys_Enemy_RagdollLaunch");

	UAPhys_Enemy_RagdollLaunch_C_ExecuteUbergraph_APhys_Enemy_RagdollLaunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
