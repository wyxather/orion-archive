#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Inspectable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Inspectable.BP_Inspectable_C.OnInspectEnd
struct ABP_Inspectable_C_OnInspectEnd_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.EnablePlayerInteraction
struct ABP_Inspectable_C_EnablePlayerInteraction_Params
{
	class APlayerController**                          PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Inspectable.BP_Inspectable_C.InitLore
struct ABP_Inspectable_C_InitLore_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.SetLore
struct ABP_Inspectable_C_SetLore_Params
{
	class UClass**                                     Lore;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable.BP_Inspectable_C.OnRep_Lore
struct ABP_Inspectable_C_OnRep_Lore_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.ReceiveBeginPlay
struct ABP_Inspectable_C_ReceiveBeginPlay_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.On Inspectable Complete
struct ABP_Inspectable_C_On_Inspectable_Complete_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_3_InspectableEvent__DelegateSignature
struct ABP_Inspectable_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_3_InspectableEvent__DelegateSignature_Params
{
	class UInspectableComponent**                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable.BP_Inspectable_C.Request Dialog Next
struct ABP_Inspectable_C_Request_Dialog_Next_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.Request Dialog Prev
struct ABP_Inspectable_C_Request_Dialog_Prev_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.OnNextDialog
struct ABP_Inspectable_C_OnNextDialog_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.OnPrevDialog
struct ABP_Inspectable_C_OnPrevDialog_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.BeginTransition
struct ABP_Inspectable_C_BeginTransition_Params
{
	class UInspectableComponent**                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable.BP_Inspectable_C.ServerBeginInspect
struct ABP_Inspectable_C_ServerBeginInspect_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.ServerEndInspect
struct ABP_Inspectable_C_ServerEndInspect_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature
struct ABP_Inspectable_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature_Params
{
	class UInspectableComponent**                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable.BP_Inspectable_C.ForceUpdateUI
struct ABP_Inspectable_C_ForceUpdateUI_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.OnNotifyReadEvent
struct ABP_Inspectable_C_OnNotifyReadEvent_Params
{
	struct FBookPage*                                  Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Inspectable.BP_Inspectable_C.OnNotifyCacheUIPageEvent
struct ABP_Inspectable_C_OnNotifyCacheUIPageEvent_Params
{
	int*                                               CurrentPage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_4_InspectableEvent__DelegateSignature
struct ABP_Inspectable_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_4_InspectableEvent__DelegateSignature_Params
{
	class UInspectableComponent**                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable.BP_Inspectable_C.OnClientRequestEndInspect
struct ABP_Inspectable_C_OnClientRequestEndInspect_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.ServerRequestEndInspect
struct ABP_Inspectable_C_ServerRequestEndInspect_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectablePlayerEvent__DelegateSignature
struct ABP_Inspectable_C_BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectablePlayerEvent__DelegateSignature_Params
{
	class UInspectableComponent**                      Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bIsServerController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Inspectable.BP_Inspectable_C.NotifyCompleteInspect
struct ABP_Inspectable_C_NotifyCompleteInspect_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.ExecuteUbergraph_BP_Inspectable
struct ABP_Inspectable_C_ExecuteUbergraph_BP_Inspectable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable.BP_Inspectable_C.OnNotifyCacheUIPage__DelegateSignature
struct ABP_Inspectable_C_OnNotifyCacheUIPage__DelegateSignature_Params
{
	int*                                               CurrentPage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Inspectable.BP_Inspectable_C.OnNotifyRead__DelegateSignature
struct ABP_Inspectable_C_OnNotifyRead__DelegateSignature_Params
{
	struct FBookPage*                                  Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Inspectable.BP_Inspectable_C.OnInspectableHUDForceUpdate__DelegateSignature
struct ABP_Inspectable_C_OnInspectableHUDForceUpdate__DelegateSignature_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.OnInspectableHUDInit__DelegateSignature
struct ABP_Inspectable_C_OnInspectableHUDInit__DelegateSignature_Params
{
};

// Function BP_Inspectable.BP_Inspectable_C.OnLoreNotify__DelegateSignature
struct ABP_Inspectable_C_OnLoreNotify__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
