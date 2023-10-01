// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.OnInitChallengeInstance");

	UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.CheckKillConditions
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C::CheckKillConditions(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.CheckKillConditions");

	UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_CheckKillConditions_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C::ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted");

	UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
