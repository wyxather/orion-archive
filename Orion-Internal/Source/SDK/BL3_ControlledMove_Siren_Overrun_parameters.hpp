#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Siren_Overrun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnHitTargetable
struct UControlledMove_Siren_Overrun_C_OnHitTargetable_Params
{
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnServerStop
struct UControlledMove_Siren_Overrun_C_OnServerStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnStop
struct UControlledMove_Siren_Overrun_C_OnStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.ExecuteUbergraph_ControlledMove_Siren_Overrun
struct UControlledMove_Siren_Overrun_C_ExecuteUbergraph_ControlledMove_Siren_Overrun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
