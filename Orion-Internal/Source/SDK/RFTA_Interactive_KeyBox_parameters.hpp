#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_KeyBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interactive_KeyBox.Interactive_KeyBox_C.CanUseItem
struct AInteractive_KeyBox_C_CanUseItem_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.NotifyTriggerObjects
struct AInteractive_KeyBox_C_NotifyTriggerObjects_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.OnRep_Locked
struct AInteractive_KeyBox_C_OnRep_Locked_Params
{
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.UpdateVisuals
struct AInteractive_KeyBox_C_UpdateVisuals_Params
{
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.ReceiveBeginPlay
struct AInteractive_KeyBox_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.OnCharacterEvent
struct AInteractive_KeyBox_C_OnCharacterEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.UseItem
struct AInteractive_KeyBox_C_UseItem_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_4_InteractiveDelegate__DelegateSignature
struct AInteractive_KeyBox_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_4_InteractiveDelegate__DelegateSignature_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.OnReset
struct AInteractive_KeyBox_C_OnReset_Params
{
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.ExecuteUbergraph_Interactive_KeyBox
struct AInteractive_KeyBox_C_ExecuteUbergraph_Interactive_KeyBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_KeyBox.Interactive_KeyBox_C.Key Used__DelegateSignature
struct AInteractive_KeyBox_C_Key_Used__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
