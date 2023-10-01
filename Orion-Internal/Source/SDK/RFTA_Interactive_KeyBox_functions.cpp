// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_KeyBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_KeyBox.Interactive_KeyBox_C.CanUseItem
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AInteractive_KeyBox_C::CanUseItem(class APlayerControllerGunfire** PlayerController, class UClass** ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.CanUseItem");

	AInteractive_KeyBox_C_CanUseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.NotifyTriggerObjects
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_KeyBox_C::NotifyTriggerObjects(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.NotifyTriggerObjects");

	AInteractive_KeyBox_C_NotifyTriggerObjects_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.OnRep_Locked
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_KeyBox_C::OnRep_Locked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.OnRep_Locked");

	AInteractive_KeyBox_C_OnRep_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.UpdateVisuals
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_KeyBox_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.UpdateVisuals");

	AInteractive_KeyBox_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AInteractive_KeyBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.ReceiveBeginPlay");

	AInteractive_KeyBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.OnCharacterEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_KeyBox_C::OnCharacterEvent(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.OnCharacterEvent");

	AInteractive_KeyBox_C_OnCharacterEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.UseItem
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AInteractive_KeyBox_C::UseItem(class APlayerControllerGunfire** PlayerController, class UClass** ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.UseItem");

	AInteractive_KeyBox_C_UseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_4_InteractiveDelegate__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_KeyBox_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_4_InteractiveDelegate__DelegateSignature(struct FName* StateName, class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_4_InteractiveDelegate__DelegateSignature");

	AInteractive_KeyBox_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_4_InteractiveDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.OnReset
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_KeyBox_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.OnReset");

	AInteractive_KeyBox_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.ExecuteUbergraph_Interactive_KeyBox
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_KeyBox_C::ExecuteUbergraph_Interactive_KeyBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.ExecuteUbergraph_Interactive_KeyBox");

	AInteractive_KeyBox_C_ExecuteUbergraph_Interactive_KeyBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_KeyBox.Interactive_KeyBox_C.Key Used__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AInteractive_KeyBox_C::Key_Used__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_KeyBox.Interactive_KeyBox_C.Key Used__DelegateSignature");

	AInteractive_KeyBox_C_Key_Used__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
