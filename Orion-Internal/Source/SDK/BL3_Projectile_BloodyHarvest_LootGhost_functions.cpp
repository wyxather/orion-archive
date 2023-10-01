// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BloodyHarvest_LootGhost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.IncrementStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_LootGhost_C::IncrementStats(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.IncrementStats");

	AProjectile_BloodyHarvest_LootGhost_C_IncrementStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_LootGhost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.UserConstructionScript");

	AProjectile_BloodyHarvest_LootGhost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_BloodyHarvest_LootGhost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ReceiveBeginPlay");

	AProjectile_BloodyHarvest_LootGhost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.DoEndSpawnPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForceInstantSpawn_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_LootGhost_C::DoEndSpawnPresentation(bool* ForceInstantSpawn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.DoEndSpawnPresentation");

	AProjectile_BloodyHarvest_LootGhost_C_DoEndSpawnPresentation_Params params;
	params.ForceInstantSpawn_ = ForceInstantSpawn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.SpawnLootBadass
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_LootGhost_C::SpawnLootBadass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.SpawnLootBadass");

	AProjectile_BloodyHarvest_LootGhost_C_SpawnLootBadass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BeginFleeing
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_LootGhost_C::BeginFleeing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BeginFleeing");

	AProjectile_BloodyHarvest_LootGhost_C_BeginFleeing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AProjectile_BloodyHarvest_LootGhost_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost");

	AProjectile_BloodyHarvest_LootGhost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_BloodyHarvest_LootGhost_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.OnExplode");

	AProjectile_BloodyHarvest_LootGhost_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_LootGhost_C::ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost");

	AProjectile_BloodyHarvest_LootGhost_C_ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
