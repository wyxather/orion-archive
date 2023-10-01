// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Badass_FFYLTaunt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_Badass_FFYLTaunt.A_PsychoMale_Badass_FFYLTaunt_C.GbxAsyncRequest_Hit_D2A51B714891764DE82200A0B6ED0FE2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UA_PsychoMale_Badass_FFYLTaunt_C::GbxAsyncRequest_Hit_D2A51B714891764DE82200A0B6ED0FE2(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Badass_FFYLTaunt.A_PsychoMale_Badass_FFYLTaunt_C.GbxAsyncRequest_Hit_D2A51B714891764DE82200A0B6ED0FE2");

	UA_PsychoMale_Badass_FFYLTaunt_C_GbxAsyncRequest_Hit_D2A51B714891764DE82200A0B6ED0FE2_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Badass_FFYLTaunt.A_PsychoMale_Badass_FFYLTaunt_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Badass_FFYLTaunt_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Badass_FFYLTaunt.A_PsychoMale_Badass_FFYLTaunt_C.OnBegin");

	UA_PsychoMale_Badass_FFYLTaunt_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Badass_FFYLTaunt.A_PsychoMale_Badass_FFYLTaunt_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Badass_FFYLTaunt_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Badass_FFYLTaunt.A_PsychoMale_Badass_FFYLTaunt_C.MeleeStrike");

	UA_PsychoMale_Badass_FFYLTaunt_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Badass_FFYLTaunt.A_PsychoMale_Badass_FFYLTaunt_C.ExecuteUbergraph_A_PsychoMale_Badass_FFYLTaunt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Badass_FFYLTaunt_C::ExecuteUbergraph_A_PsychoMale_Badass_FFYLTaunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Badass_FFYLTaunt.A_PsychoMale_Badass_FFYLTaunt_C.ExecuteUbergraph_A_PsychoMale_Badass_FFYLTaunt");

	UA_PsychoMale_Badass_FFYLTaunt_C_ExecuteUbergraph_A_PsychoMale_Badass_FFYLTaunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
