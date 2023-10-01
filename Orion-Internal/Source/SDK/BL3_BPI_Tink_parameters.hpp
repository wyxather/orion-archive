#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Tink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Tink.BPI_Tink_C.Tink_StartSuicideAttempt
struct UBPI_Tink_C_Tink_StartSuicideAttempt_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Tink_VomitStop
struct UBPI_Tink_C_Tink_VomitStop_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Tink_VomitStart
struct UBPI_Tink_C_Tink_VomitStart_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Tink_TargetChanged
struct UBPI_Tink_C_Tink_TargetChanged_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_SuicideBombDetonated
struct UBPI_Tink_C_Tink_SuicideBombDetonated_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Tink_Anointed_Death
struct UBPI_Tink_C_Tink_Anointed_Death_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Tink_GetElement
struct UBPI_Tink_C_Tink_GetElement_Params
{
	EOakElementalType                                  CurrentElement;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_SetTinkBallAnimInstance
struct UBPI_Tink_C_Tink_SetTinkBallAnimInstance_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Tink_GetMyDamageCauser
struct UBPI_Tink_C_Tink_GetMyDamageCauser_Params
{
	class AActor*                                      WhoDamagedTink;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_SetNewWeapon
struct UBPI_Tink_C_Tink_SetNewWeapon_Params
{
	class AWeapon*                                     WeaponToPass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_StartGyroCannonAttack
struct UBPI_Tink_C_Tink_StartGyroCannonAttack_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Get_TinkIsFlying
struct UBPI_Tink_C_Get_TinkIsFlying_Params
{
	bool                                               TinkIsFlying;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_TinkPileXform
struct UBPI_Tink_C_Tink_TinkPileXform_Params
{
};

// Function BPI_Tink.BPI_Tink_C.TinkBaddass_StartMeleeConvert
struct UBPI_Tink_C_TinkBaddass_StartMeleeConvert_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Get_TinkMyAttachedTo
struct UBPI_Tink_C_Get_TinkMyAttachedTo_Params
{
	class AActor*                                      WhatIsTinkAttachedTo;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_SetGoonChildMati
struct UBPI_Tink_C_Tink_SetGoonChildMati_Params
{
	class UMaterialInterface*                          GoonTinkMati;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Get_TinkIsAttached
struct UBPI_Tink_C_Get_TinkIsAttached_Params
{
	bool                                               TinkAttachedState;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_BallTinkSpawned
struct UBPI_Tink_C_Tink_BallTinkSpawned_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Tink_Mourn
struct UBPI_Tink_C_Tink_Mourn_Params
{
	class AActor*                                      WhoToMourn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_Explosive
struct UBPI_Tink_C_Tink_Explosive_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Get_TinkWhatToBuild
struct UBPI_Tink_C_Get_TinkWhatToBuild_Params
{
	TEnumAsByte<Enum_TinkBuildSelection>               WhatShouldTheTinkBuild;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_HideWeapon
struct UBPI_Tink_C_Tink_HideWeapon_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Tink_ShowWeapon
struct UBPI_Tink_C_Tink_ShowWeapon_Params
{
};

// Function BPI_Tink.BPI_Tink_C.Get_TinkMeleeWeapon
struct UBPI_Tink_C_Get_TinkMeleeWeapon_Params
{
	class AActor*                                      TinkMeleeWeapon;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Tink_MeleeWeapon
struct UBPI_Tink_C_Tink_MeleeWeapon_Params
{
};

// Function BPI_Tink.BPI_Tink_C.TinkDetachFromMount
struct UBPI_Tink_C_TinkDetachFromMount_Params
{
	bool                                               bEjected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Set_TinkIsAttached
struct UBPI_Tink_C_Set_TinkIsAttached_Params
{
	bool                                               TinkAttachedState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Tink.BPI_Tink_C.Set_TinkMyAttachedTo
struct UBPI_Tink_C_Set_TinkMyAttachedTo_Params
{
	class AActor*                                      WhatIsTinkAttachedTo;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
