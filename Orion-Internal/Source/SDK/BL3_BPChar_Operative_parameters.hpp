#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Operative_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Operative.BPChar_Operative_C.CanActivateTrapCard
struct ABPChar_Operative_C_CanActivateTrapCard_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.GetBarrierActionAbility
struct ABPChar_Operative_C_GetBarrierActionAbility_Params
{
	class UOakActionAbility_Barrier*                   res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.GetOperativeStatusEffectOverrides
struct ABPChar_Operative_C_GetOperativeStatusEffectOverrides_Params
{
	struct FCauseDamageStatusEffectOverrides           Overrides;                                                // (Parm, OutParm)
};

// Function BPChar_Operative.BPChar_Operative_C.GetOperativeShieldRemainingPercent
struct ABPChar_Operative_C_GetOperativeShieldRemainingPercent_Params
{
	float                                              ShieldPercentRemaining;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.GetDigiCloneShieldRemainingPercent
struct ABPChar_Operative_C_GetDigiCloneShieldRemainingPercent_Params
{
	float                                              ShieldPercentRemaining;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.GetGRMLNActionAbility
struct ABPChar_Operative_C_GetGRMLNActionAbility_Params
{
	class UOakActionAbility_GRMLN*                     res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.GetDigicloneActionAbility
struct ABPChar_Operative_C_GetDigicloneActionAbility_Params
{
	class UOakActionAbility_Digiclone*                 res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.SpawnAndThrowOperativeGrenade
struct ABPChar_Operative_C_SpawnAndThrowOperativeGrenade_Params
{
	class AActor*                                      SpawnFromActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnFromSocket;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Grenade;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.BlockOperativeActionSkillActivation
struct ABPChar_Operative_C_BlockOperativeActionSkillActivation_Params
{
	bool                                               ShouldBlock;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.GetDroneSpawnLocation
struct ABPChar_Operative_C_GetDroneSpawnLocation_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Head
struct ABPChar_Operative_C_Get_Skeletal_Mesh_Head_Params
{
	class UGbxSkeletalMeshComponent*                   Head_Mesh;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Arms
struct ABPChar_Operative_C_Get_Skeletal_Mesh_Arms_Params
{
	class USkeletalMeshComponent*                      Arms_Mesh;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Legs
struct ABPChar_Operative_C_Get_Skeletal_Mesh_Legs_Params
{
	class UGbxSkeletalMeshComponent*                   Legs;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh
struct ABPChar_Operative_C_Get_Skeletal_Mesh_Params
{
	class USkeletalMeshComponent*                      Skeletal_Mesh;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Materials Head
struct ABPChar_Operative_C_Get_Materials_Head_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Materials Arms
struct ABPChar_Operative_C_Get_Materials_Arms_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Materials Legs
struct ABPChar_Operative_C_Get_Materials_Legs_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Materials Skeletal Mesh
struct ABPChar_Operative_C_Get_Materials_Skeletal_Mesh_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Materials FP Gun
struct ABPChar_Operative_C_Get_Materials_FP_Gun_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPChar_Operative.BPChar_Operative_C.Get Materials TP Gun
struct ABPChar_Operative_C_Get_Materials_TP_Gun_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPChar_Operative.BPChar_Operative_C.GetHeadMesh
struct ABPChar_Operative_C_GetHeadMesh_Params
{
	class USkeletalMesh*                               HeadMesh;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.InnerDoCryoNovaAtLocation
struct ABPChar_Operative_C_InnerDoCryoNovaAtLocation_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDamage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.GetSecondaryActionAbility
struct ABPChar_Operative_C_GetSecondaryActionAbility_Params
{
	class UOakActionAbility*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.GetPrimaryActionAbility
struct ABPChar_Operative_C_GetPrimaryActionAbility_Params
{
	class UOakActionAbility*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.UserConstructionScript
struct ABPChar_Operative_C_UserConstructionScript_Params
{
};

// Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__FinishedFunc
struct ABPChar_Operative_C_DigistructSNTRY__FinishedFunc_Params
{
};

// Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__UpdateFunc
struct ABPChar_Operative_C_DigistructSNTRY__UpdateFunc_Params
{
};

// Function BPChar_Operative.BPChar_Operative_C.PlayerOperativeDroneSpawnAnimation
struct ABPChar_Operative_C_PlayerOperativeDroneSpawnAnimation_Params
{
};

// Function BPChar_Operative.BPChar_Operative_C.HideOperativeDroneSpawnAnimation
struct ABPChar_Operative_C_HideOperativeDroneSpawnAnimation_Params
{
};

// Function BPChar_Operative.BPChar_Operative_C.DoOperativeCryoNovaAtLocation
struct ABPChar_Operative_C_DoOperativeCryoNovaAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.SetOperativeDeviceVisible
struct ABPChar_Operative_C_SetOperativeDeviceVisible_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.SpawnCannonEmitterMulticast
struct ABPChar_Operative_C_SpawnCannonEmitterMulticast_Params
{
	class UParticleSystem*                             CannonEmitter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      CannonComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Operative.BPChar_Operative_C.ExecuteUbergraph_BPChar_Operative
struct ABPChar_Operative_C_ExecuteUbergraph_BPChar_Operative_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
