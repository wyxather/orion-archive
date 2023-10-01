#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_BroadcastRadio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.ChangeRadioChannel
struct ABP_IO_BroadcastRadio_C_ChangeRadioChannel_Params
{
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.CheckMissionRadio
struct ABP_IO_BroadcastRadio_C_CheckMissionRadio_Params
{
	struct FMissionRadio                               Mission_Radio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.UserConstructionScript
struct ABP_IO_BroadcastRadio_C_UserConstructionScript_Params
{
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.PlayNewAudio
struct ABP_IO_BroadcastRadio_C_PlayNewAudio_Params
{
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.ReceiveBeginPlay
struct ABP_IO_BroadcastRadio_C_ReceiveBeginPlay_Params
{
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_2
struct ABP_IO_BroadcastRadio_C___UserState_RadioState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_1
struct ABP_IO_BroadcastRadio_C___UserState_RadioState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_4
struct ABP_IO_BroadcastRadio_C___UserState_RadioState_4_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.__UserState_RadioState_3
struct ABP_IO_BroadcastRadio_C___UserState_RadioState_3_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio
struct ABP_IO_BroadcastRadio_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio
struct ABP_IO_BroadcastRadio_C_BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio
struct ABP_IO_BroadcastRadio_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio_Params
{
	class UClass*                                      Mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMissionEvent                                      MissionEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C.ExecuteUbergraph_BP_IO_BroadcastRadio
struct ABP_IO_BroadcastRadio_C_ExecuteUbergraph_BP_IO_BroadcastRadio_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
