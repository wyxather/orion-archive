// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SkagRare01_ThrowProj_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C.GbxAsyncRequest_Spawned_746AF8DD47170EEDBB80A2B0AC5F5100
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_SkagRare01_ThrowProj_C::GbxAsyncRequest_Spawned_746AF8DD47170EEDBB80A2B0AC5F5100(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C.GbxAsyncRequest_Spawned_746AF8DD47170EEDBB80A2B0AC5F5100");

	UAction_SkagRare01_ThrowProj_C_GbxAsyncRequest_Spawned_746AF8DD47170EEDBB80A2B0AC5F5100_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C.Notify_Throw
// (BlueprintCallable, BlueprintEvent)

void UAction_SkagRare01_ThrowProj_C::Notify_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C.Notify_Throw");

	UAction_SkagRare01_ThrowProj_C_Notify_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_SkagRare01_ThrowProj_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C.OnBegin");

	UAction_SkagRare01_ThrowProj_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C.ExecuteUbergraph_Action_SkagRare01_ThrowProj
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_SkagRare01_ThrowProj_C::ExecuteUbergraph_Action_SkagRare01_ThrowProj(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SkagRare01_ThrowProj.Action_SkagRare01_ThrowProj_C.ExecuteUbergraph_Action_SkagRare01_ThrowProj");

	UAction_SkagRare01_ThrowProj_C_ExecuteUbergraph_Action_SkagRare01_ThrowProj_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
