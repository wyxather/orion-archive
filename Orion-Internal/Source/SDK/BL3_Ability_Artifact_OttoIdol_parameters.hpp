#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_OttoIdol_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.Ammo Return
struct UAbility_Artifact_OttoIdol_C_Ammo_Return_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.OnActivated
struct UAbility_Artifact_OttoIdol_C_OnActivated_Params
{
};

// Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.KilledEnemy
struct UAbility_Artifact_OttoIdol_C_KilledEnemy_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.ExecuteUbergraph_Ability_Artifact_OttoIdol
struct UAbility_Artifact_OttoIdol_C_ExecuteUbergraph_Ability_Artifact_OttoIdol_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
