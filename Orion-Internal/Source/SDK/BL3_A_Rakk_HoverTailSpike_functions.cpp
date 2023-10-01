// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_HoverTailSpike_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Rakk_HoverTailSpike.A_Rakk_HoverTailSpike_C.GbxAsyncRequest_Spawned_51F37ADF4C2B6A3E254E98912F0AB6B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_HoverTailSpike_C::GbxAsyncRequest_Spawned_51F37ADF4C2B6A3E254E98912F0AB6B9(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_HoverTailSpike.A_Rakk_HoverTailSpike_C.GbxAsyncRequest_Spawned_51F37ADF4C2B6A3E254E98912F0AB6B9");

	UA_Rakk_HoverTailSpike_C_GbxAsyncRequest_Spawned_51F37ADF4C2B6A3E254E98912F0AB6B9_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_HoverTailSpike.A_Rakk_HoverTailSpike_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_HoverTailSpike_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_HoverTailSpike.A_Rakk_HoverTailSpike_C.OnBegin");

	UA_Rakk_HoverTailSpike_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_HoverTailSpike.A_Rakk_HoverTailSpike_C.Notify_Throw
// (BlueprintCallable, BlueprintEvent)

void UA_Rakk_HoverTailSpike_C::Notify_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_HoverTailSpike.A_Rakk_HoverTailSpike_C.Notify_Throw");

	UA_Rakk_HoverTailSpike_C_Notify_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_HoverTailSpike.A_Rakk_HoverTailSpike_C.ExecuteUbergraph_A_Rakk_HoverTailSpike
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_HoverTailSpike_C::ExecuteUbergraph_A_Rakk_HoverTailSpike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_HoverTailSpike.A_Rakk_HoverTailSpike_C.ExecuteUbergraph_A_Rakk_HoverTailSpike");

	UA_Rakk_HoverTailSpike_C_ExecuteUbergraph_A_Rakk_HoverTailSpike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
