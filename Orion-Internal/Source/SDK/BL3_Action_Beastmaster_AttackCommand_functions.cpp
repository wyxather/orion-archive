// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_AttackCommand_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Attack
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_AttackCommand_C::Notify_Attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Attack");

	UAction_Beastmaster_AttackCommand_C_Notify_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_AttackCommand_C::OnBeginBringUpWeapon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBeginBringUpWeapon");

	UAction_Beastmaster_AttackCommand_C_OnBeginBringUpWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_AttackCommand_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBegin");

	UAction_Beastmaster_AttackCommand_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Feedback
// (BlueprintCallable, BlueprintEvent)

void UAction_Beastmaster_AttackCommand_C::Notify_Feedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Feedback");

	UAction_Beastmaster_AttackCommand_C_Notify_Feedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_AttackCommand_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnServerEnd");

	UAction_Beastmaster_AttackCommand_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.ExecuteUbergraph_Action_Beastmaster_AttackCommand
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_AttackCommand_C::ExecuteUbergraph_Action_Beastmaster_AttackCommand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.ExecuteUbergraph_Action_Beastmaster_AttackCommand");

	UAction_Beastmaster_AttackCommand_C_ExecuteUbergraph_Action_Beastmaster_AttackCommand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
