// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Lilith_PhasewalkDoor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Lilith_PhasewalkDoor_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.OnBegin");

	UA_Lilith_PhasewalkDoor_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Lilith_PhasewalkDoor_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.OnEnd");

	UA_Lilith_PhasewalkDoor_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.PhaseOut
// (BlueprintCallable, BlueprintEvent)

void UA_Lilith_PhasewalkDoor_C::PhaseOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.PhaseOut");

	UA_Lilith_PhasewalkDoor_C_PhaseOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.PhaseIn
// (BlueprintCallable, BlueprintEvent)

void UA_Lilith_PhasewalkDoor_C::PhaseIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.PhaseIn");

	UA_Lilith_PhasewalkDoor_C_PhaseIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.ExecuteUbergraph_A_Lilith_PhasewalkDoor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Lilith_PhasewalkDoor_C::ExecuteUbergraph_A_Lilith_PhasewalkDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Lilith_PhasewalkDoor.A_Lilith_PhasewalkDoor_C.ExecuteUbergraph_A_Lilith_PhasewalkDoor");

	UA_Lilith_PhasewalkDoor_C_ExecuteUbergraph_A_Lilith_PhasewalkDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
