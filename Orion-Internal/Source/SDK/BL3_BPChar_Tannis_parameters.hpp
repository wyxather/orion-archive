#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tannis_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Tannis.BPChar_Tannis_C.OnRep_BloodOn
struct ABPChar_Tannis_C_OnRep_BloodOn_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.OnRep_NewVar_1
struct ABPChar_Tannis_C_OnRep_NewVar_1_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.UserConstructionScript
struct ABPChar_Tannis_C_UserConstructionScript_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.TannisTakeKey
struct ABPChar_Tannis_C_TannisTakeKey_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.TannisBeginTakeKey
struct ABPChar_Tannis_C_TannisBeginTakeKey_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.HideKey
struct ABPChar_Tannis_C_HideKey_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis_UNIX1559058710
struct ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis_UNIX1559058710_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis
struct ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis_Params
{
	struct FMissionObjectiveReference                  Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tannis.BPChar_Tannis_C.ToggleWings
struct ABPChar_Tannis_C_ToggleWings_Params
{
	bool                                               ShowWings;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tannis.BPChar_Tannis_C.TryToTakeSomethingElse
struct ABPChar_Tannis_C_TryToTakeSomethingElse_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Tannis
struct ABPChar_Tannis_C_BndEvt__Usable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Tannis_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Tannis.BPChar_Tannis_C.DisableMissionBrain
struct ABPChar_Tannis_C_DisableMissionBrain_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558430371
struct ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Lilith_UNIX1558430371_Params
{
	struct FMissionObjectiveReference                  Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1558430371
struct ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Lilith_UNIX1558430371_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.ReceiveBeginPlay
struct ABPChar_Tannis_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis
struct ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_BPChar_Tannis_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis_UNIX1555086662
struct ABPChar_Tannis_C_BndEvt__MissionObserver_K2Node_ComponentBoundEvent_8_MissionObserverMissionObjectiveUpdate__DelegateSignature_BPChar_Tannis_UNIX1555086662_Params
{
	struct FMissionObjectiveReference                  Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tannis.BPChar_Tannis_C.TannisBloodMatOn
struct ABPChar_Tannis_C_TannisBloodMatOn_Params
{
};

// Function BPChar_Tannis.BPChar_Tannis_C.ExecuteUbergraph_BPChar_Tannis
struct ABPChar_Tannis_C_ExecuteUbergraph_BPChar_Tannis_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
