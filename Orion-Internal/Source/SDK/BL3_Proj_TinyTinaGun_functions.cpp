// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_TinyTinaGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_TinyTinaGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.UserConstructionScript");

	AProj_TinyTinaGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Prime
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_TinyTinaGun_C::HNT_Prime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Prime");

	AProj_TinyTinaGun_C_HNT_Prime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Drop
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_TinyTinaGun_C::HNT_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Drop");

	AProj_TinyTinaGun_C_HNT_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Throw
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_TinyTinaGun_C::HNT_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.HNT_Throw");

	AProj_TinyTinaGun_C_HNT_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_TinyTinaGun_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee");

	AProj_TinyTinaGun_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_TinyTinaGun_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.OnExplode");

	AProj_TinyTinaGun_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_TinyTinaGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.ReceiveBeginPlay");

	AProj_TinyTinaGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.OnTakeDmg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AProj_TinyTinaGun_C::OnTakeDmg(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.OnTakeDmg");

	AProj_TinyTinaGun_C_OnTakeDmg_Params params;
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


// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Sidewinder_old
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_TinyTinaGun_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Sidewinder_old(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Sidewinder_old");

	AProj_TinyTinaGun_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Sidewinder_old_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.ExecuteUbergraph_Proj_TinyTinaGun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_TinyTinaGun_C::ExecuteUbergraph_Proj_TinyTinaGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_TinyTinaGun.Proj_TinyTinaGun_C.ExecuteUbergraph_Proj_TinyTinaGun");

	AProj_TinyTinaGun_C_ExecuteUbergraph_Proj_TinyTinaGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
