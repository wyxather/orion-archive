#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.PlayDetach
struct UControlledMove_PhaseLock_Base_C_PlayDetach_Params
{
};

// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ConfigurePhaseLockProperties
struct UControlledMove_PhaseLock_Base_C_ConfigurePhaseLockProperties_Params
{
};

// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.TryDestroyComponent
struct UControlledMove_PhaseLock_Base_C_TryDestroyComponent_Params
{
	class UParticleSystemComponent*                    Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStart
struct UControlledMove_PhaseLock_Base_C_OnStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStop
struct UControlledMove_PhaseLock_Base_C_OnStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStart
struct UControlledMove_PhaseLock_Base_C_OnServerStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStop
struct UControlledMove_PhaseLock_Base_C_OnServerStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ExecuteUbergraph_ControlledMove_PhaseLock_Base
struct UControlledMove_PhaseLock_Base_C_ExecuteUbergraph_ControlledMove_PhaseLock_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
