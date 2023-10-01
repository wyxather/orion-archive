#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_EventRegionBarrier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UpdateBarrierActiveState
struct ABP_EventRegionBarrier_C_UpdateBarrierActiveState_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnRep_HideBarrier
struct ABP_EventRegionBarrier_C_OnRep_HideBarrier_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.AlignToBarrier
struct ABP_EventRegionBarrier_C_AlignToBarrier_Params
{
	class ACharacter_Master_Player_C**                 InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.SetupCollisionNotVisited
struct ABP_EventRegionBarrier_C_SetupCollisionNotVisited_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.SetupCollisionVisited
struct ABP_EventRegionBarrier_C_SetupCollisionVisited_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.IsActorOutside
struct ABP_EventRegionBarrier_C_IsActorOutside_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.IsActorInside
struct ABP_EventRegionBarrier_C_IsActorInside_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UpdateFlash
struct ABP_EventRegionBarrier_C_UpdateFlash_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.SetHasVisited
struct ABP_EventRegionBarrier_C_SetHasVisited_Params
{
	bool*                                              Visited;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ShowBarrier
struct ABP_EventRegionBarrier_C_ShowBarrier_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UpdateBarrier
struct ABP_EventRegionBarrier_C_UpdateBarrier_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UserConstructionScript
struct ABP_EventRegionBarrier_C_UserConstructionScript_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ReceiveBeginPlay
struct ABP_EventRegionBarrier_C_ReceiveBeginPlay_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnUpdateActiveState_Event_1
struct ABP_EventRegionBarrier_C_OnUpdateActiveState_Event_1_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnShow
struct ABP_EventRegionBarrier_C_OnShow_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnHide
struct ABP_EventRegionBarrier_C_OnHide_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.Flash
struct ABP_EventRegionBarrier_C_Flash_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BeginWalkThroughBarrier
struct ABP_EventRegionBarrier_C_BeginWalkThroughBarrier_Params
{
	class ACharacter_Master_Player_C**                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ReceiveTick
struct ABP_EventRegionBarrier_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.HideBarrier
struct ABP_EventRegionBarrier_C_HideBarrier_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.UnhideBarrier
struct ABP_EventRegionBarrier_C_UnhideBarrier_Params
{
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_EventRegionBarrier_C_BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct ABP_EventRegionBarrier_C_BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_EventRegionBarrier_C_BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_EventRegionBarrier_C_BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.EnterBarrier
struct ABP_EventRegionBarrier_C_EnterBarrier_Params
{
	class ARemnantCharacter**                          RemnantCharacter;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ExitBarrier
struct ABP_EventRegionBarrier_C_ExitBarrier_Params
{
	class ARemnantCharacter**                          RemnantCharacter;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.OnStateChange_Event_1
struct ABP_EventRegionBarrier_C_OnStateChange_Event_1_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EventRegionBarrier.BP_EventRegionBarrier_C.ExecuteUbergraph_BP_EventRegionBarrier
struct ABP_EventRegionBarrier_C_ExecuteUbergraph_BP_EventRegionBarrier_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
