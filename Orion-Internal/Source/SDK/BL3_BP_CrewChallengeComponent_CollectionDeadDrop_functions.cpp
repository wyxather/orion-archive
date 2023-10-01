// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_CollectionDeadDrop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.CheckChallengeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    ChallengeComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ChallengeActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ChallengeComplete              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CrewChallengeComponent_CollectionDeadDrop_C::CheckChallengeState(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeActive, class UClass* ChallengeComplete, bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.CheckChallengeState");

	UBP_CrewChallengeComponent_CollectionDeadDrop_C_CheckChallengeState_Params params;
	params.ChallengeComponent = ChallengeComponent;
	params.ChallengeActive = ChallengeActive;
	params.ChallengeComplete = ChallengeComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CrewChallengeComponent_CollectionDeadDrop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ReceiveBeginPlay");

	UBP_CrewChallengeComponent_CollectionDeadDrop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.Setup_Challenge
// (BlueprintCallable, BlueprintEvent)

void UBP_CrewChallengeComponent_CollectionDeadDrop_C::Setup_Challenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.Setup_Challenge");

	UBP_CrewChallengeComponent_CollectionDeadDrop_C_Setup_Challenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ChestUsed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUseEvent               UseEvent                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CrewChallengeComponent_CollectionDeadDrop_C::ChestUsed(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ChestUsed");

	UBP_CrewChallengeComponent_CollectionDeadDrop_C_ChestUsed_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.SpawnedChest
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpawner*                Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrewChallengeComponent_CollectionDeadDrop_C::SpawnedChest(class ASpawner* Spawner, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.SpawnedChest");

	UBP_CrewChallengeComponent_CollectionDeadDrop_C_SpawnedChest_Params params;
	params.Spawner = Spawner;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ChestUnlocked
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    ChallengeComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ChallengeClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrewChallengeComponent_CollectionDeadDrop_C::ChestUnlocked(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ChestUnlocked");

	UBP_CrewChallengeComponent_CollectionDeadDrop_C_ChestUnlocked_Params params;
	params.ChallengeComponent = ChallengeComponent;
	params.ChallengeClass = ChallengeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ActiveOnLoad
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    ChallengeComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_CrewChallengeComponent_CollectionDeadDrop_C::ActiveOnLoad(class UChallengesComponent* ChallengeComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ActiveOnLoad");

	UBP_CrewChallengeComponent_CollectionDeadDrop_C_ActiveOnLoad_Params params;
	params.ChallengeComponent = ChallengeComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.CompleteOnLoad
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    Challenge_Component            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_CrewChallengeComponent_CollectionDeadDrop_C::CompleteOnLoad(class UChallengesComponent* Challenge_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.CompleteOnLoad");

	UBP_CrewChallengeComponent_CollectionDeadDrop_C_CompleteOnLoad_Params params;
	params.Challenge_Component = Challenge_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ExecuteUbergraph_BP_CrewChallengeComponent_CollectionDeadDrop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CrewChallengeComponent_CollectionDeadDrop_C::ExecuteUbergraph_BP_CrewChallengeComponent_CollectionDeadDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewChallengeComponent_CollectionDeadDrop.BP_CrewChallengeComponent_CollectionDeadDrop_C.ExecuteUbergraph_BP_CrewChallengeComponent_CollectionDeadDrop");

	UBP_CrewChallengeComponent_CollectionDeadDrop_C_ExecuteUbergraph_BP_CrewChallengeComponent_CollectionDeadDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
