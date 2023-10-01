#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TinkPile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TinkPile.BP_TinkPile_C.UserConstructionScript
struct ABP_TinkPile_C_UserConstructionScript_Params
{
};

// Function BP_TinkPile.BP_TinkPile_C.TinkPile_MyUserEnteredPile
struct ABP_TinkPile_C_TinkPile_MyUserEnteredPile_Params
{
	TEnumAsByte<Enum_TinkBuildSelection>               WhatToBuild;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TinkPile.BP_TinkPile_C.TinkPile_MyUserBuiltObject
struct ABP_TinkPile_C_TinkPile_MyUserBuiltObject_Params
{
};

// Function BP_TinkPile.BP_TinkPile_C.BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_0_SpawnEvent__DelegateSignature_BP_TinkPile
struct ABP_TinkPile_C_BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_0_SpawnEvent__DelegateSignature_BP_TinkPile_Params
{
	class USpawnerComponent*                           SpawnerComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TinkPile.BP_TinkPile_C.BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_1_SpawnEvent__DelegateSignature_BP_TinkPile
struct ABP_TinkPile_C_BndEvt__SpawnerComponent_K2Node_ComponentBoundEvent_1_SpawnEvent__DelegateSignature_BP_TinkPile_Params
{
	class USpawnerComponent*                           SpawnerComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TinkPile.BP_TinkPile_C.TinkPile_MyUserExitedPile
struct ABP_TinkPile_C_TinkPile_MyUserExitedPile_Params
{
};

// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_GoonInteract_Begin
struct ABP_TinkPile_C_SmartObject_TinkPile_GoonInteract_Begin_Params
{
	class APawn*                                       User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_GoonInteract_Interrupt
struct ABP_TinkPile_C_SmartObject_TinkPile_GoonInteract_Interrupt_Params
{
	class APawn*                                       User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_GoonInteract_Success
struct ABP_TinkPile_C_SmartObject_TinkPile_GoonInteract_Success_Params
{
	class APawn*                                       User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TinkPile.BP_TinkPile_C.OnTinkPileUseStarted
struct ABP_TinkPile_C_OnTinkPileUseStarted_Params
{
};

// Function BP_TinkPile.BP_TinkPile_C.OnTinkPileUseFinished
struct ABP_TinkPile_C_OnTinkPileUseFinished_Params
{
};

// Function BP_TinkPile.BP_TinkPile_C.TinkPile_EnablePile
struct ABP_TinkPile_C_TinkPile_EnablePile_Params
{
};

// Function BP_TinkPile.BP_TinkPile_C.TinkPIle_DisablePile
struct ABP_TinkPile_C_TinkPIle_DisablePile_Params
{
};

// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_ApeInteract_Begin
struct ABP_TinkPile_C_SmartObject_TinkPile_ApeInteract_Begin_Params
{
	class APawn*                                       User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_ApeInteract_Success
struct ABP_TinkPile_C_SmartObject_TinkPile_ApeInteract_Success_Params
{
	class APawn*                                       User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TinkPile.BP_TinkPile_C.SmartObject_TinkPile_ApeInteract_Interrupt
struct ABP_TinkPile_C_SmartObject_TinkPile_ApeInteract_Interrupt_Params
{
	class APawn*                                       User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TinkPile.BP_TinkPile_C.ExecuteUbergraph_BP_TinkPile
struct ABP_TinkPile_C_ExecuteUbergraph_BP_TinkPile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
