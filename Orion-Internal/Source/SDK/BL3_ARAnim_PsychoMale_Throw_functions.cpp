// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PsychoMale_Throw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PsychoMale_Throw_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C.OnBegin");

	UARAnim_PsychoMale_Throw_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C.Throw
// (BlueprintCallable, BlueprintEvent)

void UARAnim_PsychoMale_Throw_C::Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C.Throw");

	UARAnim_PsychoMale_Throw_C_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C.GetNewAxe
// (BlueprintCallable, BlueprintEvent)

void UARAnim_PsychoMale_Throw_C::GetNewAxe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C.GetNewAxe");

	UARAnim_PsychoMale_Throw_C_GetNewAxe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C.ExecuteUbergraph_ARAnim_PsychoMale_Throw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PsychoMale_Throw_C::ExecuteUbergraph_ARAnim_PsychoMale_Throw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C.ExecuteUbergraph_ARAnim_PsychoMale_Throw");

	UARAnim_PsychoMale_Throw_C_ExecuteUbergraph_ARAnim_PsychoMale_Throw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
