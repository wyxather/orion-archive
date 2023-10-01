// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_MAL_KybsWorth_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_MAL_KybsWorth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.UserConstructionScript");

	AProj_Weapon_MAL_KybsWorth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_MAL_KybsWorth_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ReceiveBeginPlay");

	AProj_Weapon_MAL_KybsWorth_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Weapon_MAL_KybsWorth_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.OnHitWorld");

	AProj_Weapon_MAL_KybsWorth_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ReceiveHit
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

void AProj_Weapon_MAL_KybsWorth_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ReceiveHit");

	AProj_Weapon_MAL_KybsWorth_C_ReceiveHit_Params params;
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


// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.WeaponProjectileExplode
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_MAL_KybsWorth_C::WeaponProjectileExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.WeaponProjectileExplode");

	AProj_Weapon_MAL_KybsWorth_C_WeaponProjectileExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_MAL_KybsWorth_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.OnExplode");

	AProj_Weapon_MAL_KybsWorth_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProj_Weapon_MAL_KybsWorth_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ReceiveDestroyed");

	AProj_Weapon_MAL_KybsWorth_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ExecuteUbergraph_Proj_Weapon_MAL_KybsWorth
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_MAL_KybsWorth_C::ExecuteUbergraph_Proj_Weapon_MAL_KybsWorth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_MAL_KybsWorth.Proj_Weapon_MAL_KybsWorth_C.ExecuteUbergraph_Proj_Weapon_MAL_KybsWorth");

	AProj_Weapon_MAL_KybsWorth_C_ExecuteUbergraph_Proj_Weapon_MAL_KybsWorth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
