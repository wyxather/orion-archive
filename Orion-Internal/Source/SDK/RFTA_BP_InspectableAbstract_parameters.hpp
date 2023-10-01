#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_InspectableAbstract_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_InspectableAbstract.BP_InspectableAbstract_C.Get Inspector
struct ABP_InspectableAbstract_C_Get_Inspector_Params
{
	class APlayerController*                           Player_Controller;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InspectableAbstract.BP_InspectableAbstract_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature
struct ABP_InspectableAbstract_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InspectableAbstract.BP_InspectableAbstract_C.Everyone Start Inspect
struct ABP_InspectableAbstract_C_Everyone_Start_Inspect_Params
{
	class APlayerController**                          Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InspectableAbstract.BP_InspectableAbstract_C.Everyone End Inspect
struct ABP_InspectableAbstract_C_Everyone_End_Inspect_Params
{
	class APlayerController**                          Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InspectableAbstract.BP_InspectableAbstract_C.ReceiveBeginPlay
struct ABP_InspectableAbstract_C_ReceiveBeginPlay_Params
{
};

// Function BP_InspectableAbstract.BP_InspectableAbstract_C.ExecuteUbergraph_BP_InspectableAbstract
struct ABP_InspectableAbstract_C_ExecuteUbergraph_BP_InspectableAbstract_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InspectableAbstract.BP_InspectableAbstract_C.InspectEnd__DelegateSignature
struct ABP_InspectableAbstract_C_InspectEnd__DelegateSignature_Params
{
};

// Function BP_InspectableAbstract.BP_InspectableAbstract_C.InspectStart__DelegateSignature
struct ABP_InspectableAbstract_C_InspectStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
