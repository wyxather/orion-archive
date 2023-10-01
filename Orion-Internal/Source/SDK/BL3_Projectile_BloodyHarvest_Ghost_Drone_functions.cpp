// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BloodyHarvest_Ghost_Drone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TryFindNextValidTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Source_Player                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter*           NewTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::TryFindNextValidTarget(class AOakCharacter* Source_Player, class AOakCharacter** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TryFindNextValidTarget");

	AProjectile_BloodyHarvest_Ghost_Drone_C_TryFindNextValidTarget_Params params;
	params.Source_Player = Source_Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTarget != nullptr)
		*NewTarget = params.NewTarget;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StartFiring
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::StartFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StartFiring");

	AProjectile_BloodyHarvest_Ghost_Drone_C_StartFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StopFiring
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NoReload                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::StopFiring(bool NoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StopFiring");

	AProjectile_BloodyHarvest_Ghost_Drone_C_StopFiring_Params params;
	params.NoReload = NoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.FireWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::FireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.FireWeapon");

	AProjectile_BloodyHarvest_Ghost_Drone_C_FireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.IncrementStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::IncrementStats(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.IncrementStats");

	AProjectile_BloodyHarvest_Ghost_Drone_C_IncrementStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TrySecondWindBadass
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::TrySecondWindBadass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TrySecondWindBadass");

	AProjectile_BloodyHarvest_Ghost_Drone_C_TrySecondWindBadass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SpawnLootBadass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::SpawnLootBadass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SpawnLootBadass");

	AProjectile_BloodyHarvest_Ghost_Drone_C_SpawnLootBadass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SetDroneMovementTypeWithTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakDroneMovementMode          NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::SetDroneMovementTypeWithTargets(EOakDroneMovementMode NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SetDroneMovementTypeWithTargets");

	AProjectile_BloodyHarvest_Ghost_Drone_C_SetDroneMovementTypeWithTargets_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoSpawnInPresentation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::DoSpawnInPresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoSpawnInPresentation");

	AProjectile_BloodyHarvest_Ghost_Drone_C_DoSpawnInPresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoStartSpawnPresentation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceInstantSpawn_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::DoStartSpawnPresentation(bool ForceInstantSpawn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoStartSpawnPresentation");

	AProjectile_BloodyHarvest_Ghost_Drone_C_DoStartSpawnPresentation_Params params;
	params.ForceInstantSpawn_ = ForceInstantSpawn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.InitGhostBadass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::InitGhostBadass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.InitGhostBadass");

	AProjectile_BloodyHarvest_Ghost_Drone_C_InitGhostBadass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.UserConstructionScript");

	AProjectile_BloodyHarvest_Ghost_Drone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoEndSpawnPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceInstantSpawn_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::DoEndSpawnPresentation(bool ForceInstantSpawn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoEndSpawnPresentation");

	AProjectile_BloodyHarvest_Ghost_Drone_C_DoEndSpawnPresentation_Params params;
	params.ForceInstantSpawn_ = ForceInstantSpawn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ReceiveBeginPlay");

	AProjectile_BloodyHarvest_Ghost_Drone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitDamagableObject");

	AProjectile_BloodyHarvest_Ghost_Drone_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitWorld");

	AProjectile_BloodyHarvest_Ghost_Drone_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost");

	AProjectile_BloodyHarvest_Ghost_Drone_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnExplode");

	AProjectile_BloodyHarvest_Ghost_Drone_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Bind
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::TargetOnDied_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Bind");

	AProjectile_BloodyHarvest_Ghost_Drone_C_TargetOnDied_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SkullTarget_OnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::SkullTarget_OnDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SkullTarget_OnDied");

	AProjectile_BloodyHarvest_Ghost_Drone_C_SkullTarget_OnDied_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Unbind
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::TargetOnDied_Unbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Unbind");

	AProjectile_BloodyHarvest_Ghost_Drone_C_TargetOnDied_Unbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginBadassChargeAndDie
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::BeginBadassChargeAndDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginBadassChargeAndDie");

	AProjectile_BloodyHarvest_Ghost_Drone_C_BeginBadassChargeAndDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginReloading
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::BeginReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginReloading");

	AProjectile_BloodyHarvest_Ghost_Drone_C_BeginReloading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AProjectile_BloodyHarvest_Ghost_Drone_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon");

	AProjectile_BloodyHarvest_Ghost_Drone_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params params;
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


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.CheckPerceivableByAI
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::CheckPerceivableByAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.CheckPerceivableByAI");

	AProjectile_BloodyHarvest_Ghost_Drone_C_CheckPerceivableByAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ResetShooting
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_Drone_C::ResetShooting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ResetShooting");

	AProjectile_BloodyHarvest_Ghost_Drone_C_ResetShooting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_Drone_C::ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone");

	AProjectile_BloodyHarvest_Ghost_Drone_C_ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
