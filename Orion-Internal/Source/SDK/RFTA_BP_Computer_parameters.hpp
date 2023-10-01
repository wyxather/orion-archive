#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Computer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Computer.BP_Computer_C.UpdateTriggerState
struct ABP_Computer_C_UpdateTriggerState_Params
{
};

// Function BP_Computer.BP_Computer_C.IsLocked
struct ABP_Computer_C_IsLocked_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Computer.BP_Computer_C.SetPowerEnabled
struct ABP_Computer_C_SetPowerEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Computer.BP_Computer_C.Refresh Focus
struct ABP_Computer_C_Refresh_Focus_Params
{
};

// Function BP_Computer.BP_Computer_C.Get Terminal
struct ABP_Computer_C_Get_Terminal_Params
{
	class UWidget_Terminal_C*                          Widget_Terminal;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Computer.BP_Computer_C.Get Widget Interaction
struct ABP_Computer_C_Get_Widget_Interaction_Params
{
	class UWidgetInteractionComponent*                 WidgetInteraction;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Computer.BP_Computer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
struct ABP_Computer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Computer.BP_Computer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
struct ABP_Computer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Computer.BP_Computer_C.TerminalSelect
struct ABP_Computer_C_TerminalSelect_Params
{
};

// Function BP_Computer.BP_Computer_C.On Dialog Complete
struct ABP_Computer_C_On_Dialog_Complete_Params
{
};

// Function BP_Computer.BP_Computer_C.On Inspectable Complete
struct ABP_Computer_C_On_Inspectable_Complete_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Computer.BP_Computer_C.BndEvt__PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature
struct ABP_Computer_C_BndEvt__PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Computer.BP_Computer_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectableEvent__DelegateSignature
struct ABP_Computer_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectableEvent__DelegateSignature_Params
{
	class UInspectableComponent**                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Computer.BP_Computer_C.SetTriggerState
struct ABP_Computer_C_SetTriggerState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Computer.BP_Computer_C.SFX_Keyboard_On
struct ABP_Computer_C_SFX_Keyboard_On_Params
{
};

// Function BP_Computer.BP_Computer_C.SendEventToQuest
struct ABP_Computer_C_SendEventToQuest_Params
{
};

// Function BP_Computer.BP_Computer_C.ReceiveBeginPlay
struct ABP_Computer_C_ReceiveBeginPlay_Params
{
};

// Function BP_Computer.BP_Computer_C.OnReset
struct ABP_Computer_C_OnReset_Params
{
};

// Function BP_Computer.BP_Computer_C.OnInitQuestEntity
struct ABP_Computer_C_OnInitQuestEntity_Params
{
};

// Function BP_Computer.BP_Computer_C.ExecuteUbergraph_BP_Computer
struct ABP_Computer_C_ExecuteUbergraph_BP_Computer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Computer.BP_Computer_C.OnTerminalSelect__DelegateSignature
struct ABP_Computer_C_OnTerminalSelect__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
