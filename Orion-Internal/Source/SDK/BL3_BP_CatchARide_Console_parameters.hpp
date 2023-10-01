#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_Console_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CatchARide_Console.BP_CatchARide_Console_C.UserConstructionScript
struct ABP_CatchARide_Console_C_UserConstructionScript_Params
{
};

// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnNewBodyEquipped
struct ABP_CatchARide_Console_C_OnNewBodyEquipped_Params
{
	class UOakCARVehicleData**                         VehicleData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnNewPartEquipped
struct ABP_CatchARide_Console_C_OnNewPartEquipped_Params
{
	ECARPartType*                                      PartType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOakCARVehiclePartData**                     PartData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnVehicleDeployedFromMenu
struct ABP_CatchARide_Console_C_OnVehicleDeployedFromMenu_Params
{
};

// Function BP_CatchARide_Console.BP_CatchARide_Console_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_CatchARide_Console
struct ABP_CatchARide_Console_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_CatchARide_Console_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnIStateInteractive
struct ABP_CatchARide_Console_C_OnIStateInteractive_Params
{
};

// Function BP_CatchARide_Console.BP_CatchARide_Console_C.OnIStateNonInteractive
struct ABP_CatchARide_Console_C_OnIStateNonInteractive_Params
{
};

// Function BP_CatchARide_Console.BP_CatchARide_Console_C.ExecuteUbergraph_BP_CatchARide_Console
struct ABP_CatchARide_Console_C_ExecuteUbergraph_BP_CatchARide_Console_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
