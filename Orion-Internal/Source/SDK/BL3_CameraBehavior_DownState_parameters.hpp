#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CameraBehavior_DownState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CameraBehavior_DownState.CameraBehavior_DownState_C.Update
struct UCameraBehavior_DownState_C_Update_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraState**                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraBehavior_DownState.CameraBehavior_DownState_C.Start
struct UCameraBehavior_DownState_C_Start_Params
{
	class UCameraState**                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraBehavior_DownState.CameraBehavior_DownState_C.End
struct UCameraBehavior_DownState_C_End_Params
{
	class UCameraState**                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraBehavior_DownState.CameraBehavior_DownState_C.ExecuteUbergraph_CameraBehavior_DownState
struct UCameraBehavior_DownState_C_ExecuteUbergraph_CameraBehavior_DownState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
