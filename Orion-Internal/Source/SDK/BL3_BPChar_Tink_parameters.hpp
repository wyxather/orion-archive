#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Tink.BPChar_Tink_C.Tink_GetElement
struct ABPChar_Tink_C_Tink_GetElement_Params
{
	EOakElementalType                                  CurrentElement;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_GetMyDamageCauser
struct ABPChar_Tink_C_Tink_GetMyDamageCauser_Params
{
	class AActor*                                      WhoDamagedTink;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Get_TinkIsFlying
struct ABPChar_Tink_C_Get_TinkIsFlying_Params
{
	bool                                               TinkIsFlying;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Get_TinkMyAttachedTo
struct ABPChar_Tink_C_Get_TinkMyAttachedTo_Params
{
	class AActor*                                      WhatIsTinkAttachedTo;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Get_TinkIsAttached
struct ABPChar_Tink_C_Get_TinkIsAttached_Params
{
	bool                                               TinkAttachedState;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Get_TinkWhatToBuild
struct ABPChar_Tink_C_Get_TinkWhatToBuild_Params
{
	TEnumAsByte<Enum_TinkBuildSelection>               WhatShouldTheTinkBuild;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Get_TinkMeleeWeapon
struct ABPChar_Tink_C_Get_TinkMeleeWeapon_Params
{
	class AActor*                                      TinkMeleeWeapon;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.UserConstructionScript
struct ABPChar_Tink_C_UserConstructionScript_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Event_TinkHasDied
struct ABPChar_Tink_C_Event_TinkHasDied_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_CheerGoon
struct ABPChar_Tink_C_Tink_CheerGoon_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_ForceMountToDetachRider
struct ABPChar_Tink_C_Tink_ForceMountToDetachRider_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_HasBeenPhaseLocked
struct ABPChar_Tink_C_Tink_HasBeenPhaseLocked_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_MeleeWeapon
struct ABPChar_Tink_C_Tink_MeleeWeapon_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_Explosive
struct ABPChar_Tink_C_Tink_Explosive_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_Mourn
struct ABPChar_Tink_C_Tink_Mourn_Params
{
	class AActor*                                      WhoToMourn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_BallTinkSpawned
struct ABPChar_Tink_C_Tink_BallTinkSpawned_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_SetGoonChildMati
struct ABPChar_Tink_C_Tink_SetGoonChildMati_Params
{
	class UMaterialInterface*                          GoonTinkMati;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.TinkBaddass_StartMeleeConvert
struct ABPChar_Tink_C_TinkBaddass_StartMeleeConvert_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_TinkPileXform
struct ABPChar_Tink_C_Tink_TinkPileXform_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_StartGyroCannonAttack
struct ABPChar_Tink_C_Tink_StartGyroCannonAttack_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_SetNewWeapon
struct ABPChar_Tink_C_Tink_SetNewWeapon_Params
{
	class AWeapon*                                     WeaponToPass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_SetTinkBallAnimInstance
struct ABPChar_Tink_C_Tink_SetTinkBallAnimInstance_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_Anointed_Death
struct ABPChar_Tink_C_Tink_Anointed_Death_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_SuicideBombDetonated
struct ABPChar_Tink_C_Tink_SuicideBombDetonated_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_TargetChanged
struct ABPChar_Tink_C_Tink_TargetChanged_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_VomitStart
struct ABPChar_Tink_C_Tink_VomitStart_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_VomitStop
struct ABPChar_Tink_C_Tink_VomitStop_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_StartSuicideAttempt
struct ABPChar_Tink_C_Tink_StartSuicideAttempt_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Set_TinkIsAttached
struct ABPChar_Tink_C_Set_TinkIsAttached_Params
{
	bool                                               TinkAttachedState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Set_TinkMyAttachedTo
struct ABPChar_Tink_C_Set_TinkMyAttachedTo_Params
{
	class AActor*                                      WhatIsTinkAttachedTo;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.TinkDetachFromMount
struct ABPChar_Tink_C_TinkDetachFromMount_Params
{
	bool                                               bEjected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_ShowWeapon
struct ABPChar_Tink_C_Tink_ShowWeapon_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_HideWeapon
struct ABPChar_Tink_C_Tink_HideWeapon_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.StopTinkDetachMetro
struct ABPChar_Tink_C_StopTinkDetachMetro_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.ReceiveBeginPlay
struct ABPChar_Tink_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Tink_Basic
struct ABPChar_Tink_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Tink_Basic_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_6_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink
struct ABPChar_Tink_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_6_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.ExecuteUbergraph_BPChar_Tink
struct ABPChar_Tink_C_ExecuteUbergraph_BPChar_Tink_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_HackedInTinkPileUseCooldown__DelegateSignature
struct ABPChar_Tink_C_Tink_HackedInTinkPileUseCooldown__DelegateSignature_Params
{
};

// Function BPChar_Tink.BPChar_Tink_C.Tink_SetSmartObjectReference__DelegateSignature
struct ABPChar_Tink_C_Tink_SetSmartObjectReference__DelegateSignature_Params
{
	class AActor*                                      CurrentSmartObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
