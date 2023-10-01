#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_Operative_Character_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interface_Operative_Character.Interface_Operative_Character_C.CanActivateTrapCard
struct UInterface_Operative_Character_C_CanActivateTrapCard_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.SetOperativeDeviceVisible
struct UInterface_Operative_Character_C_SetOperativeDeviceVisible_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.GetBarrierActionAbility
struct UInterface_Operative_Character_C_GetBarrierActionAbility_Params
{
	class UOakActionAbility_Barrier*                   res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeStatusEffectOverrides
struct UInterface_Operative_Character_C_GetOperativeStatusEffectOverrides_Params
{
	struct FCauseDamageStatusEffectOverrides           Overrides;                                                // (Parm, OutParm)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigiCloneShieldRemainingPercent
struct UInterface_Operative_Character_C_GetDigiCloneShieldRemainingPercent_Params
{
	float                                              ShieldPercentRemaining;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeShieldRemainingPercent
struct UInterface_Operative_Character_C_GetOperativeShieldRemainingPercent_Params
{
	float                                              ShieldPercentRemaining;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.GetGRMLNActionAbility
struct UInterface_Operative_Character_C_GetGRMLNActionAbility_Params
{
	class UOakActionAbility_GRMLN*                     res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigicloneActionAbility
struct UInterface_Operative_Character_C_GetDigicloneActionAbility_Params
{
	class UOakActionAbility_Digiclone*                 res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.SpawnAndThrowOperativeGrenade
struct UInterface_Operative_Character_C_SpawnAndThrowOperativeGrenade_Params
{
	class AActor*                                      SpawnFromActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnFromSocket;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Grenade;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.DoOperativeCryoNovaAtLocation
struct UInterface_Operative_Character_C_DoOperativeCryoNovaAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.BlockOperativeActionSkillActivation
struct UInterface_Operative_Character_C_BlockOperativeActionSkillActivation_Params
{
	bool                                               ShouldBlock;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.GetDroneSpawnLocation
struct UInterface_Operative_Character_C_GetDroneSpawnLocation_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.HideOperativeDroneSpawnAnimation
struct UInterface_Operative_Character_C_HideOperativeDroneSpawnAnimation_Params
{
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.PlayerOperativeDroneSpawnAnimation
struct UInterface_Operative_Character_C_PlayerOperativeDroneSpawnAnimation_Params
{
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials TP Gun
struct UInterface_Operative_Character_C_Get_Materials_TP_Gun_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials FP Gun
struct UInterface_Operative_Character_C_Get_Materials_FP_Gun_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Skeletal Mesh
struct UInterface_Operative_Character_C_Get_Materials_Skeletal_Mesh_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Legs
struct UInterface_Operative_Character_C_Get_Materials_Legs_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Arms
struct UInterface_Operative_Character_C_Get_Materials_Arms_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Head
struct UInterface_Operative_Character_C_Get_Materials_Head_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh
struct UInterface_Operative_Character_C_Get_Skeletal_Mesh_Params
{
	class USkeletalMeshComponent*                      Skeletal_Mesh;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Legs
struct UInterface_Operative_Character_C_Get_Skeletal_Mesh_Legs_Params
{
	class UGbxSkeletalMeshComponent*                   Legs;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Arms
struct UInterface_Operative_Character_C_Get_Skeletal_Mesh_Arms_Params
{
	class USkeletalMeshComponent*                      Arms_Mesh;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Head
struct UInterface_Operative_Character_C_Get_Skeletal_Mesh_Head_Params
{
	class UGbxSkeletalMeshComponent*                   Head_Mesh;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
