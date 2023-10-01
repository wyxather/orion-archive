#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Fusebox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interactive_Fusebox.Interactive_Fusebox_C.HasFuseInFusebox
struct AInteractive_Fusebox_C_HasFuseInFusebox_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.CanUseItem
struct AInteractive_Fusebox_C_CanUseItem_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.OnRep_HasFuse
struct AInteractive_Fusebox_C_OnRep_HasFuse_Params
{
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.UpdateTriggerObjects
struct AInteractive_Fusebox_C_UpdateTriggerObjects_Params
{
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.UpdateState
struct AInteractive_Fusebox_C_UpdateState_Params
{
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.UseItem
struct AInteractive_Fusebox_C_UseItem_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.DelayedUpdateTriggerObjects
struct AInteractive_Fusebox_C_DelayedUpdateTriggerObjects_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.OnTurnOn
struct AInteractive_Fusebox_C_OnTurnOn_Params
{
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.OnTurnOff
struct AInteractive_Fusebox_C_OnTurnOff_Params
{
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.BndEvt__BP_PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature
struct AInteractive_Fusebox_C_BndEvt__BP_PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.OnInsertFuse
struct AInteractive_Fusebox_C_OnInsertFuse_Params
{
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.ReceiveBeginPlay
struct AInteractive_Fusebox_C_ReceiveBeginPlay_Params
{
};

// Function Interactive_Fusebox.Interactive_Fusebox_C.ExecuteUbergraph_Interactive_Fusebox
struct AInteractive_Fusebox_C_ExecuteUbergraph_Interactive_Fusebox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
