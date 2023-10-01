#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Global_GroundSlam_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.DoMelee
struct UControlledMove_Global_GroundSlam_Base_C_DoMelee_Params
{
};

// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.GroundSlam_End
struct UControlledMove_Global_GroundSlam_Base_C_GroundSlam_End_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStart
struct UControlledMove_Global_GroundSlam_Base_C_OnStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStop
struct UControlledMove_Global_GroundSlam_Base_C_OnStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base
struct UControlledMove_Global_GroundSlam_Base_C_ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
