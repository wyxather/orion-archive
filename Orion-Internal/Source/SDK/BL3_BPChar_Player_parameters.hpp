#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Player.BPChar_Player_C.GetTransfusionSpawnEndLocation
struct ABPChar_Player_C_GetTransfusionSpawnEndLocation_Params
{
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.GetLevelUpFXAttachComponent
struct ABPChar_Player_C_GetLevelUpFXAttachComponent_Params
{
	class USceneComponent*                             res;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.PlayLevelUpFX
struct ABPChar_Player_C_PlayLevelUpFX_Params
{
};

// Function BPChar_Player.BPChar_Player_C.GroundSlamEnd
struct ABPChar_Player_C_GroundSlamEnd_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.BackupFriendlyTargeting
struct ABPChar_Player_C_BackupFriendlyTargeting_Params
{
};

// Function BPChar_Player.BPChar_Player_C.GetHeadMesh
struct ABPChar_Player_C_GetHeadMesh_Params
{
	class USkeletalMesh*                               HeadMesh;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.ClearTargetingTimers
struct ABPChar_Player_C_ClearTargetingTimers_Params
{
};

// Function BPChar_Player.BPChar_Player_C.PreInventoryItemPickupCheck
struct ABPChar_Player_C_PreInventoryItemPickupCheck_Params
{
	class AActor**                                     PickupActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UsedByInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AInventoryItemPickup**                       WorldPickupActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.UserConstructionScript
struct ABPChar_Player_C_UserConstructionScript_Params
{
};

// Function BPChar_Player.BPChar_Player_C.Player_HealthDepleted
struct ABPChar_Player_C_Player_HealthDepleted_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStart
struct ABPChar_Player_C_Enemy_OnPhaseLockStart_Params
{
};

// Function BPChar_Player.BPChar_Player_C.Enemy_OnPhaseLockStop
struct ABPChar_Player_C_Enemy_OnPhaseLockStop_Params
{
};

// Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStart
struct ABPChar_Player_C_Enemy_OnThoughtLockStart_Params
{
};

// Function BPChar_Player.BPChar_Player_C.Enemy_OnThoughtLockStop
struct ABPChar_Player_C_Enemy_OnThoughtLockStop_Params
{
};

// Function BPChar_Player.BPChar_Player_C.SetMissionDebugText
struct ABPChar_Player_C_SetMissionDebugText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TextSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               FacePlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.OnInventoryEquipped
struct ABPChar_Player_C_OnInventoryEquipped_Params
{
	class AActor*                                      InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.OnInventoryUnequipped
struct ABPChar_Player_C_OnInventoryUnequipped_Params
{
	class AActor*                                      InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.OnInventoryPickedUp
struct ABPChar_Player_C_OnInventoryPickedUp_Params
{
	class AActor*                                      PickedUpActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.DoMelee
struct ABPChar_Player_C_DoMelee_Params
{
};

// Function BPChar_Player.BPChar_Player_C.ReceiveBeginPlay
struct ABPChar_Player_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Player.BPChar_Player_C.ReceiveTick
struct ABPChar_Player_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.OnJumped
struct ABPChar_Player_C_OnJumped_Params
{
};

// Function BPChar_Player.BPChar_Player_C.OnLanded
struct ABPChar_Player_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player
struct ABPChar_Player_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.GroundSlam_End
struct ABPChar_Player_C_GroundSlam_End_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player
struct ABPChar_Player_C_BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player_Params
{
};

// Function BPChar_Player.BPChar_Player_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player
struct ABPChar_Player_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPChar_Player.BPChar_Player_C.Multikill Reset
struct ABPChar_Player_C_Multikill_Reset_Params
{
};

// Function BPChar_Player.BPChar_Player_C.Player_LevelUp
struct ABPChar_Player_C_Player_LevelUp_Params
{
	int                                                Old_XP_Level;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                New_XP_Level;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player
struct ABPChar_Player_C_BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player_Params
{
	int                                                OldExperienceLevel;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewExperienceLevel;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.Player_SpawnTransfusionProjectile
struct ABPChar_Player_C_Player_SpawnTransfusionProjectile_Params
{
	class UClass*                                      DataBlueprint__Override_;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType__Override_;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer__Override_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.StartZeroG
struct ABPChar_Player_C_StartZeroG_Params
{
};

// Function BPChar_Player.BPChar_Player_C.EndZeroG
struct ABPChar_Player_C_EndZeroG_Params
{
};

// Function BPChar_Player.BPChar_Player_C.ServerStartZeroG
struct ABPChar_Player_C_ServerStartZeroG_Params
{
};

// Function BPChar_Player.BPChar_Player_C.ExecuteUbergraph_BPChar_Player
struct ABPChar_Player_C_ExecuteUbergraph_BPChar_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Player.BPChar_Player_C.GroundSlam__DelegateSignature
struct ABPChar_Player_C_GroundSlam__DelegateSignature_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
