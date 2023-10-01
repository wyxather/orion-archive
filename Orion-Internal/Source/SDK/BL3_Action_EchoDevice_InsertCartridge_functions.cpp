// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_EchoDevice_InsertCartridge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_EchoDevice_InsertCartridge_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.OnBegin");

	UAction_EchoDevice_InsertCartridge_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_EchoDevice_InsertCartridge_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.OnEnd");

	UAction_EchoDevice_InsertCartridge_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.PlayEchoDeviceScreen
// (BlueprintCallable, BlueprintEvent)

void UAction_EchoDevice_InsertCartridge_C::PlayEchoDeviceScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.PlayEchoDeviceScreen");

	UAction_EchoDevice_InsertCartridge_C_PlayEchoDeviceScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.ExecuteUbergraph_Action_EchoDevice_InsertCartridge
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_EchoDevice_InsertCartridge_C::ExecuteUbergraph_Action_EchoDevice_InsertCartridge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.ExecuteUbergraph_Action_EchoDevice_InsertCartridge");

	UAction_EchoDevice_InsertCartridge_C_ExecuteUbergraph_Action_EchoDevice_InsertCartridge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
