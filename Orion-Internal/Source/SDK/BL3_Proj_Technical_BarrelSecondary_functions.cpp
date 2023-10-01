// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Technical_BarrelSecondary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.RefreshDamageInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Technical_BarrelSecondary_C::RefreshDamageInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.RefreshDamageInfo");

	AProj_Technical_BarrelSecondary_C_RefreshDamageInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Technical_BarrelSecondary_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.UserConstructionScript");

	AProj_Technical_BarrelSecondary_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Technical_BarrelSecondary_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.ReceiveBeginPlay");

	AProj_Technical_BarrelSecondary_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Technical_BarrelSecondary_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.OnExplode");

	AProj_Technical_BarrelSecondary_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.ReceiveHit
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

void AProj_Technical_BarrelSecondary_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.ReceiveHit");

	AProj_Technical_BarrelSecondary_C_ReceiveHit_Params params;
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


// Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.ExecuteUbergraph_Proj_Technical_BarrelSecondary
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Technical_BarrelSecondary_C::ExecuteUbergraph_Proj_Technical_BarrelSecondary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Technical_BarrelSecondary.Proj_Technical_BarrelSecondary_C.ExecuteUbergraph_Proj_Technical_BarrelSecondary");

	AProj_Technical_BarrelSecondary_C_ExecuteUbergraph_Proj_Technical_BarrelSecondary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
