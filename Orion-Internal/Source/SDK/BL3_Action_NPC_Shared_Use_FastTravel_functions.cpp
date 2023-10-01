// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_NPC_Shared_Use_FastTravel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C.OnAnimEnd_6E3D29614FD0C524F1BB4FA94F7FD772
// (BlueprintCallable, BlueprintEvent)

void UAction_NPC_Shared_Use_FastTravel_C::OnAnimEnd_6E3D29614FD0C524F1BB4FA94F7FD772()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C.OnAnimEnd_6E3D29614FD0C524F1BB4FA94F7FD772");

	UAction_NPC_Shared_Use_FastTravel_C_OnAnimEnd_6E3D29614FD0C524F1BB4FA94F7FD772_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C.OnEnd_6E3D29614FD0C524F1BB4FA94F7FD772
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_NPC_Shared_Use_FastTravel_C::OnEnd_6E3D29614FD0C524F1BB4FA94F7FD772(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C.OnEnd_6E3D29614FD0C524F1BB4FA94F7FD772");

	UAction_NPC_Shared_Use_FastTravel_C_OnEnd_6E3D29614FD0C524F1BB4FA94F7FD772_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_NPC_Shared_Use_FastTravel_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C.OnBegin");

	UAction_NPC_Shared_Use_FastTravel_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C.ExecuteUbergraph_Action_NPC_Shared_Use_FastTravel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_NPC_Shared_Use_FastTravel_C::ExecuteUbergraph_Action_NPC_Shared_Use_FastTravel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_NPC_Shared_Use_FastTravel.Action_NPC_Shared_Use_FastTravel_C.ExecuteUbergraph_Action_NPC_Shared_Use_FastTravel");

	UAction_NPC_Shared_Use_FastTravel_C_ExecuteUbergraph_Action_NPC_Shared_Use_FastTravel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
