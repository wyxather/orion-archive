// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Taunt_02_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UA_PsychoMale_Taunt_02_C::GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB");

	UA_PsychoMale_Taunt_02_C_GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Taunt_02_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.OnBegin");

	UA_PsychoMale_Taunt_02_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Taunt_02_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.MeleeStrike");

	UA_PsychoMale_Taunt_02_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.ExecuteUbergraph_A_PsychoMale_Taunt_02
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Taunt_02_C::ExecuteUbergraph_A_PsychoMale_Taunt_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.ExecuteUbergraph_A_PsychoMale_Taunt_02");

	UA_PsychoMale_Taunt_02_C_ExecuteUbergraph_A_PsychoMale_Taunt_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
