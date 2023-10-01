// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_Pet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IBPChar_Pet.IBPChar_Pet_C.GetPetJabberIngenuityBarrel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Barrel                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::GetPetJabberIngenuityBarrel(class AActor** Barrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.GetPetJabberIngenuityBarrel");

	UIBPChar_Pet_C_GetPetJabberIngenuityBarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Barrel != nullptr)
		*Barrel = params.Barrel;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetSucceededRevive
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_Pet_C::PetSucceededRevive()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetSucceededRevive");

	UIBPChar_Pet_C_PetSucceededRevive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelDrop
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_Pet_C::PetJabbermon_BarrelDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelDrop");

	UIBPChar_Pet_C_PetJabbermon_BarrelDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelThrow
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_Pet_C::PetJabbermon_BarrelThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelThrow");

	UIBPChar_Pet_C_PetJabbermon_BarrelThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewBarrel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::PetJabbermon_BarrelSet(class AActor* NewBarrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelSet");

	UIBPChar_Pet_C_PetJabbermon_BarrelSet_Params params;
	params.NewBarrel = NewBarrel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelAlign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewBarrel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::PetJabbermon_BarrelAlign(class AActor* NewBarrel)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_BarrelAlign");

	UIBPChar_Pet_C_PetJabbermon_BarrelAlign_Params params;
	params.NewBarrel = NewBarrel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.SetEnraged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnraged                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::SetEnraged(bool bIsEnraged)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.SetEnraged");

	UIBPChar_Pet_C_SetEnraged_Params params;
	params.bIsEnraged = bIsEnraged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.GetPetEvolutionType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakActionAbilityPetEvolutionType EvolutionType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::GetPetEvolutionType(EOakActionAbilityPetEvolutionType* EvolutionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.GetPetEvolutionType");

	UIBPChar_Pet_C_GetPetEvolutionType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EvolutionType != nullptr)
		*EvolutionType = params.EvolutionType;
}


// Function IBPChar_Pet.IBPChar_Pet_C.DoAttackCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EnemyObject                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::DoAttackCommand(class UObject* EnemyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.DoAttackCommand");

	UIBPChar_Pet_C_DoAttackCommand_Params params;
	params.EnemyObject = EnemyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.BeginAttackCommand
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_Pet_C::BeginAttackCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.BeginAttackCommand");

	UIBPChar_Pet_C_BeginAttackCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.GetPetType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakActionAbilityPetType       PetType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::GetPetType(EOakActionAbilityPetType* PetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.GetPetType");

	UIBPChar_Pet_C_GetPetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PetType != nullptr)
		*PetType = params.PetType;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_FireRocket
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_Pet_C::PetJabbermon_FireRocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_FireRocket");

	UIBPChar_Pet_C_PetJabbermon_FireRocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeLauncherVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::PetJabbermon_ChangeLauncherVis(bool NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeLauncherVis");

	UIBPChar_Pet_C_PetJabbermon_ChangeLauncherVis_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeGunVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::PetJabbermon_ChangeGunVis(bool NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeGunVis");

	UIBPChar_Pet_C_PetJabbermon_ChangeGunVis_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_Pet_C::PetJabbermon_Poop_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Hide");

	UIBPChar_Pet_C_PetJabbermon_Poop_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Show
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_Pet_C::PetJabbermon_Poop_Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_Poop_Show");

	UIBPChar_Pet_C_PetJabbermon_Poop_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeMeleeVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewWeapVisibility              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::PetJabbermon_ChangeMeleeVis(bool NewWeapVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetJabbermon_ChangeMeleeVis");

	UIBPChar_Pet_C_PetJabbermon_ChangeMeleeVis_Params params;
	params.NewWeapVisibility = NewWeapVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.OnPetReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForced                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPetReleaseReason              Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::OnPetReleased(bool bForced, EPetReleaseReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.OnPetReleased");

	UIBPChar_Pet_C_OnPetReleased_Params params;
	params.bForced = bForced;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.MatchesPetProfile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakPlayerCharacterAugmentData_Pet* InAugment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::MatchesPetProfile(class UOakPlayerCharacterAugmentData_Pet* InAugment, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.MatchesPetProfile");

	UIBPChar_Pet_C_MatchesPetProfile_Params params;
	params.InAugment = InAugment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IBPChar_Pet.IBPChar_Pet_C.PetSpawnTrapProjectile
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_Pet_C::PetSpawnTrapProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.PetSpawnTrapProjectile");

	UIBPChar_Pet_C_PetSpawnTrapProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_Pet.IBPChar_Pet_C.GetBeastmasterOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    Beastmaster                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_Pet_C::GetBeastmasterOwner(class AOakCharacter_Player** Beastmaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_Pet.IBPChar_Pet_C.GetBeastmasterOwner");

	UIBPChar_Pet_C_GetBeastmasterOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Beastmaster != nullptr)
		*Beastmaster = params.Beastmaster;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
