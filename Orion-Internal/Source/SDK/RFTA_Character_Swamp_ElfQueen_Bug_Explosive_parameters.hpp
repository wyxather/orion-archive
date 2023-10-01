#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Swamp_ElfQueen_Bug_Explosive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ReceiveBeginPlay
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ReceiveBeginPlay_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ReceiveTick
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.DoExplosion
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_DoExplosion_Params
{
	bool*                                              ShouldChain;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.BndEvt__ExplosionRadiusInner_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_BndEvt__ExplosionRadiusInner_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.Explode
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_Explode_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ExplodePlayerOnly
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ExplodePlayerOnly_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ShowSpeedMutation
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ShowSpeedMutation_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeStart
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ChargeStart_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeStop
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ChargeStop_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeFastStart
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ChargeFastStart_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeFastStop
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ChargeFastStop_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.DestroySelf
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_DestroySelf_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.Escape
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_Escape_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.OnComputeStats
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_OnComputeStats_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.KilledByPlayer
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_KilledByPlayer_Params
{
};

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_Explosive
struct ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_Explosive_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
