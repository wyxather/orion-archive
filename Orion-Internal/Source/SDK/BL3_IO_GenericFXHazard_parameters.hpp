#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_GenericFXHazard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.ConvertRelativeLocationsToWorld
struct AIO_GenericFXHazard_C_ConvertRelativeLocationsToWorld_Params
{
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayShutdown
struct AIO_GenericFXHazard_C_Audio_PlayShutdown_Params
{
	class UDA_GenericFXHazard_C*                       self3;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayWarmup
struct AIO_GenericFXHazard_C_Audio_PlayWarmup_Params
{
	class UDA_GenericFXHazard_C*                       DataAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.UserConstructionScript
struct AIO_GenericFXHazard_C_UserConstructionScript_Params
{
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.ReceiveBeginPlay
struct AIO_GenericFXHazard_C_ReceiveBeginPlay_Params
{
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_1
struct AIO_GenericFXHazard_C___UserState_FireState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_2
struct AIO_GenericFXHazard_C___UserState_FireState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnActivate
struct AIO_GenericFXHazard_C_OnActivate_Params
{
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnDeactivate
struct AIO_GenericFXHazard_C_OnDeactivate_Params
{
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.SetPlaceableFireState
struct AIO_GenericFXHazard_C_SetPlaceableFireState_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard
struct AIO_GenericFXHazard_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.ExecuteUbergraph_IO_GenericFXHazard
struct AIO_GenericFXHazard_C_ExecuteUbergraph_IO_GenericFXHazard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_GenericFXHazard.IO_GenericFXHazard_C.Event_BeginPlayerOverlap__DelegateSignature
struct AIO_GenericFXHazard_C_Event_BeginPlayerOverlap__DelegateSignature_Params
{
	class AGbxPlayerController*                        GbxPlayerController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
