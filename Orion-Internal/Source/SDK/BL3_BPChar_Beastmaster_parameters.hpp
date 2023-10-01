#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Beastmaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.TryForceSpawnPetAtLocation
struct ABPChar_Beastmaster_C_TryForceSpawnPetAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetCurrentPet
struct ABPChar_Beastmaster_C_GetCurrentPet_Params
{
	class AOakCharacter*                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetHeadMesh
struct ABPChar_Beastmaster_C_GetHeadMesh_Params
{
	class USkeletalMesh*                               HeadMesh;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.SetupCallResponse
struct ABPChar_Beastmaster_C_SetupCallResponse_Params
{
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetPet
struct ABPChar_Beastmaster_C_GetPet_Params
{
	class AOakCharacter*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetPrimaryActionAbility
struct ABPChar_Beastmaster_C_GetPrimaryActionAbility_Params
{
	class UOakActionAbility*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.UserConstructionScript
struct ABPChar_Beastmaster_C_UserConstructionScript_Params
{
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnDialogSequenceFinished_3
struct ABPChar_Beastmaster_C_OnDialogSequenceFinished_3_Params
{
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.SetNewPetThreatScale
struct ABPChar_Beastmaster_C_SetNewPetThreatScale_Params
{
	float                                              NewScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.PlayPetAudioCallAndResponse
struct ABPChar_Beastmaster_C_PlayPetAudioCallAndResponse_Params
{
	TEnumAsByte<Enum_BeastmasterDialogAction>          DialogType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnInventoryPickedUp
struct ABPChar_Beastmaster_C_OnInventoryPickedUp_Params
{
	class AActor**                                     PickedUpActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.ReceiveBeginPlay
struct ABPChar_Beastmaster_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.HideBackpack
struct ABPChar_Beastmaster_C_HideBackpack_Params
{
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.ShowBackpack
struct ABPChar_Beastmaster_C_ShowBackpack_Params
{
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnResourceNowFilled_AttackCommand
struct ABPChar_Beastmaster_C_OnResourceNowFilled_AttackCommand_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_Beastmaster.BPChar_Beastmaster_C.ExecuteUbergraph_BPChar_Beastmaster
struct ABPChar_Beastmaster_C_ExecuteUbergraph_BPChar_Beastmaster_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
