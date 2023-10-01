// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.SetElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Rakk_Spit_C::SetElement(EOakElementalType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.SetElement");

	AProjectile_Rakk_Spit_C_SetElement_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Rakk_Spit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.UserConstructionScript");

	AProjectile_Rakk_Spit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.GbxAsyncRequest_Failed_77AF8B354EBDD4149196169054932447
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Rakk_Spit_C::GbxAsyncRequest_Failed_77AF8B354EBDD4149196169054932447(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.GbxAsyncRequest_Failed_77AF8B354EBDD4149196169054932447");

	AProjectile_Rakk_Spit_C_GbxAsyncRequest_Failed_77AF8B354EBDD4149196169054932447_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.GbxAsyncRequest_Spawned_77AF8B354EBDD4149196169054932447
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Rakk_Spit_C::GbxAsyncRequest_Spawned_77AF8B354EBDD4149196169054932447(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.GbxAsyncRequest_Spawned_77AF8B354EBDD4149196169054932447");

	AProjectile_Rakk_Spit_C_GbxAsyncRequest_Spawned_77AF8B354EBDD4149196169054932447_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_Rakk_Spit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.ReceiveBeginPlay");

	AProjectile_Rakk_Spit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Rakk_Spit_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnHitWorld");

	AProjectile_Rakk_Spit_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Rakk_Spit_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnHitEnemy");

	AProjectile_Rakk_Spit_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnHitNeutral
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_Rakk_Spit_C::OnHitNeutral(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnHitNeutral");

	AProjectile_Rakk_Spit_C_OnHitNeutral_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_Rakk_Spit_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnExplode");

	AProjectile_Rakk_Spit_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.ExecuteUbergraph_Projectile_Rakk_Spit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Rakk_Spit_C::ExecuteUbergraph_Projectile_Rakk_Spit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.ExecuteUbergraph_Projectile_Rakk_Spit");

	AProjectile_Rakk_Spit_C_ExecuteUbergraph_Projectile_Rakk_Spit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
