// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Grenade_DeliveryKill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.SetBinds
// (Public, BlueprintCallable, BlueprintEvent, Const)

void UChallenge_Grenade_DeliveryKill_C::SetBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.SetBinds");

	UChallenge_Grenade_DeliveryKill_C_SetBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.CheckKillCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     DeathDetails                   (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UChallenge_Grenade_DeliveryKill_C::CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.CheckKillCondition");

	UChallenge_Grenade_DeliveryKill_C_CheckKillCondition_Params params;
	params.DamageReceiver = DamageReceiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathDetails != nullptr)
		*DeathDetails = params.DeathDetails;
}


// Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.OnInitChallengeInstance
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Grenade_DeliveryKill_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.OnInitChallengeInstance");

	UChallenge_Grenade_DeliveryKill_C_OnInitChallengeInstance_Params params;
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
