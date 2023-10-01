#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_GundamBearSlidev2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C.OnStart
struct UControlledMove_GundamBearSlidev2_C_OnStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C.OnServerStart
struct UControlledMove_GundamBearSlidev2_C_OnServerStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_GundamBearSlidev2.ControlledMove_GundamBearSlidev2_C.ExecuteUbergraph_ControlledMove_GundamBearSlidev2
struct UControlledMove_GundamBearSlidev2_C_ExecuteUbergraph_ControlledMove_GundamBearSlidev2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
