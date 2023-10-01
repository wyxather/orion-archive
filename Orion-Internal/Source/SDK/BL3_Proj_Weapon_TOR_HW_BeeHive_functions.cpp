// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_HW_BeeHive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.MakeBees
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_BeeHive_C::MakeBees()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.MakeBees");

	AProj_Weapon_TOR_HW_BeeHive_C_MakeBees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_BeeHive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.UserConstructionScript");

	AProj_Weapon_TOR_HW_BeeHive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_TOR_HW_BeeHive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ReceiveBeginPlay");

	AProj_Weapon_TOR_HW_BeeHive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.TargetFound
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_BeeHive_C::TargetFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.TargetFound");

	AProj_Weapon_TOR_HW_BeeHive_C_TargetFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ReceiveHit
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

void AProj_Weapon_TOR_HW_BeeHive_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ReceiveHit");

	AProj_Weapon_TOR_HW_BeeHive_C_ReceiveHit_Params params;
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


// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ReleaseTheBEEEEEEEEEEEEEES
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_BeeHive_C::ReleaseTheBEEEEEEEEEEEEEES()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ReleaseTheBEEEEEEEEEEEEEES");

	AProj_Weapon_TOR_HW_BeeHive_C_ReleaseTheBEEEEEEEEEEEEEES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.BurnItDown
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_BeeHive_C::BurnItDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.BurnItDown");

	AProj_Weapon_TOR_HW_BeeHive_C_BurnItDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_BeeHive
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_TOR_HW_BeeHive_C::ExecuteUbergraph_Proj_Weapon_TOR_HW_BeeHive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_BeeHive.Proj_Weapon_TOR_HW_BeeHive_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_BeeHive");

	AProj_Weapon_TOR_HW_BeeHive_C_ExecuteUbergraph_Proj_Weapon_TOR_HW_BeeHive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
