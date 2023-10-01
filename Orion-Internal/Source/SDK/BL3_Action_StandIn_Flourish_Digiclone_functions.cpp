// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_StandIn_Flourish_Digiclone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_StandIn_Flourish_Digiclone_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C.OnBegin");

	UAction_StandIn_Flourish_Digiclone_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_StandIn_Flourish_Digiclone_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C.OnEnd");

	UAction_StandIn_Flourish_Digiclone_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C.ExecuteUbergraph_Action_StandIn_Flourish_Digiclone
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_StandIn_Flourish_Digiclone_C::ExecuteUbergraph_Action_StandIn_Flourish_Digiclone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StandIn_Flourish_Digiclone.Action_StandIn_Flourish_Digiclone_C.ExecuteUbergraph_Action_StandIn_Flourish_Digiclone");

	UAction_StandIn_Flourish_Digiclone_C_ExecuteUbergraph_Action_StandIn_Flourish_Digiclone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
