// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tannis_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Tannis.BPChar_Tannis_C.OnRep_BloodOn
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tannis_C::OnRep_BloodOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.OnRep_BloodOn");

	ABPChar_Tannis_C_OnRep_BloodOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.OnRep_NewVar_1
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tannis_C::OnRep_NewVar_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.OnRep_NewVar_1");

	ABPChar_Tannis_C_OnRep_NewVar_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tannis_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.UserConstructionScript");

	ABPChar_Tannis_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.TannisTakeKey
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tannis_C::TannisTakeKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.TannisTakeKey");

	ABPChar_Tannis_C_TannisTakeKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.TannisBeginTakeKey
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tannis_C::TannisBeginTakeKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.TannisBeginTakeKey");

	ABPChar_Tannis_C_TannisBeginTakeKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.HideKey
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tannis_C::HideKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.HideKey");

	ABPChar_Tannis_C_HideKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis_UNIX1559058710
// (BlueprintEvent)

void ABPChar_Tannis_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis_UNIX1559058710()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis_UNIX1559058710");

	ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis_UNIX1559058710_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis
// (BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tannis_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis");

	ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis_Params params;
	params.Objective = Objective;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.ToggleWings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowWings                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tannis_C::ToggleWings(bool ShowWings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.ToggleWings");

	ABPChar_Tannis_C_ToggleWings_Params params;
	params.ShowWings = ShowWings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.TryToTakeSomethingElse
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tannis_C::TryToTakeSomethingElse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.TryToTakeSomethingElse");

	ABPChar_Tannis_C_TryToTakeSomethingElse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Tannis
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Tannis_C::BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Tannis(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Tannis");

	ABPChar_Tannis_C_BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Tannis_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.DisableMissionBrain
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tannis_C::DisableMissionBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.DisableMissionBrain");

	ABPChar_Tannis_C_DisableMissionBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558430371
// (BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tannis_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558430371(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558430371");

	ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558430371_Params params;
	params.Objective = Objective;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1558430371
// (BlueprintEvent)

void ABPChar_Tannis_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1558430371()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1558430371");

	ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1558430371_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Tannis_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.ReceiveBeginPlay");

	ABPChar_Tannis_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis
// (BlueprintEvent)

void ABPChar_Tannis_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis");

	ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis_UNIX1555086662
// (BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tannis_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis_UNIX1555086662(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis_UNIX1555086662");

	ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis_UNIX1555086662_Params params;
	params.Objective = Objective;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.TannisBloodMatOn
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABPChar_Tannis_C::TannisBloodMatOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.TannisBloodMatOn");

	ABPChar_Tannis_C_TannisBloodMatOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tannis.BPChar_Tannis_C.ExecuteUbergraph_BPChar_Tannis
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tannis_C::ExecuteUbergraph_BPChar_Tannis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tannis.BPChar_Tannis_C.ExecuteUbergraph_BPChar_Tannis");

	ABPChar_Tannis_C_ExecuteUbergraph_BPChar_Tannis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
