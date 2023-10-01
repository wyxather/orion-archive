// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_Hunt_Spawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CrewChallengeComponent_Hunt_Spawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.ReceiveBeginPlay");

	UBP_CrewChallengeComponent_Hunt_Spawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.Setup_Challenge
// (BlueprintCallable, BlueprintEvent)

void UBP_CrewChallengeComponent_Hunt_Spawner_C::Setup_Challenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.Setup_Challenge");

	UBP_CrewChallengeComponent_Hunt_Spawner_C_Setup_Challenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.ChallengeSpawner_AllDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrewChallengeComponent_Hunt_Spawner_C::ChallengeSpawner_AllDead(class ASpawner* Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.ChallengeSpawner_AllDead");

	UBP_CrewChallengeComponent_Hunt_Spawner_C_ChallengeSpawner_AllDead_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.PlayerEnterChallengeArea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    PlayerChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_CrewChallengeComponent_Hunt_Spawner_C::PlayerEnterChallengeArea(class UChallengesComponent* PlayerChallenges)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.PlayerEnterChallengeArea");

	UBP_CrewChallengeComponent_Hunt_Spawner_C_PlayerEnterChallengeArea_Params params;
	params.PlayerChallenges = PlayerChallenges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.ExecuteUbergraph_BP_CrewChallengeComponent_Hunt_Spawner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrewChallengeComponent_Hunt_Spawner_C::ExecuteUbergraph_BP_CrewChallengeComponent_Hunt_Spawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.ExecuteUbergraph_BP_CrewChallengeComponent_Hunt_Spawner");

	UBP_CrewChallengeComponent_Hunt_Spawner_C_ExecuteUbergraph_BP_CrewChallengeComponent_Hunt_Spawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
