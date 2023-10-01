#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Siren_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IBPChar_Siren.IBPChar_Siren_C.GetSoulSapProjectile
struct UIBPChar_Siren_C_GetSoulSapProjectile_Params
{
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.GetStillnessOfMindControlledMove
struct UIBPChar_Siren_C_GetStillnessOfMindControlledMove_Params
{
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.SirenHasAscendantSkill
struct UIBPChar_Siren_C_SirenHasAscendantSkill_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.GetSirenGhostArmsComponent
struct UIBPChar_Siren_C_GetSirenGhostArmsComponent_Params
{
	class UGbxSkeletalMeshComponent*                   _3rd_Person_Mesh;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   _1st_Person_Mesh;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.SetArmsElement
struct UIBPChar_Siren_C_SetArmsElement_Params
{
	EPhaseTranceElementalType                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.PlayTattooFade
struct UIBPChar_Siren_C_PlayTattooFade_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.SetArmsMaterial
struct UIBPChar_Siren_C_SetArmsMaterial_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.Play3rdPersonArmFade
struct UIBPChar_Siren_C_Play3rdPersonArmFade_Params
{
	bool                                               bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseCastProjectileComponents
struct UIBPChar_Siren_C_GetPhaseCastProjectileComponents_Params
{
	class USkeletalMeshComponent*                      Body;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Head;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      GhostArms;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.GetSirenArmsReference
struct UIBPChar_Siren_C_GetSirenArmsReference_Params
{
	class UGbxSkeletalMeshComponent*                   Skel_Mesh_3rd;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Skel_Mesh_1st;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseTranceAbility
struct UIBPChar_Siren_C_GetPhaseTranceAbility_Params
{
	class UOakActionAbility_PhaseTrance*               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
