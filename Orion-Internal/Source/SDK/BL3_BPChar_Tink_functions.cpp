// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Tink.BPChar_Tink_C.Tink_GetElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              CurrentElement                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Tink_GetElement(EOakElementalType* CurrentElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_GetElement");

	ABPChar_Tink_C_Tink_GetElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentElement != nullptr)
		*CurrentElement = params.CurrentElement;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_GetMyDamageCauser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WhoDamagedTink                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Tink_GetMyDamageCauser(class AActor** WhoDamagedTink)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_GetMyDamageCauser");

	ABPChar_Tink_C_Tink_GetMyDamageCauser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WhoDamagedTink != nullptr)
		*WhoDamagedTink = params.WhoDamagedTink;
}


// Function BPChar_Tink.BPChar_Tink_C.Get_TinkIsFlying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TinkIsFlying                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Get_TinkIsFlying(bool* TinkIsFlying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Get_TinkIsFlying");

	ABPChar_Tink_C_Get_TinkIsFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TinkIsFlying != nullptr)
		*TinkIsFlying = params.TinkIsFlying;
}


// Function BPChar_Tink.BPChar_Tink_C.Get_TinkMyAttachedTo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WhatIsTinkAttachedTo           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Get_TinkMyAttachedTo(class AActor** WhatIsTinkAttachedTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Get_TinkMyAttachedTo");

	ABPChar_Tink_C_Get_TinkMyAttachedTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WhatIsTinkAttachedTo != nullptr)
		*WhatIsTinkAttachedTo = params.WhatIsTinkAttachedTo;
}


// Function BPChar_Tink.BPChar_Tink_C.Get_TinkIsAttached
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TinkAttachedState              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Get_TinkIsAttached(bool* TinkAttachedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Get_TinkIsAttached");

	ABPChar_Tink_C_Get_TinkIsAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TinkAttachedState != nullptr)
		*TinkAttachedState = params.TinkAttachedState;
}


// Function BPChar_Tink.BPChar_Tink_C.Get_TinkWhatToBuild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_TinkBuildSelection> WhatShouldTheTinkBuild         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Get_TinkWhatToBuild(TEnumAsByte<Enum_TinkBuildSelection>* WhatShouldTheTinkBuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Get_TinkWhatToBuild");

	ABPChar_Tink_C_Get_TinkWhatToBuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WhatShouldTheTinkBuild != nullptr)
		*WhatShouldTheTinkBuild = params.WhatShouldTheTinkBuild;
}


// Function BPChar_Tink.BPChar_Tink_C.Get_TinkMeleeWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TinkMeleeWeapon                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Get_TinkMeleeWeapon(class AActor** TinkMeleeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Get_TinkMeleeWeapon");

	ABPChar_Tink_C_Get_TinkMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TinkMeleeWeapon != nullptr)
		*TinkMeleeWeapon = params.TinkMeleeWeapon;
}


// Function BPChar_Tink.BPChar_Tink_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.UserConstructionScript");

	ABPChar_Tink_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Event_TinkHasDied
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Event_TinkHasDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Event_TinkHasDied");

	ABPChar_Tink_C_Event_TinkHasDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_CheerGoon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_CheerGoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_CheerGoon");

	ABPChar_Tink_C_Tink_CheerGoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_ForceMountToDetachRider
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_ForceMountToDetachRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_ForceMountToDetachRider");

	ABPChar_Tink_C_Tink_ForceMountToDetachRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_HasBeenPhaseLocked
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_HasBeenPhaseLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_HasBeenPhaseLocked");

	ABPChar_Tink_C_Tink_HasBeenPhaseLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_MeleeWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_MeleeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_MeleeWeapon");

	ABPChar_Tink_C_Tink_MeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_Explosive
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_Explosive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_Explosive");

	ABPChar_Tink_C_Tink_Explosive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_Mourn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WhoToMourn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Tink_Mourn(class AActor* WhoToMourn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_Mourn");

	ABPChar_Tink_C_Tink_Mourn_Params params;
	params.WhoToMourn = WhoToMourn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_BallTinkSpawned
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_BallTinkSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_BallTinkSpawned");

	ABPChar_Tink_C_Tink_BallTinkSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_SetGoonChildMati
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      GoonTinkMati                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Tink_SetGoonChildMati(class UMaterialInterface* GoonTinkMati)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_SetGoonChildMati");

	ABPChar_Tink_C_Tink_SetGoonChildMati_Params params;
	params.GoonTinkMati = GoonTinkMati;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.TinkBaddass_StartMeleeConvert
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::TinkBaddass_StartMeleeConvert()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.TinkBaddass_StartMeleeConvert");

	ABPChar_Tink_C_TinkBaddass_StartMeleeConvert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_TinkPileXform
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_TinkPileXform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_TinkPileXform");

	ABPChar_Tink_C_Tink_TinkPileXform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_StartGyroCannonAttack
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_StartGyroCannonAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_StartGyroCannonAttack");

	ABPChar_Tink_C_Tink_StartGyroCannonAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_SetNewWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 WeaponToPass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Tink_SetNewWeapon(class AWeapon* WeaponToPass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_SetNewWeapon");

	ABPChar_Tink_C_Tink_SetNewWeapon_Params params;
	params.WeaponToPass = WeaponToPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_SetTinkBallAnimInstance
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_SetTinkBallAnimInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_SetTinkBallAnimInstance");

	ABPChar_Tink_C_Tink_SetTinkBallAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_Anointed_Death
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_Anointed_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_Anointed_Death");

	ABPChar_Tink_C_Tink_Anointed_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_SuicideBombDetonated
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_SuicideBombDetonated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_SuicideBombDetonated");

	ABPChar_Tink_C_Tink_SuicideBombDetonated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_TargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Tink_TargetChanged(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_TargetChanged");

	ABPChar_Tink_C_Tink_TargetChanged_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_VomitStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_VomitStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_VomitStart");

	ABPChar_Tink_C_Tink_VomitStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_VomitStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_VomitStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_VomitStop");

	ABPChar_Tink_C_Tink_VomitStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_StartSuicideAttempt
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_StartSuicideAttempt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_StartSuicideAttempt");

	ABPChar_Tink_C_Tink_StartSuicideAttempt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Set_TinkIsAttached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TinkAttachedState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Set_TinkIsAttached(bool TinkAttachedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Set_TinkIsAttached");

	ABPChar_Tink_C_Set_TinkIsAttached_Params params;
	params.TinkAttachedState = TinkAttachedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Set_TinkMyAttachedTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WhatIsTinkAttachedTo           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Set_TinkMyAttachedTo(class AActor* WhatIsTinkAttachedTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Set_TinkMyAttachedTo");

	ABPChar_Tink_C_Set_TinkMyAttachedTo_Params params;
	params.WhatIsTinkAttachedTo = WhatIsTinkAttachedTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.TinkDetachFromMount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEjected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPChar_Tink_C::TinkDetachFromMount(bool bEjected, class AActor* DamageCauser, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.TinkDetachFromMount");

	ABPChar_Tink_C_TinkDetachFromMount_Params params;
	params.bEjected = bEjected;
	params.DamageCauser = DamageCauser;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_ShowWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_ShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_ShowWeapon");

	ABPChar_Tink_C_Tink_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_HideWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_HideWeapon");

	ABPChar_Tink_C_Tink_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.StopTinkDetachMetro
// (BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::StopTinkDetachMetro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.StopTinkDetachMetro");

	ABPChar_Tink_C_StopTinkDetachMetro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Tink_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.ReceiveBeginPlay");

	ABPChar_Tink_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Tink_Basic
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Tink_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Tink_Basic(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Tink_Basic");

	ABPChar_Tink_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Tink_Basic_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_6_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_6_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_6_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink");

	ABPChar_Tink_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_6_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.ExecuteUbergraph_BPChar_Tink
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::ExecuteUbergraph_BPChar_Tink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.ExecuteUbergraph_BPChar_Tink");

	ABPChar_Tink_C_ExecuteUbergraph_BPChar_Tink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_HackedInTinkPileUseCooldown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPChar_Tink_C::Tink_HackedInTinkPileUseCooldown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_HackedInTinkPileUseCooldown__DelegateSignature");

	ABPChar_Tink_C_Tink_HackedInTinkPileUseCooldown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Tink.BPChar_Tink_C.Tink_SetSmartObjectReference__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CurrentSmartObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Tink_C::Tink_SetSmartObjectReference__DelegateSignature(class AActor* CurrentSmartObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Tink.BPChar_Tink_C.Tink_SetSmartObjectReference__DelegateSignature");

	ABPChar_Tink_C_Tink_SetSmartObjectReference__DelegateSignature_Params params;
	params.CurrentSmartObject = CurrentSmartObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
