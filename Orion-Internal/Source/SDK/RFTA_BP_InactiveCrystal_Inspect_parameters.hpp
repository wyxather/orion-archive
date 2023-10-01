#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_InactiveCrystal_Inspect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.ValidToInspect
struct ABP_InactiveCrystal_Inspect_C_ValidToInspect_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.Set Crystal
struct ABP_InactiveCrystal_Inspect_C_Set_Crystal_Params
{
	class AActor**                                     Dragon_Crystal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature
struct ABP_InactiveCrystal_Inspect_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InactiveCrystal_Inspect.BP_InactiveCrystal_Inspect_C.ExecuteUbergraph_BP_InactiveCrystal_Inspect
struct ABP_InactiveCrystal_Inspect_C_ExecuteUbergraph_BP_InactiveCrystal_Inspect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
