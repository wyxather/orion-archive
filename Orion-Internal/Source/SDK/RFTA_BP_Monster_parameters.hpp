#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Monster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Monster.BP_Monster_C.CanUseItem
struct ABP_Monster_C_CanUseItem_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Monster.BP_Monster_C.EvaluatePlayerTargetSwitch
struct ABP_Monster_C_EvaluatePlayerTargetSwitch_Params
{
	struct FName*                                      EventRegionNameID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             TargetSwitchCooldownMin;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             TargetSwitchCooldownMax;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.CleanupSpawns
struct ABP_Monster_C_CleanupSpawns_Params
{
	bool*                                              Kill;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Monster.BP_Monster_C.SpawnCharacter
struct ABP_Monster_C_SpawnCharacter_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	class UClass**                                     ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpawnActorCollisionHandlingMethod*                CollisionHandling;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      SpawnState;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              AddThreat;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float*                                             ThreatAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           AsCharacter_Gunfire;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.GetEncounterMan
struct ABP_Monster_C_GetEncounterMan_Params
{
	class UEncounterManager*                           EncounterManager;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.DoEncounter
struct ABP_Monster_C_DoEncounter_Params
{
	class USpawnTable**                                SpawnTable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      SpawnTag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              SetOwnerAsTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UEncounterInstance*                          EncounterInstance;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.RunAway
struct ABP_Monster_C_RunAway_Params
{
};

// Function BP_Monster.BP_Monster_C.Death Stingers
struct ABP_Monster_C_Death_Stingers_Params
{
};

// Function BP_Monster.BP_Monster_C.OnRep_InCombat
struct ABP_Monster_C_OnRep_InCombat_Params
{
};

// Function BP_Monster.BP_Monster_C.SpawnMinions
struct ABP_Monster_C_SpawnMinions_Params
{
};

// Function BP_Monster.BP_Monster_C.GenerateModifier
struct ABP_Monster_C_GenerateModifier_Params
{
	struct FName*                                      Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.SetupModifiers
struct ABP_Monster_C_SetupModifiers_Params
{
};

// Function BP_Monster.BP_Monster_C.DropLoot
struct ABP_Monster_C_DropLoot_Params
{
};

// Function BP_Monster.BP_Monster_C.OnFailure_2FFB5FF44E28076CA52495AF9F4E4361
struct ABP_Monster_C_OnFailure_2FFB5FF44E28076CA52495AF9F4E4361_Params
{
	EGfeSDKReturnCode*                                 GfeSdkReturnCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.OnSuccess_2FFB5FF44E28076CA52495AF9F4E4361
struct ABP_Monster_C_OnSuccess_2FFB5FF44E28076CA52495AF9F4E4361_Params
{
	EGfeSDKReturnCode*                                 GfeSdkReturnCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.OnFailure_79E717164DB60DC5A8B19EAF4871DCA8
struct ABP_Monster_C_OnFailure_79E717164DB60DC5A8B19EAF4871DCA8_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.OnSuccess_79E717164DB60DC5A8B19EAF4871DCA8
struct ABP_Monster_C_OnSuccess_79E717164DB60DC5A8B19EAF4871DCA8_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.OnShadowPlay
struct ABP_Monster_C_OnShadowPlay_Params
{
	bool*                                              ShadowPlay;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Monster.BP_Monster_C.OnBeginReadyWeapon
struct ABP_Monster_C_OnBeginReadyWeapon_Params
{
};

// Function BP_Monster.BP_Monster_C.MultiCast_OnBeginReadyWeapon
struct ABP_Monster_C_MultiCast_OnBeginReadyWeapon_Params
{
};

// Function BP_Monster.BP_Monster_C.OnAlert
struct ABP_Monster_C_OnAlert_Params
{
};

// Function BP_Monster.BP_Monster_C.MulticastAlert
struct ABP_Monster_C_MulticastAlert_Params
{
};

// Function BP_Monster.BP_Monster_C.CombatEnter
struct ABP_Monster_C_CombatEnter_Params
{
};

// Function BP_Monster.BP_Monster_C.CombatExit
struct ABP_Monster_C_CombatExit_Params
{
};

// Function BP_Monster.BP_Monster_C.ReceiveBeginPlay
struct ABP_Monster_C_ReceiveBeginPlay_Params
{
};

// Function BP_Monster.BP_Monster_C.OnDead_Event_2
struct ABP_Monster_C_OnDead_Event_2_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.DisableCollision
struct ABP_Monster_C_DisableCollision_Params
{
};

// Function BP_Monster.BP_Monster_C.EnableCollision
struct ABP_Monster_C_EnableCollision_Params
{
};

// Function BP_Monster.BP_Monster_C.OnVaultOver_Begin
struct ABP_Monster_C_OnVaultOver_Begin_Params
{
};

// Function BP_Monster.BP_Monster_C.OnVaultOver_End
struct ABP_Monster_C_OnVaultOver_End_Params
{
};

// Function BP_Monster.BP_Monster_C.BndEvt__WindowCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Monster_C_BndEvt__WindowCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Monster.BP_Monster_C.OnRunAway
struct ABP_Monster_C_OnRunAway_Params
{
};

// Function BP_Monster.BP_Monster_C.UseItem
struct ABP_Monster_C_UseItem_Params
{
	class APlayerControllerGunfire**                   PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_Monster.BP_Monster_C.ExecuteUbergraph_BP_Monster
struct ABP_Monster_C_ExecuteUbergraph_BP_Monster_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
