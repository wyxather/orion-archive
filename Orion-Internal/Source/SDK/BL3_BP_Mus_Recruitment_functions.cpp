// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Mus_Recruitment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.SetAudioComponentLocationOverride
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mus_Recruitment_C::SetAudioComponentLocationOverride(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.SetAudioComponentLocationOverride");

	ABP_Mus_Recruitment_C_SetAudioComponentLocationOverride_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.PopulateSpeakerLocations
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Speaker_Proxies                (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Mus_Recruitment_C::PopulateSpeakerLocations(TArray<class UObject*>* Speaker_Proxies)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.PopulateSpeakerLocations");

	ABP_Mus_Recruitment_C_PopulateSpeakerLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speaker_Proxies != nullptr)
		*Speaker_Proxies = params.Speaker_Proxies;
}


// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Mus_Recruitment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.UserConstructionScript");

	ABP_Mus_Recruitment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Mus_Recruitment_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.ReceiveBeginPlay");

	ABP_Mus_Recruitment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mus_Recruitment_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.ReceiveEndPlay");

	ABP_Mus_Recruitment_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BP_Mus_Recruitment
// (BlueprintEvent)

void ABP_Mus_Recruitment_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BP_Mus_Recruitment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BP_Mus_Recruitment");

	ABP_Mus_Recruitment_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BP_Mus_Recruitment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_BP_Mus_Recruitment
// (BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mus_Recruitment_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_BP_Mus_Recruitment(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_BP_Mus_Recruitment");

	ABP_Mus_Recruitment_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_BP_Mus_Recruitment_Params params;
	params.Objective = Objective;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.ExecuteUbergraph_BP_Mus_Recruitment
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mus_Recruitment_C::ExecuteUbergraph_BP_Mus_Recruitment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mus_Recruitment.BP_Mus_Recruitment_C.ExecuteUbergraph_BP_Mus_Recruitment");

	ABP_Mus_Recruitment_C_ExecuteUbergraph_BP_Mus_Recruitment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
