// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_PanicButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_PanicButton_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnServerBegin");

	UAction_Operative_PanicButton_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_PanicButton_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnServerEnd");

	UAction_Operative_PanicButton_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.StopButtonPress
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_PanicButton_C::StopButtonPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.StopButtonPress");

	UAction_Operative_PanicButton_C_StopButtonPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.DetonateClone
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_PanicButton_C::DetonateClone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.DetonateClone");

	UAction_Operative_PanicButton_C_DetonateClone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.StopDigicloneFX
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_PanicButton_C::StopDigicloneFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.StopDigicloneFX");

	UAction_Operative_PanicButton_C_StopDigicloneFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_PanicButton_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnBegin");

	UAction_Operative_PanicButton_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_PanicButton_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnEnd");

	UAction_Operative_PanicButton_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.ExecuteUbergraph_Action_Operative_PanicButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_PanicButton_C::ExecuteUbergraph_Action_Operative_PanicButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.ExecuteUbergraph_Action_Operative_PanicButton");

	UAction_Operative_PanicButton_C_ExecuteUbergraph_Action_Operative_PanicButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
