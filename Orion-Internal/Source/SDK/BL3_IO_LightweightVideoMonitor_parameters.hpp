#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_LightweightVideoMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.SetAudioLocations
struct AIO_LightweightVideoMonitor_C_SetAudioLocations_Params
{
};

// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.OverrideSecondaryMeshes
struct AIO_LightweightVideoMonitor_C_OverrideSecondaryMeshes_Params
{
	class UMediaTexture*                               Media_Texture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.UserConstructionScript
struct AIO_LightweightVideoMonitor_C_UserConstructionScript_Params
{
};

// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.__UserState_MonitorStates_2
struct AIO_LightweightVideoMonitor_C___UserState_MonitorStates_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.__UserState_MonitorStates_1
struct AIO_LightweightVideoMonitor_C___UserState_MonitorStates_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_LightweightVideoMonitor
struct AIO_LightweightVideoMonitor_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_LightweightVideoMonitor_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.MovieEnd
struct AIO_LightweightVideoMonitor_C_MovieEnd_Params
{
};

// Function IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C.ExecuteUbergraph_IO_LightweightVideoMonitor
struct AIO_LightweightVideoMonitor_C_ExecuteUbergraph_IO_LightweightVideoMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
