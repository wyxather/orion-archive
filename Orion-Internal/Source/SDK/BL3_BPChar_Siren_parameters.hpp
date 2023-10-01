#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Siren_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Siren.BPChar_Siren_C.GetSoulSapProjectile
struct ABPChar_Siren_C_GetSoulSapProjectile_Params
{
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.GetStillnessOfMindControlledMove
struct ABPChar_Siren_C_GetStillnessOfMindControlledMove_Params
{
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.SirenHasAscendantSkill
struct ABPChar_Siren_C_SirenHasAscendantSkill_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.GetSirenGhostArmsComponent
struct ABPChar_Siren_C_GetSirenGhostArmsComponent_Params
{
	class UGbxSkeletalMeshComponent*                   _3rd_Person_Mesh;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   _1st_Person_Mesh;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.GetPhaseCastProjectileComponents
struct ABPChar_Siren_C_GetPhaseCastProjectileComponents_Params
{
	class USkeletalMeshComponent*                      Body;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Head;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      GhostArms;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.GetSirenArmsReference
struct ABPChar_Siren_C_GetSirenArmsReference_Params
{
	class UGbxSkeletalMeshComponent*                   Skel_Mesh_3rd;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Skel_Mesh_1st;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.GetPhaseTranceAbility
struct ABPChar_Siren_C_GetPhaseTranceAbility_Params
{
	class UOakActionAbility_PhaseTrance*               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.GetHeadMesh
struct ABPChar_Siren_C_GetHeadMesh_Params
{
	class USkeletalMesh*                               HeadMesh;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.GetPrimaryActionAbility
struct ABPChar_Siren_C_GetPrimaryActionAbility_Params
{
	class UOakActionAbility*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.UserConstructionScript
struct ABPChar_Siren_C_UserConstructionScript_Params
{
};

// Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__FinishedFunc
struct ABPChar_Siren_C_FadeArms3rd__FinishedFunc_Params
{
};

// Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__UpdateFunc
struct ABPChar_Siren_C_FadeArms3rd__UpdateFunc_Params
{
};

// Function BPChar_Siren.BPChar_Siren_C.TattooFlare__FinishedFunc
struct ABPChar_Siren_C_TattooFlare__FinishedFunc_Params
{
};

// Function BPChar_Siren.BPChar_Siren_C.TattooFlare__UpdateFunc
struct ABPChar_Siren_C_TattooFlare__UpdateFunc_Params
{
};

// Function BPChar_Siren.BPChar_Siren_C.SetArmsMaterial
struct ABPChar_Siren_C_SetArmsMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.Play3rdPersonArmFade
struct ABPChar_Siren_C_Play3rdPersonArmFade_Params
{
	bool                                               bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.PlayTattooFade
struct ABPChar_Siren_C_PlayTattooFade_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.SetArmsElement
struct ABPChar_Siren_C_SetArmsElement_Params
{
	EPhaseTranceElementalType                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.HandleInstant3rdPersonArmFade
struct ABPChar_Siren_C_HandleInstant3rdPersonArmFade_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.Handle3rdPersonArmFadeTransition
struct ABPChar_Siren_C_Handle3rdPersonArmFadeTransition_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren
struct ABPChar_Siren_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_Siren.BPChar_Siren_C.ReceiveBeginPlay
struct ABPChar_Siren_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Siren.BPChar_Siren_C.InterruptArmFade
struct ABPChar_Siren_C_InterruptArmFade_Params
{
};

// Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren
struct ABPChar_Siren_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPChar_Siren.BPChar_Siren_C.PhasegraspEndedAndEnemyKilled
struct ABPChar_Siren_C_PhasegraspEndedAndEnemyKilled_Params
{
	bool                                               Killed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Siren.BPChar_Siren_C.ExecuteUbergraph_BPChar_Siren
struct ABPChar_Siren_C_ExecuteUbergraph_BPChar_Siren_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
