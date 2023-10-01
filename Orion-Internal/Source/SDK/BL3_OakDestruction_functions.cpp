// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakDestruction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakDestruction.OakDestructibleFXManager.OnDestructibleDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AOakDestructibleFXManager::OnDestructibleDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakDestruction.OakDestructibleFXManager.OnDestructibleDestroyed");

	AOakDestructibleFXManager_OnDestructibleDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakDestruction.OakDestructibleFXManager.DestroyAllDestructibles
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AOakDestructibleFXManager::DestroyAllDestructibles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakDestruction.OakDestructibleFXManager.DestroyAllDestructibles");

	AOakDestructibleFXManager_DestroyAllDestructibles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakDestruction.OakDestructibleFXManager.ClientApplyRadiusDamage
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// uint32_t                       SyncID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HurtOrigin                     (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          DamageRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFullDamage                    (Parm, ZeroConstructor, IsPlainOldData)

void AOakDestructibleFXManager::ClientApplyRadiusDamage(uint32_t SyncID, float DamageAmount, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakDestruction.OakDestructibleFXManager.ClientApplyRadiusDamage");

	AOakDestructibleFXManager_ClientApplyRadiusDamage_Params params;
	params.SyncID = SyncID;
	params.DamageAmount = DamageAmount;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakDestruction.OakDestructibleFXManager.ClientApplyDamage
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// uint32_t                       SyncID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpulseDir                     (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData)

void AOakDestructibleFXManager::ClientApplyDamage(uint32_t SyncID, float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakDestruction.OakDestructibleFXManager.ClientApplyDamage");

	AOakDestructibleFXManager_ClientApplyDamage_Params params;
	params.SyncID = SyncID;
	params.DamageAmount = DamageAmount;
	params.HitLocation = HitLocation;
	params.ImpulseDir = ImpulseDir;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
