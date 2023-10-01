// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Tink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Tink.BPI_Tink_C.Tink_StartSuicideAttempt
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_StartSuicideAttempt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_StartSuicideAttempt");

	UBPI_Tink_C_Tink_StartSuicideAttempt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_VomitStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_VomitStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_VomitStop");

	UBPI_Tink_C_Tink_VomitStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_VomitStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_VomitStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_VomitStart");

	UBPI_Tink_C_Tink_VomitStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_TargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Tink_TargetChanged(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_TargetChanged");

	UBPI_Tink_C_Tink_TargetChanged_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_SuicideBombDetonated
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_SuicideBombDetonated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_SuicideBombDetonated");

	UBPI_Tink_C_Tink_SuicideBombDetonated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_Anointed_Death
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_Anointed_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_Anointed_Death");

	UBPI_Tink_C_Tink_Anointed_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_GetElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              CurrentElement                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Tink_GetElement(EOakElementalType* CurrentElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_GetElement");

	UBPI_Tink_C_Tink_GetElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentElement != nullptr)
		*CurrentElement = params.CurrentElement;
}


// Function BPI_Tink.BPI_Tink_C.Tink_SetTinkBallAnimInstance
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_SetTinkBallAnimInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_SetTinkBallAnimInstance");

	UBPI_Tink_C_Tink_SetTinkBallAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_GetMyDamageCauser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WhoDamagedTink                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Tink_GetMyDamageCauser(class AActor** WhoDamagedTink)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_GetMyDamageCauser");

	UBPI_Tink_C_Tink_GetMyDamageCauser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WhoDamagedTink != nullptr)
		*WhoDamagedTink = params.WhoDamagedTink;
}


// Function BPI_Tink.BPI_Tink_C.Tink_SetNewWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 WeaponToPass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Tink_SetNewWeapon(class AWeapon* WeaponToPass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_SetNewWeapon");

	UBPI_Tink_C_Tink_SetNewWeapon_Params params;
	params.WeaponToPass = WeaponToPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_StartGyroCannonAttack
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_StartGyroCannonAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_StartGyroCannonAttack");

	UBPI_Tink_C_Tink_StartGyroCannonAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Get_TinkIsFlying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TinkIsFlying                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Get_TinkIsFlying(bool* TinkIsFlying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Get_TinkIsFlying");

	UBPI_Tink_C_Get_TinkIsFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TinkIsFlying != nullptr)
		*TinkIsFlying = params.TinkIsFlying;
}


// Function BPI_Tink.BPI_Tink_C.Tink_TinkPileXform
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_TinkPileXform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_TinkPileXform");

	UBPI_Tink_C_Tink_TinkPileXform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.TinkBaddass_StartMeleeConvert
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::TinkBaddass_StartMeleeConvert()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.TinkBaddass_StartMeleeConvert");

	UBPI_Tink_C_TinkBaddass_StartMeleeConvert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Get_TinkMyAttachedTo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WhatIsTinkAttachedTo           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Get_TinkMyAttachedTo(class AActor** WhatIsTinkAttachedTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Get_TinkMyAttachedTo");

	UBPI_Tink_C_Get_TinkMyAttachedTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WhatIsTinkAttachedTo != nullptr)
		*WhatIsTinkAttachedTo = params.WhatIsTinkAttachedTo;
}


// Function BPI_Tink.BPI_Tink_C.Tink_SetGoonChildMati
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      GoonTinkMati                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Tink_SetGoonChildMati(class UMaterialInterface* GoonTinkMati)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_SetGoonChildMati");

	UBPI_Tink_C_Tink_SetGoonChildMati_Params params;
	params.GoonTinkMati = GoonTinkMati;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Get_TinkIsAttached
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TinkAttachedState              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Get_TinkIsAttached(bool* TinkAttachedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Get_TinkIsAttached");

	UBPI_Tink_C_Get_TinkIsAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TinkAttachedState != nullptr)
		*TinkAttachedState = params.TinkAttachedState;
}


// Function BPI_Tink.BPI_Tink_C.Tink_BallTinkSpawned
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_BallTinkSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_BallTinkSpawned");

	UBPI_Tink_C_Tink_BallTinkSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_Mourn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WhoToMourn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Tink_Mourn(class AActor* WhoToMourn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_Mourn");

	UBPI_Tink_C_Tink_Mourn_Params params;
	params.WhoToMourn = WhoToMourn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_Explosive
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_Explosive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_Explosive");

	UBPI_Tink_C_Tink_Explosive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Get_TinkWhatToBuild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_TinkBuildSelection> WhatShouldTheTinkBuild         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Get_TinkWhatToBuild(TEnumAsByte<Enum_TinkBuildSelection>* WhatShouldTheTinkBuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Get_TinkWhatToBuild");

	UBPI_Tink_C_Get_TinkWhatToBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WhatShouldTheTinkBuild != nullptr)
		*WhatShouldTheTinkBuild = params.WhatShouldTheTinkBuild;
}


// Function BPI_Tink.BPI_Tink_C.Tink_HideWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_HideWeapon");

	UBPI_Tink_C_Tink_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Tink_ShowWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_ShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_ShowWeapon");

	UBPI_Tink_C_Tink_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Get_TinkMeleeWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TinkMeleeWeapon                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Get_TinkMeleeWeapon(class AActor** TinkMeleeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Get_TinkMeleeWeapon");

	UBPI_Tink_C_Get_TinkMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TinkMeleeWeapon != nullptr)
		*TinkMeleeWeapon = params.TinkMeleeWeapon;
}


// Function BPI_Tink.BPI_Tink_C.Tink_MeleeWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Tink_C::Tink_MeleeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Tink_MeleeWeapon");

	UBPI_Tink_C_Tink_MeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.TinkDetachFromMount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEjected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPI_Tink_C::TinkDetachFromMount(bool bEjected, class AActor* DamageCauser, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.TinkDetachFromMount");

	UBPI_Tink_C_TinkDetachFromMount_Params params;
	params.bEjected = bEjected;
	params.DamageCauser = DamageCauser;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Set_TinkIsAttached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TinkAttachedState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Set_TinkIsAttached(bool TinkAttachedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Set_TinkIsAttached");

	UBPI_Tink_C_Set_TinkIsAttached_Params params;
	params.TinkAttachedState = TinkAttachedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Tink.BPI_Tink_C.Set_TinkMyAttachedTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WhatIsTinkAttachedTo           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Tink_C::Set_TinkMyAttachedTo(class AActor* WhatIsTinkAttachedTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Tink.BPI_Tink_C.Set_TinkMyAttachedTo");

	UBPI_Tink_C_Set_TinkMyAttachedTo_Params params;
	params.WhatIsTinkAttachedTo = WhatIsTinkAttachedTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
