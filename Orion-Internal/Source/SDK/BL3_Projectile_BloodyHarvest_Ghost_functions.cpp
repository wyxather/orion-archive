// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BloodyHarvest_Ghost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.TryFindNextValidTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           SourcePlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOakCharacter*           NewTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_C::TryFindNextValidTarget(class AOakCharacter* SourcePlayer, class AOakCharacter** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.TryFindNextValidTarget");

	AProjectile_BloodyHarvest_Ghost_C_TryFindNextValidTarget_Params params;
	params.SourcePlayer = SourcePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTarget != nullptr)
		*NewTarget = params.NewTarget;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.CauseDamageGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::CauseDamageGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.CauseDamageGhost");

	AProjectile_BloodyHarvest_Ghost_C_CauseDamageGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.TrySecondWind
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::TrySecondWind()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.TrySecondWind");

	AProjectile_BloodyHarvest_Ghost_C_TrySecondWind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.SpawnLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::SpawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.SpawnLoot");

	AProjectile_BloodyHarvest_Ghost_C_SpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoStartSpawnPresentation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceInstantSpawn_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_C::DoStartSpawnPresentation(bool ForceInstantSpawn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoStartSpawnPresentation");

	AProjectile_BloodyHarvest_Ghost_C_DoStartSpawnPresentation_Params params;
	params.ForceInstantSpawn_ = ForceInstantSpawn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.InitGhost
// (Public, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::InitGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.InitGhost");

	AProjectile_BloodyHarvest_Ghost_C_InitGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoSpawnInPresentation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::DoSpawnInPresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoSpawnInPresentation");

	AProjectile_BloodyHarvest_Ghost_C_DoSpawnInPresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.UserConstructionScript");

	AProjectile_BloodyHarvest_Ghost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.ReceiveBeginPlay");

	AProjectile_BloodyHarvest_Ghost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.SetPlayerTargets
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::SetPlayerTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.SetPlayerTargets");

	AProjectile_BloodyHarvest_Ghost_C_SetPlayerTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnExplode");

	AProjectile_BloodyHarvest_Ghost_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnHitDamagableObject");

	AProjectile_BloodyHarvest_Ghost_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnHitWorld");

	AProjectile_BloodyHarvest_Ghost_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost");

	AProjectile_BloodyHarvest_Ghost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoEndSpawnPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceInstantSpawn_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_C::DoEndSpawnPresentation(bool ForceInstantSpawn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoEndSpawnPresentation");

	AProjectile_BloodyHarvest_Ghost_C_DoEndSpawnPresentation_Params params;
	params.ForceInstantSpawn_ = ForceInstantSpawn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AProjectile_BloodyHarvest_Ghost_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon");

	AProjectile_BloodyHarvest_Ghost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params params;
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


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.CheckPerceivableByAI
// (BlueprintCallable, BlueprintEvent)

void AProjectile_BloodyHarvest_Ghost_C::CheckPerceivableByAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.CheckPerceivableByAI");

	AProjectile_BloodyHarvest_Ghost_C_CheckPerceivableByAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_BloodyHarvest_Ghost_C::ExecuteUbergraph_Projectile_BloodyHarvest_Ghost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost");

	AProjectile_BloodyHarvest_Ghost_C_ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
