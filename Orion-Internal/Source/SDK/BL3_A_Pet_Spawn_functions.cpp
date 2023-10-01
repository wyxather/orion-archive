// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_Spawn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Pet_Spawn.A_Pet_Spawn_C.Notify_Response
// (BlueprintCallable, BlueprintEvent)

void UA_Pet_Spawn_C::Notify_Response()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_Spawn.A_Pet_Spawn_C.Notify_Response");

	UA_Pet_Spawn_C_Notify_Response_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Pet_Spawn.A_Pet_Spawn_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_Spawn_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_Spawn.A_Pet_Spawn_C.OnServerEnd");

	UA_Pet_Spawn_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Pet_Spawn.A_Pet_Spawn_C.ExecuteUbergraph_A_Pet_Spawn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Pet_Spawn_C::ExecuteUbergraph_A_Pet_Spawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Pet_Spawn.A_Pet_Spawn_C.ExecuteUbergraph_A_Pet_Spawn");

	UA_Pet_Spawn_C_ExecuteUbergraph_A_Pet_Spawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
