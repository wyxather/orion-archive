#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachine_Health_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VendingMachine_Health.BP_VendingMachine_Health_C.UserConstructionScript
struct ABP_VendingMachine_Health_C_UserConstructionScript_Params
{
};

// Function BP_VendingMachine_Health.BP_VendingMachine_Health_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Health
struct ABP_VendingMachine_Health_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Health_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_VendingMachine_Health.BP_VendingMachine_Health_C.ExecuteUbergraph_BP_VendingMachine_Health
struct ABP_VendingMachine_Health_C_ExecuteUbergraph_BP_VendingMachine_Health_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
