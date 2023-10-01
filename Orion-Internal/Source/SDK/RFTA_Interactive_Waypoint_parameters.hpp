#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Waypoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interactive_Waypoint.Interactive_Waypoint_C.TryUpdateLevelScaling
struct AInteractive_Waypoint_C_TryUpdateLevelScaling_Params
{
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.EndGrab
struct AInteractive_Waypoint_C_EndGrab_Params
{
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.BeginGrab
struct AInteractive_Waypoint_C_BeginGrab_Params
{
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.AlignToWaypoint
struct AInteractive_Waypoint_C_AlignToWaypoint_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.State_Activate
struct AInteractive_Waypoint_C_State_Activate_Params
{
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.State_Active
struct AInteractive_Waypoint_C_State_Active_Params
{
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.State_Inactive
struct AInteractive_Waypoint_C_State_Inactive_Params
{
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.InActiveState
struct AInteractive_Waypoint_C_InActiveState_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.IsWaypointActive
struct AInteractive_Waypoint_C_IsWaypointActive_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.PlayBlastFX
struct AInteractive_Waypoint_C_PlayBlastFX_Params
{
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.ReceiveBeginPlay
struct AInteractive_Waypoint_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AInteractive_Waypoint_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature
struct AInteractive_Waypoint_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_InteractiveDelegate__DelegateSignature
struct AInteractive_Waypoint_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_InteractiveDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Waypoint.Interactive_Waypoint_C.ExecuteUbergraph_Interactive_Waypoint
struct AInteractive_Waypoint_C_ExecuteUbergraph_Interactive_Waypoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
