#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPSirenCharacterComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.GetPhaseFlareSpawnLocation
struct UBPSirenCharacterComponent_C_GetPhaseFlareSpawnLocation_Params
{
	struct FVector                                     res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseFlareSpawnLocation
struct UBPSirenCharacterComponent_C_SetPhaseFlareSpawnLocation_Params
{
	struct FVector                                     Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.Start3rdPersonArmFade
struct UBPSirenCharacterComponent_C_Start3rdPersonArmFade_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartTattoFade
struct UBPSirenCharacterComponent_C_StartTattoFade_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetArmElement
struct UBPSirenCharacterComponent_C_SetArmElement_Params
{
	EPhaseTranceElementalType*                         NewElement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartArmMaterialInstanceFade
struct UBPSirenCharacterComponent_C_StartArmMaterialInstanceFade_Params
{
	class UMaterialInstance**                          NewInstance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ReceiveBeginPlay
struct UBPSirenCharacterComponent_C_ReceiveBeginPlay_Params
{
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnActionSkillActivated
struct UBPSirenCharacterComponent_C_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnRushEventHappened
struct UBPSirenCharacterComponent_C_OnRushEventHappened_Params
{
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseCastMeshActive
struct UBPSirenCharacterComponent_C_SetPhaseCastMeshActive_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ExecuteUbergraph_BPSirenCharacterComponent
struct UBPSirenCharacterComponent_C_ExecuteUbergraph_BPSirenCharacterComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
