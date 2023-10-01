#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_BoundaryTurret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_BoundaryTurret.IO_BoundaryTurret_C.UserConstructionScript
struct AIO_BoundaryTurret_C_UserConstructionScript_Params
{
};

// Function IO_BoundaryTurret.IO_BoundaryTurret_C.PlayKillEffects
struct AIO_BoundaryTurret_C_PlayKillEffects_Params
{
	struct FVector*                                    TargetLocation;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function IO_BoundaryTurret.IO_BoundaryTurret_C.ReceiveBeginPlay
struct AIO_BoundaryTurret_C_ReceiveBeginPlay_Params
{
};

// Function IO_BoundaryTurret.IO_BoundaryTurret_C.BndEvt__WarningAudio_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature_IO_BoundaryTurret
struct AIO_BoundaryTurret_C_BndEvt__WarningAudio_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature_IO_BoundaryTurret_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_BoundaryTurret.IO_BoundaryTurret_C.ExecuteUbergraph_IO_BoundaryTurret
struct AIO_BoundaryTurret_C_ExecuteUbergraph_IO_BoundaryTurret_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
