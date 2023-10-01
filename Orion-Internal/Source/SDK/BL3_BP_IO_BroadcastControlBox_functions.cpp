// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_BroadcastControlBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.CheckMissionRadio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionRadio           MissionRadio                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_IO_BroadcastControlBox_C::CheckMissionRadio(const struct FMissionRadio& MissionRadio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.CheckMissionRadio");

	ABP_IO_BroadcastControlBox_C_CheckMissionRadio_Params params;
	params.MissionRadio = MissionRadio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.UpdateAudioDef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_IO_BroadcastControlBox_C::UpdateAudioDef()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.UpdateAudioDef");

	ABP_IO_BroadcastControlBox_C_UpdateAudioDef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.ChangeAudioChannel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_IO_BroadcastControlBox_C::ChangeAudioChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.ChangeAudioChannel");

	ABP_IO_BroadcastControlBox_C_ChangeAudioChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.UpdateRadioLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_IO_BroadcastControlBox_C::UpdateRadioLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.UpdateRadioLocations");

	ABP_IO_BroadcastControlBox_C_UpdateRadioLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.RegisterNewRadio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_IO_BroadcastRadio_C* AssociatedRadio                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::RegisterNewRadio(class ABP_IO_BroadcastRadio_C* AssociatedRadio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.RegisterNewRadio");

	ABP_IO_BroadcastControlBox_C_RegisterNewRadio_Params params;
	params.AssociatedRadio = AssociatedRadio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_IO_BroadcastControlBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.UserConstructionScript");

	ABP_IO_BroadcastControlBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.BndEvt__BP_CrewChallengeComponent_Sabotage_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_BroadcastControlBox
// (BlueprintEvent)
// Parameters:
// class UChallengesComponent*    PlayerChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::BndEvt__BP_CrewChallengeComponent_Sabotage_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_BroadcastControlBox(class UChallengesComponent* PlayerChallenges)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.BndEvt__BP_CrewChallengeComponent_Sabotage_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_BroadcastControlBox");

	ABP_IO_BroadcastControlBox_C_BndEvt__BP_CrewChallengeComponent_Sabotage_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_BroadcastControlBox_Params params;
	params.PlayerChallenges = PlayerChallenges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::__UserState_TowerState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_2");

	ABP_IO_BroadcastControlBox_C___UserState_TowerState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::__UserState_TowerState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_1");

	ABP_IO_BroadcastControlBox_C___UserState_TowerState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::__UserState_TowerState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_3");

	ABP_IO_BroadcastControlBox_C___UserState_TowerState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_4
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::__UserState_TowerState_4(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_4");

	ABP_IO_BroadcastControlBox_C___UserState_TowerState_4_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastControlBox
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastControlBox(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastControlBox");

	ABP_IO_BroadcastControlBox_C_BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastControlBox_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_IO_BroadcastControlBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.ReceiveBeginPlay");

	ABP_IO_BroadcastControlBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_RadioState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::__UserState_RadioState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_RadioState_2");

	ABP_IO_BroadcastControlBox_C___UserState_RadioState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_RadioState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::__UserState_RadioState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_RadioState_3");

	ABP_IO_BroadcastControlBox_C___UserState_RadioState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.PlayNewAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_IO_BroadcastControlBox_C::PlayNewAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.PlayNewAudio");

	ABP_IO_BroadcastControlBox_C_PlayNewAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_RadioState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::__UserState_RadioState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_RadioState_1");

	ABP_IO_BroadcastControlBox_C___UserState_RadioState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio
// (BlueprintEvent)
// Parameters:
// class UClass*                  Mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMissionEvent                  MissionEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio(class UClass* Mission, EMissionEvent MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio");

	ABP_IO_BroadcastControlBox_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio_Params params;
	params.Mission = Mission;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.ExecuteUbergraph_BP_IO_BroadcastControlBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastControlBox_C::ExecuteUbergraph_BP_IO_BroadcastControlBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.ExecuteUbergraph_BP_IO_BroadcastControlBox");

	ABP_IO_BroadcastControlBox_C_ExecuteUbergraph_BP_IO_BroadcastControlBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
