#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPBeastmasterComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.ValidateCurrentPetAugment
struct UBPBeastmasterComponent_C_ValidateCurrentPetAugment_Params
{
	class UOakPlayerCharacterAugmentData_Pet**         PetAugment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetCooldownRefundPercent
struct UBPBeastmasterComponent_C_GetPetCooldownRefundPercent_Params
{
	EPetRespawnCooldownRefundType*                     RefundType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetFallbackPetSpawnLocation
struct UBPBeastmasterComponent_C_GetFallbackPetSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.CheckForSpawnCollisions
struct UBPBeastmasterComponent_C_CheckForSpawnCollisions_Params
{
	struct FVector                                     SpawnLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bCollisionsDetected;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetSpawnClass
struct UBPBeastmasterComponent_C_GetPetSpawnClass_Params
{
	class UOakPlayerCharacterAugmentData_Pet*          InAugment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.SpawnNewPet
struct UBPBeastmasterComponent_C_SpawnNewPet_Params
{
	class UOakPlayerCharacterAugmentData_Pet**         PetAugment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SpawnLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AOakCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.OnReleasedPet
struct UBPBeastmasterComponent_C_OnReleasedPet_Params
{
	bool*                                              bForced;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPetReleaseReason*                                 ReleaseReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.ReceiveBeginPlay
struct UBPBeastmasterComponent_C_ReceiveBeginPlay_Params
{
};

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.TryOrderPetAttack
struct UBPBeastmasterComponent_C_TryOrderPetAttack_Params
{
};

// Function BPBeastmasterComponent.BPBeastmasterComponent_C.ExecuteUbergraph_BPBeastmasterComponent
struct UBPBeastmasterComponent_C_ExecuteUbergraph_BPBeastmasterComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
