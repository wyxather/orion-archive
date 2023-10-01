// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Weapon_FabricatorKill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.CheckKillCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallenge_Weapon_FabricatorKill_C::CheckKillCondition(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.CheckKillCondition");

	UChallenge_Weapon_FabricatorKill_C_CheckKillCondition_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Weapon_FabricatorKill_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.OnInitChallengeInstance");

	UChallenge_Weapon_FabricatorKill_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.ExecuteUbergraph_Challenge_Weapon_FabricatorKill
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Weapon_FabricatorKill_C::ExecuteUbergraph_Challenge_Weapon_FabricatorKill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.ExecuteUbergraph_Challenge_Weapon_FabricatorKill");

	UChallenge_Weapon_FabricatorKill_C_ExecuteUbergraph_Challenge_Weapon_FabricatorKill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
