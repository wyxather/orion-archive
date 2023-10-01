// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_HoverSpit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Rakk_HoverSpit.A_Rakk_HoverSpit_C.GbxAsyncRequest_Spawned_085CF53C4FE4574C52F752A71551CFCD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_HoverSpit_C::GbxAsyncRequest_Spawned_085CF53C4FE4574C52F752A71551CFCD(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_HoverSpit.A_Rakk_HoverSpit_C.GbxAsyncRequest_Spawned_085CF53C4FE4574C52F752A71551CFCD");

	UA_Rakk_HoverSpit_C_GbxAsyncRequest_Spawned_085CF53C4FE4574C52F752A71551CFCD_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_HoverSpit.A_Rakk_HoverSpit_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_HoverSpit_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_HoverSpit.A_Rakk_HoverSpit_C.OnBegin");

	UA_Rakk_HoverSpit_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_HoverSpit.A_Rakk_HoverSpit_C.Spit
// (BlueprintCallable, BlueprintEvent)

void UA_Rakk_HoverSpit_C::Spit()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_HoverSpit.A_Rakk_HoverSpit_C.Spit");

	UA_Rakk_HoverSpit_C_Spit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_HoverSpit.A_Rakk_HoverSpit_C.ExecuteUbergraph_A_Rakk_HoverSpit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_HoverSpit_C::ExecuteUbergraph_A_Rakk_HoverSpit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_HoverSpit.A_Rakk_HoverSpit_C.ExecuteUbergraph_A_Rakk_HoverSpit");

	UA_Rakk_HoverSpit_C_ExecuteUbergraph_A_Rakk_HoverSpit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
