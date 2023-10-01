#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Vehicle_Technical_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.Exit
struct UBPAnim_Vehicle_Technical_C_Exit_Params
{
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.Enter
struct UBPAnim_Vehicle_Technical_C_Enter_Params
{
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.OnLanded_Event
struct UBPAnim_Vehicle_Technical_C_OnLanded_Event_Params
{
	float                                              TimeSpentInAir;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LandAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumWheelsOnGround;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllWheelsLanded;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.AllowJump
struct UBPAnim_Vehicle_Technical_C_AllowJump_Params
{
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.CustomEvent_1
struct UBPAnim_Vehicle_Technical_C_CustomEvent_1_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.ResetBumpAnim
struct UBPAnim_Vehicle_Technical_C_ResetBumpAnim_Params
{
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_98E5299B41398F23572118ABAD4CF983
struct UBPAnim_Vehicle_Technical_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_98E5299B41398F23572118ABAD4CF983_Params
{
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_4170D05447F3907016BAACA24DD234E5
struct UBPAnim_Vehicle_Technical_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_4170D05447F3907016BAACA24DD234E5_Params
{
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_E55DC6454E8FD0EF719E80ADDD0A5751
struct UBPAnim_Vehicle_Technical_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Vehicle_Technical_AnimGraphNode_TwoWayBlend_E55DC6454E8FD0EF719E80ADDD0A5751_Params
{
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.BlueprintInitializeAnimation
struct UBPAnim_Vehicle_Technical_C_BlueprintInitializeAnimation_Params
{
};

// Function BPAnim_Vehicle_Technical.BPAnim_Vehicle_Technical_C.ExecuteUbergraph_BPAnim_Vehicle_Technical
struct UBPAnim_Vehicle_Technical_C_ExecuteUbergraph_BPAnim_Vehicle_Technical_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
