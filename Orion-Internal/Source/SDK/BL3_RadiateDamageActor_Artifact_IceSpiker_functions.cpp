// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_RadiateDamageActor_Artifact_IceSpiker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoDamageToEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARadiateDamageActor_Artifact_IceSpiker_C::DoDamageToEnemy(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoDamageToEnemy");

	ARadiateDamageActor_Artifact_IceSpiker_C_DoDamageToEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoAreaDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARadiateDamageActor_Artifact_IceSpiker_C::DoAreaDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.DoAreaDamage");

	ARadiateDamageActor_Artifact_IceSpiker_C_DoAreaDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARadiateDamageActor_Artifact_IceSpiker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.UserConstructionScript");

	ARadiateDamageActor_Artifact_IceSpiker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARadiateDamageActor_Artifact_IceSpiker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveBeginPlay");

	ARadiateDamageActor_Artifact_IceSpiker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnHitEnemy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 EnemyActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARadiateDamageActor_Artifact_IceSpiker_C::OnHitEnemy(class AActor** EnemyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnHitEnemy");

	ARadiateDamageActor_Artifact_IceSpiker_C_OnHitEnemy_Params params;
	params.EnemyActor = EnemyActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARadiateDamageActor_Artifact_IceSpiker_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ReceiveEndPlay");

	ARadiateDamageActor_Artifact_IceSpiker_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnPerformRadiateDamageTasks
// (Event, Public, BlueprintEvent)

void ARadiateDamageActor_Artifact_IceSpiker_C::OnPerformRadiateDamageTasks()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.OnPerformRadiateDamageTasks");

	ARadiateDamageActor_Artifact_IceSpiker_C_OnPerformRadiateDamageTasks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARadiateDamageActor_Artifact_IceSpiker_C::ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Artifact_IceSpiker.RadiateDamageActor_Artifact_IceSpiker_C.ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker");

	ARadiateDamageActor_Artifact_IceSpiker_C_ExecuteUbergraph_RadiateDamageActor_Artifact_IceSpiker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
