// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_SwoopSpit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C.GbxAsyncRequest_Spawned_55C99C85471F1FD9B3A0998ED1B1A065
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_SwoopSpit_C::GbxAsyncRequest_Spawned_55C99C85471F1FD9B3A0998ED1B1A065(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C.GbxAsyncRequest_Spawned_55C99C85471F1FD9B3A0998ED1B1A065");

	UA_Rakk_SwoopSpit_C_GbxAsyncRequest_Spawned_55C99C85471F1FD9B3A0998ED1B1A065_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_SwoopSpit_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C.OnBegin");

	UA_Rakk_SwoopSpit_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C.Spit
// (BlueprintCallable, BlueprintEvent)

void UA_Rakk_SwoopSpit_C::Spit()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C.Spit");

	UA_Rakk_SwoopSpit_C_Spit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C.ExecuteUbergraph_A_Rakk_SwoopSpit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_SwoopSpit_C::ExecuteUbergraph_A_Rakk_SwoopSpit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C.ExecuteUbergraph_A_Rakk_SwoopSpit");

	UA_Rakk_SwoopSpit_C_ExecuteUbergraph_A_Rakk_SwoopSpit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
