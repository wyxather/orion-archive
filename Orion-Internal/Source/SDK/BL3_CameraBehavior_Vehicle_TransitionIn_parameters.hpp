#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CameraBehavior_Vehicle_TransitionIn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Update
struct UCameraBehavior_Vehicle_TransitionIn_C_Update_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraState**                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Start
struct UCameraBehavior_Vehicle_TransitionIn_C_Start_Params
{
	class UCameraState**                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn
struct UCameraBehavior_Vehicle_TransitionIn_C_ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
