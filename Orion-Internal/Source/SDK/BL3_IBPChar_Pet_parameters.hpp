#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Pet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IBPChar_Pet.IBPChar_Pet_C.GetPetJabberIngenuityBarrel
struct UIBPChar_Pet_C_GetPetJabberIngenuityBarrel_Params
{
	class AActor*                                      Barrel;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetSucceededRevive
struct UIBPChar_Pet_C_PetSucceededRevive_Params
{
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelDrop
struct UIBPChar_Pet_C_PetJabbermon_BarrelDrop_Params
{
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelThrow
struct UIBPChar_Pet_C_PetJabbermon_BarrelThrow_Params
{
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelSet
struct UIBPChar_Pet_C_PetJabbermon_BarrelSet_Params
{
	class AActor*                                      NewBarrel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelAlign
struct UIBPChar_Pet_C_PetJabbermon_BarrelAlign_Params
{
	class AActor*                                      NewBarrel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.SetEnraged
struct UIBPChar_Pet_C_SetEnraged_Params
{
	bool                                               bIsEnraged;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.GetPetEvolutionType
struct UIBPChar_Pet_C_GetPetEvolutionType_Params
{
	EOakActionAbilityPetEvolutionType                  EvolutionType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.DoAttackCommand
struct UIBPChar_Pet_C_DoAttackCommand_Params
{
	class UObject*                                     EnemyObject;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.BeginAttackCommand
struct UIBPChar_Pet_C_BeginAttackCommand_Params
{
};

// Function IBPChar_Pet.IBPChar_Pet_C.GetPetType
struct UIBPChar_Pet_C_GetPetType_Params
{
	EOakActionAbilityPetType                           PetType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_FireRocket
struct UIBPChar_Pet_C_PetJabbermon_FireRocket_Params
{
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeLauncherVis
struct UIBPChar_Pet_C_PetJabbermon_ChangeLauncherVis_Params
{
	bool                                               NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeGunVis
struct UIBPChar_Pet_C_PetJabbermon_ChangeGunVis_Params
{
	bool                                               NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Hide
struct UIBPChar_Pet_C_PetJabbermon_Poop_Hide_Params
{
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Show
struct UIBPChar_Pet_C_PetJabbermon_Poop_Show_Params
{
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeMeleeVis
struct UIBPChar_Pet_C_PetJabbermon_ChangeMeleeVis_Params
{
	bool                                               NewWeapVisibility;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.OnPetReleased
struct UIBPChar_Pet_C_OnPetReleased_Params
{
	bool                                               bForced;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPetReleaseReason                                  Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.MatchesPetProfile
struct UIBPChar_Pet_C_MatchesPetProfile_Params
{
	class UOakPlayerCharacterAugmentData_Pet*          InAugment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IBPChar_Pet.IBPChar_Pet_C.PetSpawnTrapProjectile
struct UIBPChar_Pet_C_PetSpawnTrapProjectile_Params
{
};

// Function IBPChar_Pet.IBPChar_Pet_C.GetBeastmasterOwner
struct UIBPChar_Pet_C_GetBeastmasterOwner_Params
{
	class AOakCharacter_Player*                        Beastmaster;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
