#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionSkill_PetEnrage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ShouldStopAbilityOnPawnSlotComponentAttach
struct UActionSkill_PetEnrage_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.CalculateAbilityState
struct UActionSkill_PetEnrage_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetActionRegisters
struct UActionSkill_PetEnrage_C_GetActionRegisters_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<struct FGbxActionRegister>                  res;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetCooldownRestartPercent
struct UActionSkill_PetEnrage_C_GetCooldownRestartPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GetMaxCooldownModifier
struct UActionSkill_PetEnrage_C_GetMaxCooldownModifier_Params
{
	EGbxAttributeModifierType                          ModifierType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A
struct UActionSkill_PetEnrage_C_GbxAsyncRequest_Miss_6ABA4D30415493C4454273ADF8C3540A_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A
struct UActionSkill_PetEnrage_C_GbxAsyncRequest_Hit_6ABA4D30415493C4454273ADF8C3540A_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStartActionAbility
struct UActionSkill_PetEnrage_C_OnStartActionAbility_Params
{
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.FindTargetLocationAsync
struct UActionSkill_PetEnrage_C_FindTargetLocationAsync_Params
{
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.LocationQueryComplete
struct UActionSkill_PetEnrage_C_LocationQueryComplete_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.OnStopActionAbility
struct UActionSkill_PetEnrage_C_OnStopActionAbility_Params
{
};

// Function ActionSkill_PetEnrage.ActionSkill_PetEnrage_C.ExecuteUbergraph_ActionSkill_PetEnrage
struct UActionSkill_PetEnrage_C_ExecuteUbergraph_ActionSkill_PetEnrage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
