#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ExplodingObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ExplodingObject.BP_ExplodingObject_C.SetSimulatePhysics
struct ABP_ExplodingObject_C_SetSimulatePhysics_Params
{
	bool                                               bNewSimulate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Damaged
struct ABP_ExplodingObject_C_Damaged_Params
{
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStop
struct ABP_ExplodingObject_C_VisualState_ExplodedStop_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStart
struct ABP_ExplodingObject_C_VisualState_ExplodedStart_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Get_DamageType
struct ABP_ExplodingObject_C_Get_DamageType_Params
{
	TEnumAsByte<Enum_ExplodingObjectDamage>            DamageType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStop
struct ABP_ExplodingObject_C_VisualState_FuseStop_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStart
struct ABP_ExplodingObject_C_VisualState_FuseStart_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.OnRep_DamageType
struct ABP_ExplodingObject_C_OnRep_DamageType_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.ThrowExplodingObject
struct ABP_ExplodingObject_C_ThrowExplodingObject_Params
{
	struct FVector                                     ThrowVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotatorForSpin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     OptionalAdditiveVector;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_ExplodingObject
struct ABP_ExplodingObject_C_Setup_ExplodingObject_Params
{
	class UDA_ExplodingObjectPresentation_C*           NewPresentation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMI;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_RandomizeDamageType
struct ABP_ExplodingObject_C_Setup_RandomizeDamageType_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.UserConstructionScript
struct ABP_ExplodingObject_C_UserConstructionScript_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ResetHealth
struct ABP_ExplodingObject_C_BPI_ResetHealth_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal
struct ABP_ExplodingObject_C_BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_Explode
struct ABP_ExplodingObject_C_BPI_Explode_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ImpulseThrow
struct ABP_ExplodingObject_C_BPI_ImpulseThrow_Params
{
	struct FVector                                     ThrowVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotatorForSpin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              FuseSpeedScale;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditiveVector;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetSimulatePhysics
struct ABP_ExplodingObject_C_BPI_SetSimulatePhysics_Params
{
	bool                                               PhysicsOn_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_StartFuse
struct ABP_ExplodingObject_C_BPI_StartFuse_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.ReceiveBeginPlay
struct ABP_ExplodingObject_C_ReceiveBeginPlay_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_1
struct ABP_ExplodingObject_C___UserState_ExplodingObjectState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_2
struct ABP_ExplodingObject_C___UserState_ExplodingObjectState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_3
struct ABP_ExplodingObject_C___UserState_ExplodingObjectState_3_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_4
struct ABP_ExplodingObject_C___UserState_ExplodingObjectState_4_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject
struct ABP_ExplodingObject_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Damage
struct ABP_ExplodingObject_C_Explode_Damage_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Puddle
struct ABP_ExplodingObject_C_Explode_Puddle_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Cloud
struct ABP_ExplodingObject_C_Explode_Cloud_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Loot
struct ABP_ExplodingObject_C_Explode_Loot_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode
struct ABP_ExplodingObject_C_Explode_Params
{
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject
struct ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject
struct ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetNavPainterEnabled
struct ABP_ExplodingObject_C_BPI_SetNavPainterEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.ExecuteUbergraph_BP_ExplodingObject
struct ABP_ExplodingObject_C_ExecuteUbergraph_BP_ExplodingObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplodingObject.BP_ExplodingObject_C.Exploded__DelegateSignature
struct ABP_ExplodingObject_C_Exploded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
