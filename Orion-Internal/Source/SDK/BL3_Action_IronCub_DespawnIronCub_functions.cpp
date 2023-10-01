// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronCub_DespawnIronCub_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronCub_DespawnIronCub_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.OnServerEnd");

	UAction_IronCub_DespawnIronCub_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.ExecuteUbergraph_Action_IronCub_DespawnIronCub
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronCub_DespawnIronCub_C::ExecuteUbergraph_Action_IronCub_DespawnIronCub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.ExecuteUbergraph_Action_IronCub_DespawnIronCub");

	UAction_IronCub_DespawnIronCub_C_ExecuteUbergraph_Action_IronCub_DespawnIronCub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
