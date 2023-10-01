#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAbilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxAbilities.GbxAbility.OnUnregistered
struct UGbxAbility_OnUnregistered_Params
{
};

// Function GbxAbilities.GbxAbility.OnResumed
struct UGbxAbility_OnResumed_Params
{
};

// Function GbxAbilities.GbxAbility.OnRep_Manager
struct UGbxAbility_OnRep_Manager_Params
{
};

// Function GbxAbilities.GbxAbility.OnRep_AbilityState
struct UGbxAbility_OnRep_AbilityState_Params
{
};

// Function GbxAbilities.GbxAbility.OnRegistered
struct UGbxAbility_OnRegistered_Params
{
};

// Function GbxAbilities.GbxAbility.OnPaused
struct UGbxAbility_OnPaused_Params
{
};

// Function GbxAbilities.GbxAbility.OnForcedRefresh
struct UGbxAbility_OnForcedRefresh_Params
{
};

// Function GbxAbilities.GbxAbility.OnDeactivated
struct UGbxAbility_OnDeactivated_Params
{
};

// Function GbxAbilities.GbxAbility.OnActivated
struct UGbxAbility_OnActivated_Params
{
};

// Function GbxAbilities.GbxAbility.IsReplicated
struct UGbxAbility_IsReplicated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAbilities.GbxAbility.GetAbilityOwner
struct UGbxAbility_GetAbilityOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAbilities.GbxAbility.Client_Deactivate
struct UGbxAbility_Client_Deactivate_Params
{
};

// Function GbxAbilities.GbxAbility.CalculateAbilityState
struct UGbxAbility_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAbilities.GbxAbilityManagerComponent.RemoveAbility
struct UGbxAbilityManagerComponent_RemoveAbility_Params
{
	class UClass*                                      AbilityClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAbilities.GbxAbilityManagerComponent.HasAbility
struct UGbxAbilityManagerComponent_HasAbility_Params
{
	class UClass*                                      AbilityClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAbilities.GbxAbilityManagerComponent.FindAbility
struct UGbxAbilityManagerComponent_FindAbility_Params
{
	class UClass*                                      AbilityClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAbility*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAbilities.GbxAbilityManagerComponent.AddAbility
struct UGbxAbilityManagerComponent_AddAbility_Params
{
	struct FGbxAbilitySpec                             Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UGbxAbility*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterResourcePoolDelegate
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterResourcePoolDelegate_Params
{
	struct FGbxAbilityResourceController_ResourcePoolDelegate Controller;                                               // (Parm, OutParm, ReferenceParm)
	struct FGbxAbilityResourceSpec_ResourcePoolDelegate Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterConditionalDamageModifier
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterConditionalDamageModifier_Params
{
	struct FGbxAbilityResourceController_ConditionalDamageModifier Controller;                                               // (Parm, OutParm, ReferenceParm)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterAbilityDelegate
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterAbilityDelegate_Params
{
	struct FGbxAbilityResourceController_ScriptDelegate Controller;                                               // (Parm, OutParm, ReferenceParm)
	struct FGbxAbilityResourceSpec_ScriptDelegate      Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterResourcePoolDelegate
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterResourcePoolDelegate_Params
{
	struct FGbxAbilityResourceController_ResourcePoolDelegate Controller;                                               // (Parm, OutParm, ReferenceParm)
	struct FGbxAbilityResourceSpec_ResourcePoolDelegate Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterConditionalDamageModifier
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterConditionalDamageModifier_Params
{
	struct FGbxAbilityResourceController_ConditionalDamageModifier Controller;                                               // (Parm, OutParm, ReferenceParm)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterAbilityDelegate
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterAbilityDelegate_Params
{
	struct FGbxAbilityResourceController_ScriptDelegate Controller;                                               // (Parm, OutParm, ReferenceParm)
	struct FGbxAbilityResourceSpec_ScriptDelegate      Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
