#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_Operative_DigiClone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneReference
struct UActionSkill_Operative_DigiClone_C_GetDigiCloneReference_Params
{
	class AActor*                                      Digiclone;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Is DigiClone Active
struct UActionSkill_Operative_DigiClone_C_Is_DigiClone_Active_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetQueryParamsForCloneSwapLocationAttempt
struct UActionSkill_Operative_DigiClone_C_GetQueryParamsForCloneSwapLocationAttempt_Params
{
	int*                                               Attempt;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             Params;                                                   // (Parm, OutParm)
	class AActor*                                      QueryContext;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldStopAbilityOnPawnSlotComponentAttach
struct UActionSkill_Operative_DigiClone_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PlayDigiCloneSpawnFX
struct UActionSkill_Operative_DigiClone_C_PlayDigiCloneSpawnFX_Params
{
	class ABPChar_DigiClone_Base_C*                    NewClone;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PayDigiCloneSpawnCost
struct UActionSkill_Operative_DigiClone_C_PayDigiCloneSpawnCost_Params
{
	int                                                GrenadeSpawnCost;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneGrenadeSpawnCost
struct UActionSkill_Operative_DigiClone_C_GetDigiCloneGrenadeSpawnCost_Params
{
	int                                                res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigicloneClass
struct UActionSkill_Operative_DigiClone_C_GetDigicloneClass_Params
{
	int                                                GrenadeSpawnCost;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.DoBurst
struct UActionSkill_Operative_DigiClone_C_DoBurst_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.TryJustAcceptRefund
struct UActionSkill_Operative_DigiClone_C_TryJustAcceptRefund_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SpawnNewDigiclone
struct UActionSkill_Operative_DigiClone_C_SpawnNewDigiclone_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AOakCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartDistractionPrinciple
struct UActionSkill_Operative_DigiClone_C_StartDistractionPrinciple_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldAbortActivation
struct UActionSkill_Operative_DigiClone_C_ShouldAbortActivation_Params
{
	unsigned char                                      OutAbortCode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetCooldownRestartPercent
struct UActionSkill_Operative_DigiClone_C_GetCooldownRestartPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Add Swap Places Modifier
struct UActionSkill_Operative_DigiClone_C_Add_Swap_Places_Modifier_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Corsican
struct UActionSkill_Operative_DigiClone_C_Corsican_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnStartActionAbility
struct UActionSkill_Operative_DigiClone_C_OnStartActionAbility_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SwapPlaces
struct UActionSkill_Operative_DigiClone_C_SwapPlaces_Params
{
	ECloneSwapReason*                                  Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ReleaseDigiclone
struct UActionSkill_Operative_DigiClone_C_ReleaseDigiclone_Params
{
	class AOakCharacter**                              Digiclone;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCorsicanDamage
struct UActionSkill_Operative_DigiClone_C_OnCorsicanDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.BeginDetonateClone
struct UActionSkill_Operative_DigiClone_C_BeginDetonateClone_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.CancelDetonateClone
struct UActionSkill_Operative_DigiClone_C_CancelDetonateClone_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.NotifyPanicButtonTriggered
struct UActionSkill_Operative_DigiClone_C_NotifyPanicButtonTriggered_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Just Accept It Timer Done
struct UActionSkill_Operative_DigiClone_C_Just_Accept_It_Timer_Done_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapStarted
struct UActionSkill_Operative_DigiClone_C_OnCloneSwapStarted_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapStarted
struct UActionSkill_Operative_DigiClone_C_OnPlayerSwapStarted_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapSucceeded
struct UActionSkill_Operative_DigiClone_C_OnPlayerSwapSucceeded_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartSeperationAnxietyNova
struct UActionSkill_Operative_DigiClone_C_StartSeperationAnxietyNova_Params
{
	struct FVector                                     Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapSucceeded
struct UActionSkill_Operative_DigiClone_C_OnCloneSwapSucceeded_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapFailed
struct UActionSkill_Operative_DigiClone_C_OnPlayerSwapFailed_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapFailed
struct UActionSkill_Operative_DigiClone_C_OnCloneSwapFailed_Params
{
};

// Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ExecuteUbergraph_ActionSkill_Operative_DigiClone
struct UActionSkill_Operative_DigiClone_C_ExecuteUbergraph_ActionSkill_Operative_DigiClone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
