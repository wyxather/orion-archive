#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_BroadcastControlBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.CheckMissionRadio
struct ABP_IO_BroadcastControlBox_C_CheckMissionRadio_Params
{
	struct FMissionRadio                               MissionRadio;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.UpdateAudioDef
struct ABP_IO_BroadcastControlBox_C_UpdateAudioDef_Params
{
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.ChangeAudioChannel
struct ABP_IO_BroadcastControlBox_C_ChangeAudioChannel_Params
{
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.UpdateRadioLocations
struct ABP_IO_BroadcastControlBox_C_UpdateRadioLocations_Params
{
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.RegisterNewRadio
struct ABP_IO_BroadcastControlBox_C_RegisterNewRadio_Params
{
	class ABP_IO_BroadcastRadio_C*                     AssociatedRadio;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.UserConstructionScript
struct ABP_IO_BroadcastControlBox_C_UserConstructionScript_Params
{
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.BndEvt__BP_CrewChallengeComponent_Sabotage_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_BroadcastControlBox
struct ABP_IO_BroadcastControlBox_C_BndEvt__BP_CrewChallengeComponent_Sabotage_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_BroadcastControlBox_Params
{
	class UChallengesComponent*                        PlayerChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_2
struct ABP_IO_BroadcastControlBox_C___UserState_TowerState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_1
struct ABP_IO_BroadcastControlBox_C___UserState_TowerState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_3
struct ABP_IO_BroadcastControlBox_C___UserState_TowerState_3_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_TowerState_4
struct ABP_IO_BroadcastControlBox_C___UserState_TowerState_4_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastControlBox
struct ABP_IO_BroadcastControlBox_C_BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastControlBox_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.ReceiveBeginPlay
struct ABP_IO_BroadcastControlBox_C_ReceiveBeginPlay_Params
{
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_RadioState_2
struct ABP_IO_BroadcastControlBox_C___UserState_RadioState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_RadioState_3
struct ABP_IO_BroadcastControlBox_C___UserState_RadioState_3_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.PlayNewAudio
struct ABP_IO_BroadcastControlBox_C_PlayNewAudio_Params
{
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.__UserState_RadioState_1
struct ABP_IO_BroadcastControlBox_C___UserState_RadioState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio
struct ABP_IO_BroadcastControlBox_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio_Params
{
	class UClass*                                      Mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMissionEvent                                      MissionEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C.ExecuteUbergraph_BP_IO_BroadcastControlBox
struct ABP_IO_BroadcastControlBox_C_ExecuteUbergraph_BP_IO_BroadcastControlBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
