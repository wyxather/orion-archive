// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Lilith_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Lilith.BPChar_Lilith_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Lilith_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.UserConstructionScript");

	ABPChar_Lilith_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.OnAnimEnd_498C0BCB4003EDBE1E37BB92883040A1
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Lilith_C::OnAnimEnd_498C0BCB4003EDBE1E37BB92883040A1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.OnAnimEnd_498C0BCB4003EDBE1E37BB92883040A1");

	ABPChar_Lilith_C_OnAnimEnd_498C0BCB4003EDBE1E37BB92883040A1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.OnEnd_498C0BCB4003EDBE1E37BB92883040A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Lilith_C::OnEnd_498C0BCB4003EDBE1E37BB92883040A1(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.OnEnd_498C0BCB4003EDBE1E37BB92883040A1");

	ABPChar_Lilith_C_OnEnd_498C0BCB4003EDBE1E37BB92883040A1_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.OnAnimEnd_98BFF701491B942886E78893B6A2A693
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Lilith_C::OnAnimEnd_98BFF701491B942886E78893B6A2A693()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.OnAnimEnd_98BFF701491B942886E78893B6A2A693");

	ABPChar_Lilith_C_OnAnimEnd_98BFF701491B942886E78893B6A2A693_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.OnEnd_98BFF701491B942886E78893B6A2A693
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Lilith_C::OnEnd_98BFF701491B942886E78893B6A2A693(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.OnEnd_98BFF701491B942886E78893B6A2A693");

	ABPChar_Lilith_C_OnEnd_98BFF701491B942886E78893B6A2A693_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.LilithPhaseTeleportTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TeleportToActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Lilith_C::LilithPhaseTeleportTo(class AActor* TeleportToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.LilithPhaseTeleportTo");

	ABPChar_Lilith_C_LilithPhaseTeleportTo_Params params;
	params.TeleportToActor = TeleportToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.LilithSpecialDownstate
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Lilith_C::LilithSpecialDownstate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.LilithSpecialDownstate");

	ABPChar_Lilith_C_LilithSpecialDownstate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700
// (BlueprintEvent)
// Parameters:
// class AController**            UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Lilith_C::BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController** UserController, class UPrimitiveComponent** UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700");

	ABPChar_Lilith_C_BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Lilith
// (BlueprintEvent)

void ABPChar_Lilith_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Lilith()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Lilith");

	ABPChar_Lilith_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Lilith_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.DisableMissionBrain
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Lilith_C::DisableMissionBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.DisableMissionBrain");

	ABPChar_Lilith_C_DisableMissionBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith
// (BlueprintEvent)

void ABPChar_Lilith_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith");

	ABPChar_Lilith_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith
// (BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Lilith_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith");

	ABPChar_Lilith_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_Params params;
	params.Objective = Objective;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1554481954
// (BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Lilith_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1554481954(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1554481954");

	ABPChar_Lilith_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1554481954_Params params;
	params.Objective = Objective;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554481954
// (BlueprintEvent)

void ABPChar_Lilith_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554481954()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554481954");

	ABPChar_Lilith_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554481954_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554972557
// (BlueprintEvent)

void ABPChar_Lilith_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554972557()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554972557");

	ABPChar_Lilith_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1554972557_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558081896
// (BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Lilith_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558081896(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558081896");

	ABPChar_Lilith_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558081896_Params params;
	params.Objective = Objective;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.LilithWingsOn
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Lilith_C::LilithWingsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.LilithWingsOn");

	ABPChar_Lilith_C_LilithWingsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.LilithWingsOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Lilith_C::LilithWingsOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.LilithWingsOff");

	ABPChar_Lilith_C_LilithWingsOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Lilith.BPChar_Lilith_C.ExecuteUbergraph_BPChar_Lilith
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Lilith_C::ExecuteUbergraph_BPChar_Lilith(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Lilith.BPChar_Lilith_C.ExecuteUbergraph_BPChar_Lilith");

	ABPChar_Lilith_C_ExecuteUbergraph_BPChar_Lilith_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
