// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Aftershock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.HandleDamageInstanceLogic
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_GuardianRank_Aftershock_C::HandleDamageInstanceLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.HandleDamageInstanceLogic");

	UAbility_GuardianRank_Aftershock_C_HandleDamageInstanceLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.HandleGroundSlamLock
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_GuardianRank_Aftershock_C::HandleGroundSlamLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.HandleGroundSlamLock");

	UAbility_GuardianRank_Aftershock_C_HandleGroundSlamLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.DealStoredDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageDealt                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_Aftershock_C::DealStoredDamage(class AActor* ActorToDamage, bool* DamageDealt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.DealStoredDamage");

	UAbility_GuardianRank_Aftershock_C_DealStoredDamage_Params params;
	params.ActorToDamage = ActorToDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageDealt != nullptr)
		*DamageDealt = params.DamageDealt;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.StoreDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_Aftershock_C::StoreDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.StoreDamage");

	UAbility_GuardianRank_Aftershock_C_StoreDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.GetTotalInstanceDamageStored
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Total                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_Aftershock_C::GetTotalInstanceDamageStored(float* Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.GetTotalInstanceDamageStored");

	UAbility_GuardianRank_Aftershock_C_GetTotalInstanceDamageStored_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Total != nullptr)
		*Total = params.Total;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.InitAllDamageInstances
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_GuardianRank_Aftershock_C::InitAllDamageInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.InitAllDamageInstances");

	UAbility_GuardianRank_Aftershock_C_InitAllDamageInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.DEBUGPrintAllDamageInstances
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_GuardianRank_Aftershock_C::DEBUGPrintAllDamageInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.DEBUGPrintAllDamageInstances");

	UAbility_GuardianRank_Aftershock_C_DEBUGPrintAllDamageInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.ClearAllDamageInstances
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_GuardianRank_Aftershock_C::ClearAllDamageInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.ClearAllDamageInstances");

	UAbility_GuardianRank_Aftershock_C_ClearAllDamageInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_GuardianRank_Aftershock_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.OnDeactivated");

	UAbility_GuardianRank_Aftershock_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_GuardianRank_Aftershock_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.OnActivated");

	UAbility_GuardianRank_Aftershock_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.On Damage Caused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_GuardianRank_Aftershock_C::On_Damage_Caused(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.On Damage Caused");

	UAbility_GuardianRank_Aftershock_C_On_Damage_Caused_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.ExecuteUbergraph_Ability_GuardianRank_Aftershock
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_Aftershock_C::ExecuteUbergraph_Ability_GuardianRank_Aftershock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Aftershock.Ability_GuardianRank_Aftershock_C.ExecuteUbergraph_Ability_GuardianRank_Aftershock");

	UAbility_GuardianRank_Aftershock_C_ExecuteUbergraph_Ability_GuardianRank_Aftershock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
