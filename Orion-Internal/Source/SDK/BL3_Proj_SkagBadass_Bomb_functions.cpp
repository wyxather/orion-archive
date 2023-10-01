// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagBadass_Bomb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.SpawnSputter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_SkagBadass_Bomb_C::SpawnSputter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.SpawnSputter");

	AProj_SkagBadass_Bomb_C_SpawnSputter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_SkagBadass_Bomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.UserConstructionScript");

	AProj_SkagBadass_Bomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.GbxAsyncRequest_Failed_301C06484A8C9281AB589CA01D4AAE79
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_SkagBadass_Bomb_C::GbxAsyncRequest_Failed_301C06484A8C9281AB589CA01D4AAE79(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.GbxAsyncRequest_Failed_301C06484A8C9281AB589CA01D4AAE79");

	AProj_SkagBadass_Bomb_C_GbxAsyncRequest_Failed_301C06484A8C9281AB589CA01D4AAE79_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.GbxAsyncRequest_Spawned_301C06484A8C9281AB589CA01D4AAE79
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_SkagBadass_Bomb_C::GbxAsyncRequest_Spawned_301C06484A8C9281AB589CA01D4AAE79(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.GbxAsyncRequest_Spawned_301C06484A8C9281AB589CA01D4AAE79");

	AProj_SkagBadass_Bomb_C_GbxAsyncRequest_Spawned_301C06484A8C9281AB589CA01D4AAE79_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_SkagBadass_Bomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.ReceiveBeginPlay");

	AProj_SkagBadass_Bomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_SkagBadass_Bomb_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.OnExplode");

	AProj_SkagBadass_Bomb_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagBadass_Bomb_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.OnHitWorld");

	AProj_SkagBadass_Bomb_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagBadass_Bomb_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.OnHitDamagableObject");

	AProj_SkagBadass_Bomb_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.ExecuteUbergraph_Proj_SkagBadass_Bomb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_SkagBadass_Bomb_C::ExecuteUbergraph_Proj_SkagBadass_Bomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagBadass_Bomb.Proj_SkagBadass_Bomb_C.ExecuteUbergraph_Proj_SkagBadass_Bomb");

	AProj_SkagBadass_Bomb_C_ExecuteUbergraph_Proj_SkagBadass_Bomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
