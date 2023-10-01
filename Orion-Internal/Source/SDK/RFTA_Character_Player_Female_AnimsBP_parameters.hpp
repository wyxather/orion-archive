#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Player_Female_AnimsBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Player_Female_AnimsBP.Character_Player_Female_AnimsBP_C.GetTurnSpeedAbs
struct UCharacter_Player_Female_AnimsBP_C_GetTurnSpeedAbs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Character_Player_Female_AnimsBP.Character_Player_Female_AnimsBP_C.Get Camera World Rotation
struct UCharacter_Player_Female_AnimsBP_C_Get_Camera_World_Rotation_Params
{
	class USceneComponent**                            Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Character_Player_Female_AnimsBP.Character_Player_Female_AnimsBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_Player_Female_AnimsBP_AnimGraphNode_TransitionResult_8C9F42DB468BEB6BA0D72BA86C52028F
struct UCharacter_Player_Female_AnimsBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_Player_Female_AnimsBP_AnimGraphNode_TransitionResult_8C9F42DB468BEB6BA0D72BA86C52028F_Params
{
};

// Function Character_Player_Female_AnimsBP.Character_Player_Female_AnimsBP_C.BlueprintUpdateAnimation
struct UCharacter_Player_Female_AnimsBP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Player_Female_AnimsBP.Character_Player_Female_AnimsBP_C.ExecuteUbergraph_Character_Player_Female_AnimsBP
struct UCharacter_Player_Female_AnimsBP_C_ExecuteUbergraph_Character_Player_Female_AnimsBP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
