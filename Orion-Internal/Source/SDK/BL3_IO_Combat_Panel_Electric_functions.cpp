// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Combat_Panel_Electric_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.SetElectricalPanelState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Electrified                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_Panel_Electric_C::SetElectricalPanelState(bool Electrified)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.SetElectricalPanelState");

	AIO_Combat_Panel_Electric_C_SetElectricalPanelState_Params params;
	params.Electrified = Electrified;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.UserConstructionScript");

	AIO_Combat_Panel_Electric_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.StopElectrifiedFeedback
// (BlueprintCallable, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::StopElectrifiedFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.StopElectrifiedFeedback");

	AIO_Combat_Panel_Electric_C_StopElectrifiedFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.StartElectrifiedFeedback
// (BlueprintCallable, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::StartElectrifiedFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.StartElectrifiedFeedback");

	AIO_Combat_Panel_Electric_C_StartElectrifiedFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.ReceiveBeginPlay");

	AIO_Combat_Panel_Electric_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnDisabled");

	AIO_Combat_Panel_Electric_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnEnabled");

	AIO_Combat_Panel_Electric_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric
// (BlueprintEvent)
// Parameters:
// class UElementalInteractionData* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInitialState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_Panel_Electric_C::BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric(class UElementalInteractionData* State, bool bIsInitialState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric");

	AIO_Combat_Panel_Electric_C_BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_3_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_Panel_Electric_Params params;
	params.State = State;
	params.bIsInitialState = bIsInitialState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.PowerOn
// (BlueprintCallable, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::PowerOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.PowerOn");

	AIO_Combat_Panel_Electric_C_PowerOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.PowerOff
// (BlueprintCallable, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::PowerOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.PowerOff");

	AIO_Combat_Panel_Electric_C_PowerOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.SwitchOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastActorToUseSwitch           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_Panel_Electric_C::SwitchOn(class AActor* LastActorToUseSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.SwitchOn");

	AIO_Combat_Panel_Electric_C_SwitchOn_Params params;
	params.LastActorToUseSwitch = LastActorToUseSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.SwitchOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastActorToUseSwitch           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_Panel_Electric_C::SwitchOff(class AActor* LastActorToUseSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.SwitchOff");

	AIO_Combat_Panel_Electric_C_SwitchOff_Params params;
	params.LastActorToUseSwitch = LastActorToUseSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.ExecuteUbergraph_IO_Combat_Panel_Electric
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Combat_Panel_Electric_C::ExecuteUbergraph_IO_Combat_Panel_Electric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.ExecuteUbergraph_IO_Combat_Panel_Electric");

	AIO_Combat_Panel_Electric_C_ExecuteUbergraph_IO_Combat_Panel_Electric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnElectrifiedStop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::OnElectrifiedStop__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnElectrifiedStop__DelegateSignature");

	AIO_Combat_Panel_Electric_C_OnElectrifiedStop__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnElectrifiedStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_Combat_Panel_Electric_C::OnElectrifiedStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Combat_Panel_Electric.IO_Combat_Panel_Electric_C.OnElectrifiedStart__DelegateSignature");

	AIO_Combat_Panel_Electric_C_OnElectrifiedStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
