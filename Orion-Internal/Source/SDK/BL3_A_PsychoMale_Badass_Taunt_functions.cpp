// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Badass_Taunt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C.GbxAsyncRequest_Hit_948A6ADA410F5FFFB7C3B1AE9D8F0327
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UA_PsychoMale_Badass_Taunt_C::GbxAsyncRequest_Hit_948A6ADA410F5FFFB7C3B1AE9D8F0327(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C.GbxAsyncRequest_Hit_948A6ADA410F5FFFB7C3B1AE9D8F0327");

	UA_PsychoMale_Badass_Taunt_C_GbxAsyncRequest_Hit_948A6ADA410F5FFFB7C3B1AE9D8F0327_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Badass_Taunt_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C.OnBegin");

	UA_PsychoMale_Badass_Taunt_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Badass_Taunt_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C.MeleeStrike");

	UA_PsychoMale_Badass_Taunt_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C.ExecuteUbergraph_A_PsychoMale_Badass_Taunt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Badass_Taunt_C::ExecuteUbergraph_A_PsychoMale_Badass_Taunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C.ExecuteUbergraph_A_PsychoMale_Badass_Taunt");

	UA_PsychoMale_Badass_Taunt_C_ExecuteUbergraph_A_PsychoMale_Badass_Taunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
