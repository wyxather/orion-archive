#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_DigiClone_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Get Owners Grenade Projectile Class
struct ABPChar_DigiClone_Base_C_Get_Owners_Grenade_Projectile_Class_Params
{
	class UClass*                                      Grenade_Projectile_Class;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.HandleTeleportSwapEnd
struct ABPChar_DigiClone_Base_C_HandleTeleportSwapEnd_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.HandleTeleportSwapStart
struct ABPChar_DigiClone_Base_C_HandleTeleportSwapStart_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TrySpawnLevelTwoWeapon
struct ABPChar_DigiClone_Base_C_TrySpawnLevelTwoWeapon_Params
{
	class AWeapon*                                     res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ConfigureMinMax
struct ABPChar_DigiClone_Base_C_ConfigureMinMax_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnRep_bIsNotUsingMummersWeapon
struct ABPChar_DigiClone_Base_C_OnRep_bIsNotUsingMummersWeapon_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ApplyOperativeWeaponMaterials
struct ABPChar_DigiClone_Base_C_ApplyOperativeWeaponMaterials_Params
{
	class AWeapon*                                     Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureTrapCard
struct ABPChar_DigiClone_Base_C_TryConfigureTrapCard_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ConfigureShield
struct ABPChar_DigiClone_Base_C_ConfigureShield_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SpawnDefaultWeapon
struct ABPChar_DigiClone_Base_C_SpawnDefaultWeapon_Params
{
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureAbstractGrenades
struct ABPChar_DigiClone_Base_C_TryConfigureAbstractGrenades_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.RemoveProvokeFX
struct ABPChar_DigiClone_Base_C_RemoveProvokeFX_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TryConfigureProvoke
struct ABPChar_DigiClone_Base_C_TryConfigureProvoke_Params
{
	bool                                               Provoke_equiped;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.TrySpawnMummersWeapon
struct ABPChar_DigiClone_Base_C_TrySpawnMummersWeapon_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.GetSizeIncreaseOperand
struct ABPChar_DigiClone_Base_C_GetSizeIncreaseOperand_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.UserConstructionScript
struct ABPChar_DigiClone_Base_C_UserConstructionScript_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ScaleDigiClone__FinishedFunc
struct ABPChar_DigiClone_Base_C_ScaleDigiClone__FinishedFunc_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ScaleDigiClone__UpdateFunc
struct ABPChar_DigiClone_Base_C_ScaleDigiClone__UpdateFunc_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiCloneTimeLine__FinishedFunc
struct ABPChar_DigiClone_Base_C_BlowUpDigiCloneTimeLine__FinishedFunc_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiCloneTimeLine__UpdateFunc
struct ABPChar_DigiClone_Base_C_BlowUpDigiCloneTimeLine__UpdateFunc_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReceiveBeginPlay
struct ABPChar_DigiClone_Base_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPCharParent_DigiClone
struct ABPChar_DigiClone_Base_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPCharParent_DigiClone_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPCharParent_DigiClone
struct ABPChar_DigiClone_Base_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPCharParent_DigiClone_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BeginScalingDigiClone
struct ABPChar_DigiClone_Base_C_BeginScalingDigiClone_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.StopScalingDigiClone
struct ABPChar_DigiClone_Base_C_StopScalingDigiClone_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BlowUpDigiClone
struct ABPChar_DigiClone_Base_C_BlowUpDigiClone_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.KillDigiCloneNow
struct ABPChar_DigiClone_Base_C_KillDigiCloneNow_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReleaseDigiclone
struct ABPChar_DigiClone_Base_C_ReleaseDigiclone_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnDigicloneDied
struct ABPChar_DigiClone_Base_C_OnDigicloneDied_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.DoExplode
struct ABPChar_DigiClone_Base_C_DoExplode_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.AutomagicallyRegisterDamageOverride
struct ABPChar_DigiClone_Base_C_AutomagicallyRegisterDamageOverride_Params
{
	EOakElementalType                                  ElementalType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Grade;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.AutomagicallyRemoveDamageOverride
struct ABPChar_DigiClone_Base_C_AutomagicallyRemoveDamageOverride_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Automagically Deal Bonus Damage
struct ABPChar_DigiClone_Base_C_Automagically_Deal_Bonus_Damage_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.DigiCloneThrowGrenade
struct ABPChar_DigiClone_Base_C_DigiCloneThrowGrenade_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SpawnDigiCloneGrenadeOnDeath
struct ABPChar_DigiClone_Base_C_SpawnDigiCloneGrenadeOnDeath_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.UpdateMaxTeleportRange
struct ABPChar_DigiClone_Base_C_UpdateMaxTeleportRange_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnDigicloneTeleport
struct ABPChar_DigiClone_Base_C_OnDigicloneTeleport_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base
struct ABPChar_DigiClone_Base_C_BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base
struct ABPChar_DigiClone_Base_C_BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryEquipped
struct ABPChar_DigiClone_Base_C_OnInventoryEquipped_Params
{
	class AActor*                                      InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryUnequipped
struct ABPChar_DigiClone_Base_C_OnInventoryUnequipped_Params
{
	class AActor*                                      InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnInventoryPickedUp
struct ABPChar_DigiClone_Base_C_OnInventoryPickedUp_Params
{
	class AActor*                                      PickedUpActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BPCharParent_DigiClone_UNIX1536311531
struct ABPChar_DigiClone_Base_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BPCharParent_DigiClone_UNIX1536311531_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.StartProvoke
struct ABPChar_DigiClone_Base_C_StartProvoke_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.Setup Lives of Others
struct ABPChar_DigiClone_Base_C_Setup_Lives_of_Others_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.BindDelegates
struct ABPChar_DigiClone_Base_C_BindDelegates_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnWeaponEquipped
struct ABPChar_DigiClone_Base_C_OnWeaponEquipped_Params
{
	class AWeapon*                                     DetachedWeapon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     AttachedWeapon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWeaponSlotData*                             AttachedSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OnClientWeaponChanged
struct ABPChar_DigiClone_Base_C_OnClientWeaponChanged_Params
{
	class AWeapon*                                     NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     LastWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.OpenTrapCardGate
struct ABPChar_DigiClone_Base_C_OpenTrapCardGate_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ReceiveEndPlay
struct ABPChar_DigiClone_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.SetIsTeleporting
struct ABPChar_DigiClone_Base_C_SetIsTeleporting_Params
{
	bool                                               bIsTeleporting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.K2_OnMovementModeChanged
struct ABPChar_DigiClone_Base_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.CheckIfStillFalling
struct ABPChar_DigiClone_Base_C_CheckIfStillFalling_Params
{
};

// Function BPChar_DigiClone_Base.BPChar_DigiClone_Base_C.ExecuteUbergraph_BPChar_DigiClone_Base
struct ABPChar_DigiClone_Base_C_ExecuteUbergraph_BPChar_DigiClone_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
