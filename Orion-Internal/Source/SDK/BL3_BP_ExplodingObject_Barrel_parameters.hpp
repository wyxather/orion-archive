#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ExplodingObject_Barrel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.GetPullScale
struct ABP_ExplodingObject_Barrel_C_GetPullScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnRep_bSingularityGrabbed
struct ABP_ExplodingObject_Barrel_C_OnRep_bSingularityGrabbed_Params
{
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Setup_ExplodingObject
struct ABP_ExplodingObject_Barrel_C_Setup_ExplodingObject_Params
{
	class UDA_ExplodingObjectPresentation_C**          NewPresentation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMI;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Barrel_SetupMaterialParams
struct ABP_ExplodingObject_Barrel_C_Barrel_SetupMaterialParams_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UTexture*                                    CompTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    NormalTexture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.UserConstructionScript
struct ABP_ExplodingObject_Barrel_C_UserConstructionScript_Params
{
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_NPC_Kick_Begin
struct ABP_ExplodingObject_Barrel_C_SmartObject_NPC_Kick_Begin_Params
{
	class APawn*                                       User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_Barrel_GoonInteract_Success
struct ABP_ExplodingObject_Barrel_C_SmartObject_Barrel_GoonInteract_Success_Params
{
	class APawn*                                       User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerKickBarrel
struct ABP_ExplodingObject_Barrel_C_PlayerKickBarrel_Params
{
	class ACharacter*                                  Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerButtSlamBarrel
struct ABP_ExplodingObject_Barrel_C_PlayerButtSlamBarrel_Params
{
	class ACharacter*                                  Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerMeleeBarrel
struct ABP_ExplodingObject_Barrel_C_PlayerMeleeBarrel_Params
{
	class ACharacter*                                  Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Damaged
struct ABP_ExplodingObject_Barrel_C_Damaged_Params
{
	class UGbxDamageType**                             DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource**                              DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel
struct ABP_ExplodingObject_Barrel_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullBegin
struct ABP_ExplodingObject_Barrel_C_OnSingularityPullBegin_Params
{
	class USingularityComponent*                       SingularityComponent;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullEnd
struct ABP_ExplodingObject_Barrel_C_OnSingularityPullEnd_Params
{
	class USingularityComponent*                       SingularityComponent;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Explode_Damage
struct ABP_ExplodingObject_Barrel_C_Explode_Damage_Params
{
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.IronBearFisted
struct ABP_ExplodingObject_Barrel_C_IronBearFisted_Params
{
	class ACharacter*                                  Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ReceiveBeginPlay
struct ABP_ExplodingObject_Barrel_C_ReceiveBeginPlay_Params
{
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.DEBUG_PrematureExplosion
struct ABP_ExplodingObject_Barrel_C_DEBUG_PrematureExplosion_Params
{
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ThrowExplodingObject
struct ABP_ExplodingObject_Barrel_C_ThrowExplodingObject_Params
{
	struct FVector*                                    ThrowVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   RotatorForSpin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    OptionalAdditiveVector;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ExecuteUbergraph_BP_ExplodingObject_Barrel
struct ABP_ExplodingObject_Barrel_C_ExecuteUbergraph_BP_ExplodingObject_Barrel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
