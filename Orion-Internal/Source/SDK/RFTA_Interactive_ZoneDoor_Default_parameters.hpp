#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_ZoneDoor_Default_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ShouldBeActive
struct AInteractive_ZoneDoor_Default_C_ShouldBeActive_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.GetAllOtherPCs
struct AInteractive_ZoneDoor_Default_C_GetAllOtherPCs_Params
{
	class ARemnantCharacter**                          ActivatingCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharacter_Master_Player_C*>          RemnantCharacters;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnSetNotActive
struct AInteractive_ZoneDoor_Default_C_OnSetNotActive_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnSetActive
struct AInteractive_ZoneDoor_Default_C_OnSetActive_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.RefreshActive
struct AInteractive_ZoneDoor_Default_C_RefreshActive_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.SetupUsed
struct AInteractive_ZoneDoor_Default_C_SetupUsed_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.HidePrompt
struct AInteractive_ZoneDoor_Default_C_HidePrompt_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ShowPrompt
struct AInteractive_ZoneDoor_Default_C_ShowPrompt_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnRep_Active
struct AInteractive_ZoneDoor_Default_C_OnRep_Active_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.IsReady
struct AInteractive_ZoneDoor_Default_C_IsReady_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.UserConstructionScript
struct AInteractive_ZoneDoor_Default_C_UserConstructionScript_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature
struct AInteractive_ZoneDoor_Default_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneVoidDelegate__DelegateSignature
struct AInteractive_ZoneDoor_Default_C_BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneVoidDelegate__DelegateSignature_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ReceiveBeginPlay
struct AInteractive_ZoneDoor_Default_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.SetTriggerState
struct AInteractive_ZoneDoor_Default_C_SetTriggerState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ReceiveEndPlay
struct AInteractive_ZoneDoor_Default_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnShowPrompt
struct AInteractive_ZoneDoor_Default_C_OnShowPrompt_Params
{
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.DoTravel
struct AInteractive_ZoneDoor_Default_C_DoTravel_Params
{
	class ARemnant_PlayerController_C**                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ExecuteUbergraph_Interactive_ZoneDoor_Default
struct AInteractive_ZoneDoor_Default_C_ExecuteUbergraph_Interactive_ZoneDoor_Default_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
