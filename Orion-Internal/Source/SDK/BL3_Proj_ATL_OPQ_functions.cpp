// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_OPQ_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_OPQ_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.UserConstructionScript");

	AProj_ATL_OPQ_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.GbxAsyncRequest_Spawned_9C35FAAF46B286381928AF9A06BE659F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_OPQ_C::GbxAsyncRequest_Spawned_9C35FAAF46B286381928AF9A06BE659F(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.GbxAsyncRequest_Spawned_9C35FAAF46B286381928AF9A06BE659F");

	AProj_ATL_OPQ_C_GbxAsyncRequest_Spawned_9C35FAAF46B286381928AF9A06BE659F_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_ATL_OPQ_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.ReceiveBeginPlay");

	AProj_ATL_OPQ_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_ATL_OPQ_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.OnHitWorld");

	AProj_ATL_OPQ_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_ATL_OPQ_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.OnExplode");

	AProj_ATL_OPQ_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.ExecuteUbergraph_Proj_ATL_OPQ
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_OPQ_C::ExecuteUbergraph_Proj_ATL_OPQ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_OPQ.Proj_ATL_OPQ_C.ExecuteUbergraph_Proj_ATL_OPQ");

	AProj_ATL_OPQ_C_ExecuteUbergraph_Proj_ATL_OPQ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
