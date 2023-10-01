// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_BroadcastRadio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.ChangeRadioChannel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_IO_BroadcastRadio_C::ChangeRadioChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.ChangeRadioChannel");

	ABP_IO_BroadcastRadio_C_ChangeRadioChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.CheckMissionRadio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionRadio           Mission_Radio                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IO_BroadcastRadio_C::CheckMissionRadio(const struct FMissionRadio& Mission_Radio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.CheckMissionRadio");

	ABP_IO_BroadcastRadio_C_CheckMissionRadio_Params params;
	params.Mission_Radio = Mission_Radio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_IO_BroadcastRadio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.UserConstructionScript");

	ABP_IO_BroadcastRadio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.PlayNewAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_IO_BroadcastRadio_C::PlayNewAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.PlayNewAudio");

	ABP_IO_BroadcastRadio_C_PlayNewAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_IO_BroadcastRadio_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.ReceiveBeginPlay");

	ABP_IO_BroadcastRadio_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastRadio_C::__UserState_RadioState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_2");

	ABP_IO_BroadcastRadio_C___UserState_RadioState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastRadio_C::__UserState_RadioState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_1");

	ABP_IO_BroadcastRadio_C___UserState_RadioState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_4
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastRadio_C::__UserState_RadioState_4(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_4");

	ABP_IO_BroadcastRadio_C___UserState_RadioState_4_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastRadio_C::__UserState_RadioState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_3");

	ABP_IO_BroadcastRadio_C___UserState_RadioState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_IO_BroadcastRadio_C::BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio");

	ABP_IO_BroadcastRadio_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_IO_BroadcastRadio_C::BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio");

	ABP_IO_BroadcastRadio_C_BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio
// (BlueprintEvent)
// Parameters:
// class UClass*                  Mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMissionEvent                  MissionEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastRadio_C::BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio(class UClass* Mission, EMissionEvent MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio");

	ABP_IO_BroadcastRadio_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio_Params params;
	params.Mission = Mission;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.ExecuteUbergraph_BP_IO_BroadcastRadio
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IO_BroadcastRadio_C::ExecuteUbergraph_BP_IO_BroadcastRadio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.ExecuteUbergraph_BP_IO_BroadcastRadio");

	ABP_IO_BroadcastRadio_C_ExecuteUbergraph_BP_IO_BroadcastRadio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
