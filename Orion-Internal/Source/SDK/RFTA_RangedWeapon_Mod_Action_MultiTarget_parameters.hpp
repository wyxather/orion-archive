#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RangedWeapon_Mod_Action_MultiTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ValidateArc
struct ARangedWeapon_Mod_Action_MultiTarget_C_ValidateArc_Params
{
	class ACharacterGunfire**                          Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.RemoveProjectile
struct ARangedWeapon_Mod_Action_MultiTarget_C_RemoveProjectile_Params
{
	class AActor**                                     Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.AddProjectile
struct ARangedWeapon_Mod_Action_MultiTarget_C_AddProjectile_Params
{
	class AActor**                                     ForTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ContainsValidProjectile
struct ARangedWeapon_Mod_Action_MultiTarget_C_ContainsValidProjectile_Params
{
	struct FMod_MultiTarget_PendingTarget              Entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ValidateCachedTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_ValidateCachedTargets_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnUpdatePendingTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnUpdatePendingTargets_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnRep_PendingTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnRep_PendingTargets_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.GetDrawTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_GetDrawTargets_Params
{
	TArray<class AActor*>                              Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ClearInvalidTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_ClearInvalidTargets_Params
{
	bool*                                              RemoveUnfiredProjectiles;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.DrawIndicators
struct ARangedWeapon_Mod_Action_MultiTarget_C_DrawIndicators_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.AddPendingTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_AddPendingTargets_Params
{
	TArray<class AActor*>                              Targets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.CalculateClientAimVector
struct ARangedWeapon_Mod_Action_MultiTarget_C_CalculateClientAimVector_Params
{
	struct FVector                                     AimOrigin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     AimEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.PickTarget
struct ARangedWeapon_Mod_Action_MultiTarget_C_PickTarget_Params
{
	TArray<struct FWeightedTargetEntry>                PotentialTargets;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.GetCurrentTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_GetCurrentTargets_Params
{
	bool*                                              AllowCached;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.SelectTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_SelectTargets_Params
{
	TArray<struct FWeightedTargetEntry>                PotentialTargets;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.CreateIndicator
struct ARangedWeapon_Mod_Action_MultiTarget_C_CreateIndicator_Params
{
	class AActor*                                      NewIndicator;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ClearIndicator
struct ARangedWeapon_Mod_Action_MultiTarget_C_ClearIndicator_Params
{
	class AActor**                                     Indicator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.MoveIndicatorToTarget
struct ARangedWeapon_Mod_Action_MultiTarget_C_MoveIndicatorToTarget_Params
{
	class AActor**                                     Indicator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.WeighTarget
struct ARangedWeapon_Mod_Action_MultiTarget_C_WeighTarget_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ClearPreviewIndicators
struct ARangedWeapon_Mod_Action_MultiTarget_C_ClearPreviewIndicators_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.UpdatePreviewIndicators
struct ARangedWeapon_Mod_Action_MultiTarget_C_UpdatePreviewIndicators_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.FindTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_FindTargets_Params
{
	TArray<struct FWeightedTargetEntry>                Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnPreviewStart
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnPreviewStart_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnPreviewEnd
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnPreviewEnd_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.PreviewLoop
struct ARangedWeapon_Mod_Action_MultiTarget_C_PreviewLoop_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.UpdateTargets
struct ARangedWeapon_Mod_Action_MultiTarget_C_UpdateTargets_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnAttached
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnAttached_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnDetached
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnDetached_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ReceiveTick
struct ARangedWeapon_Mod_Action_MultiTarget_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnBeginUse
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnBeginUse_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnEndUse
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnEndUse_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnActivate
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnActivate_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.CustomEvent
struct ARangedWeapon_Mod_Action_MultiTarget_C_CustomEvent_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.OnDeactivate
struct ARangedWeapon_Mod_Action_MultiTarget_C_OnDeactivate_Params
{
};

// Function RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C.ExecuteUbergraph_RangedWeapon_Mod_Action_MultiTarget
struct ARangedWeapon_Mod_Action_MultiTarget_C_ExecuteUbergraph_RangedWeapon_Mod_Action_MultiTarget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
