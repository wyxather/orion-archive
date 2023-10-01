// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Brightside_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_Brightside_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.UserConstructionScript");

	ATEDProjectile_Brightside_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Brightside_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.ReceiveBeginPlay");

	ATEDProjectile_Brightside_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.OnBeginExplode
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_Brightside_C::OnBeginExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.OnBeginExplode");

	ATEDProjectile_Brightside_C_OnBeginExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.ReceiveHit
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

void ATEDProjectile_Brightside_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.ReceiveHit");

	ATEDProjectile_Brightside_C_ReceiveHit_Params params;
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


// Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.ExecuteUbergraph_TEDProjectile_Brightside
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_Brightside_C::ExecuteUbergraph_TEDProjectile_Brightside(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_Brightside.TEDProjectile_Brightside_C.ExecuteUbergraph_TEDProjectile_Brightside");

	ATEDProjectile_Brightside_C_ExecuteUbergraph_TEDProjectile_Brightside_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
