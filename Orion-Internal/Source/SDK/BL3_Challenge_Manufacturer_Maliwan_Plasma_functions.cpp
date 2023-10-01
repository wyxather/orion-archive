// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Manufacturer_Maliwan_Plasma_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Manufacturer_Maliwan_Plasma.Challenge_Manufacturer_Maliwan_Plasma_C.CheckForPlasma
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakWeapon*              Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CorrectWeaponPart              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallenge_Manufacturer_Maliwan_Plasma_C::CheckForPlasma(class AOakWeapon* Weapon, bool* CorrectWeaponPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Manufacturer_Maliwan_Plasma.Challenge_Manufacturer_Maliwan_Plasma_C.CheckForPlasma");

	UChallenge_Manufacturer_Maliwan_Plasma_C_CheckForPlasma_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CorrectWeaponPart != nullptr)
		*CorrectWeaponPart = params.CorrectWeaponPart;
}


// Function Challenge_Manufacturer_Maliwan_Plasma.Challenge_Manufacturer_Maliwan_Plasma_C.CheckKillCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     DeathDetails                   (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UChallenge_Manufacturer_Maliwan_Plasma_C::CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Manufacturer_Maliwan_Plasma.Challenge_Manufacturer_Maliwan_Plasma_C.CheckKillCondition");

	UChallenge_Manufacturer_Maliwan_Plasma_C_CheckKillCondition_Params params;
	params.DamageReceiver = DamageReceiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathDetails != nullptr)
		*DeathDetails = params.DeathDetails;
}


// Function Challenge_Manufacturer_Maliwan_Plasma.Challenge_Manufacturer_Maliwan_Plasma_C.OnInitChallengeInstance
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Manufacturer_Maliwan_Plasma_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Manufacturer_Maliwan_Plasma.Challenge_Manufacturer_Maliwan_Plasma_C.OnInitChallengeInstance");

	UChallenge_Manufacturer_Maliwan_Plasma_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
