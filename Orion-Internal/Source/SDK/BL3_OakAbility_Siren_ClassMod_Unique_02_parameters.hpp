#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_02_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectQuicken
struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectQuicken_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.CalculateAbilityState
struct UOakAbility_Siren_ClassMod_Unique_02_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.CheckAscendant
struct UOakAbility_Siren_ClassMod_Unique_02_C_CheckAscendant_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.FindNearbyEnemies
struct UOakAbility_Siren_ClassMod_Unique_02_C_FindNearbyEnemies_Params
{
	TArray<class AActor*>                              Targets;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.FindNearbyPlayer
struct UOakAbility_Siren_ClassMod_Unique_02_C_FindNearbyPlayer_Params
{
	class AActor*                                      Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectStillnessofMind
struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectStillnessofMind_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectBrightStar
struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectBrightStar_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectGlamour
struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectGlamour_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectSoulSap
struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectSoulSap_Params
{
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.DoEffectAllure
struct UOakAbility_Siren_ClassMod_Unique_02_C_DoEffectAllure_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.OnActivated
struct UOakAbility_Siren_ClassMod_Unique_02_C_OnActivated_Params
{
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.OnCausedDeath
struct UOakAbility_Siren_ClassMod_Unique_02_C_OnCausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OakAbility_Siren_ClassMod_Unique_02.OakAbility_Siren_ClassMod_Unique_02_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_02
struct UOakAbility_Siren_ClassMod_Unique_02_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_02_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
