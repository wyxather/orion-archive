// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PlayerInjured_Death_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PlayerInjured_Death.Action_PlayerInjured_Death_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PlayerInjured_Death_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PlayerInjured_Death.Action_PlayerInjured_Death_C.OnBegin");

	UAction_PlayerInjured_Death_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PlayerInjured_Death.Action_PlayerInjured_Death_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PlayerInjured_Death_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PlayerInjured_Death.Action_PlayerInjured_Death_C.OnEnd");

	UAction_PlayerInjured_Death_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PlayerInjured_Death.Action_PlayerInjured_Death_C.ExecuteUbergraph_Action_PlayerInjured_Death
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PlayerInjured_Death_C::ExecuteUbergraph_Action_PlayerInjured_Death(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PlayerInjured_Death.Action_PlayerInjured_Death_C.ExecuteUbergraph_Action_PlayerInjured_Death");

	UAction_PlayerInjured_Death_C_ExecuteUbergraph_Action_PlayerInjured_Death_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
