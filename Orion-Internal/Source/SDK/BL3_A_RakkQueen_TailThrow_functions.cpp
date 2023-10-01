// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_RakkQueen_TailThrow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C.GbxAsyncRequest_Spawned_948ADA844A527CBC8EFFFF8AD5E604D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_RakkQueen_TailThrow_C::GbxAsyncRequest_Spawned_948ADA844A527CBC8EFFFF8AD5E604D1(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C.GbxAsyncRequest_Spawned_948ADA844A527CBC8EFFFF8AD5E604D1");

	UA_RakkQueen_TailThrow_C_GbxAsyncRequest_Spawned_948ADA844A527CBC8EFFFF8AD5E604D1_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_RakkQueen_TailThrow_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C.OnBegin");

	UA_RakkQueen_TailThrow_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C.Notify_ThrowProjectile
// (BlueprintCallable, BlueprintEvent)

void UA_RakkQueen_TailThrow_C::Notify_ThrowProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C.Notify_ThrowProjectile");

	UA_RakkQueen_TailThrow_C_Notify_ThrowProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C.ExecuteUbergraph_A_RakkQueen_TailThrow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_RakkQueen_TailThrow_C::ExecuteUbergraph_A_RakkQueen_TailThrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_RakkQueen_TailThrow.A_RakkQueen_TailThrow_C.ExecuteUbergraph_A_RakkQueen_TailThrow");

	UA_RakkQueen_TailThrow_C_ExecuteUbergraph_A_RakkQueen_TailThrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
