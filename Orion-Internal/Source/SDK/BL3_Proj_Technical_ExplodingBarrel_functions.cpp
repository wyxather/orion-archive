// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Technical_ExplodingBarrel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Technical_ExplodingBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.UserConstructionScript");

	AProj_Technical_ExplodingBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Technical_ExplodingBarrel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.ReceiveBeginPlay");

	AProj_Technical_ExplodingBarrel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Technical_ExplodingBarrel_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.OnExplode");

	AProj_Technical_ExplodingBarrel_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Technical_ExplodingBarrel_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.ReceiveHit");

	AProj_Technical_ExplodingBarrel_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.OnForcedDetonate
// (BlueprintCallable, BlueprintEvent)

void AProj_Technical_ExplodingBarrel_C::OnForcedDetonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.OnForcedDetonate");

	AProj_Technical_ExplodingBarrel_C_OnForcedDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Technical_ExplodingBarrel
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AProj_Technical_ExplodingBarrel_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Technical_ExplodingBarrel(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Technical_ExplodingBarrel");

	AProj_Technical_ExplodingBarrel_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Technical_ExplodingBarrel_Params params;
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


// Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.ExecuteUbergraph_Proj_Technical_ExplodingBarrel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Technical_ExplodingBarrel_C::ExecuteUbergraph_Proj_Technical_ExplodingBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_ExplodingBarrel.Proj_Technical_ExplodingBarrel_C.ExecuteUbergraph_Proj_Technical_ExplodingBarrel");

	AProj_Technical_ExplodingBarrel_C_ExecuteUbergraph_Proj_Technical_ExplodingBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
