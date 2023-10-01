// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagSpit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_SkagSpit.Proj_SkagSpit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_SkagSpit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.UserConstructionScript");

	AProj_SkagSpit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.GbxAsyncRequest_Spawned_0BD8CD944F5A3EA5729B3C8A6FC9FCD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_SkagSpit_C::GbxAsyncRequest_Spawned_0BD8CD944F5A3EA5729B3C8A6FC9FCD2(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.GbxAsyncRequest_Spawned_0BD8CD944F5A3EA5729B3C8A6FC9FCD2");

	AProj_SkagSpit_C_GbxAsyncRequest_Spawned_0BD8CD944F5A3EA5729B3C8A6FC9FCD2_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.HNT_Throw
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_SkagSpit_C::HNT_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.HNT_Throw");

	AProj_SkagSpit_C_HNT_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.HNT_Prime
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_SkagSpit_C::HNT_Prime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.HNT_Prime");

	AProj_SkagSpit_C_HNT_Prime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.HNT_Drop
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_SkagSpit_C::HNT_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.HNT_Drop");

	AProj_SkagSpit_C_HNT_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_SkagSpit_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.OnExplode");

	AProj_SkagSpit_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagSpit_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.OnHitWorld");

	AProj_SkagSpit_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagSpit_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.OnHitDamagableObject");

	AProj_SkagSpit_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.CE_ThrownLIfetime
// (BlueprintCallable, BlueprintEvent)

void AProj_SkagSpit_C::CE_ThrownLIfetime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.CE_ThrownLIfetime");

	AProj_SkagSpit_C_CE_ThrownLIfetime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_SkagSpit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.ReceiveBeginPlay");

	AProj_SkagSpit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit.Proj_SkagSpit_C.ExecuteUbergraph_Proj_SkagSpit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_SkagSpit_C::ExecuteUbergraph_Proj_SkagSpit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit.Proj_SkagSpit_C.ExecuteUbergraph_Proj_SkagSpit");

	AProj_SkagSpit_C_ExecuteUbergraph_Proj_SkagSpit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
