// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon.Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C.CheckBossKill
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C::CheckBossKill(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon.Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C.CheckBossKill");

	UChallenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C_CheckBossKill_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon.Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon.Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C.OnInitChallengeInstance");

	UChallenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon.Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C.ExecuteUbergraph_Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C::ExecuteUbergraph_Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon.Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C.ExecuteUbergraph_Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon");

	UChallenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_C_ExecuteUbergraph_Challenge_BloodyHarvest_14_KillCaptainWithHauntWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
