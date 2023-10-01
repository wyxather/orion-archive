#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_DragonCrystal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.IsPlayerBaseCrystal
struct AInteractive_DragonCrystal_C_IsPlayerBaseCrystal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.EndGrab
struct AInteractive_DragonCrystal_C_EndGrab_Params
{
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BeginGrab
struct AInteractive_DragonCrystal_C_BeginGrab_Params
{
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.AlignToWaypoint
struct AInteractive_DragonCrystal_C_AlignToWaypoint_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.State_Activate
struct AInteractive_DragonCrystal_C_State_Activate_Params
{
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.State_Active
struct AInteractive_DragonCrystal_C_State_Active_Params
{
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.State_Inactive
struct AInteractive_DragonCrystal_C_State_Inactive_Params
{
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.PlayBlastFX
struct AInteractive_DragonCrystal_C_PlayBlastFX_Params
{
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneLinkActivateEvent__DelegateSignature
struct AInteractive_DragonCrystal_C_BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneLinkActivateEvent__DelegateSignature_Params
{
	class AActor**                                     Waypoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.OnActivate
struct AInteractive_DragonCrystal_C_OnActivate_Params
{
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.ReceiveBeginPlay
struct AInteractive_DragonCrystal_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BeginUseCheckpoint
struct AInteractive_DragonCrystal_C_BeginUseCheckpoint_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              WasSummoned;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.EndUseCheckpoint
struct AInteractive_DragonCrystal_C_EndUseCheckpoint_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.TransitionToMenu
struct AInteractive_DragonCrystal_C_TransitionToMenu_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.TransitionFromMenu
struct AInteractive_DragonCrystal_C_TransitionFromMenu_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature
struct AInteractive_DragonCrystal_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.ActivateIdleVFX
struct AInteractive_DragonCrystal_C_ActivateIdleVFX_Params
{
};

// Function Interactive_DragonCrystal.Interactive_DragonCrystal_C.ExecuteUbergraph_Interactive_DragonCrystal
struct AInteractive_DragonCrystal_C_ExecuteUbergraph_Interactive_DragonCrystal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
