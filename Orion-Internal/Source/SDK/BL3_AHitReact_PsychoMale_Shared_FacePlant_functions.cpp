// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_PsychoMale_Shared_FacePlant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_PsychoMale_Shared_FacePlant_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.OnBegin");

	UAHitReact_PsychoMale_Shared_FacePlant_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.Faceplant
// (BlueprintCallable, BlueprintEvent)

void UAHitReact_PsychoMale_Shared_FacePlant_C::Faceplant()
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.Faceplant");

	UAHitReact_PsychoMale_Shared_FacePlant_C_Faceplant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_PsychoMale_Shared_FacePlant_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.OnEnd");

	UAHitReact_PsychoMale_Shared_FacePlant_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.ExecuteUbergraph_AHitReact_PsychoMale_Shared_FacePlant
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_PsychoMale_Shared_FacePlant_C::ExecuteUbergraph_AHitReact_PsychoMale_Shared_FacePlant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_PsychoMale_Shared_FacePlant.AHitReact_PsychoMale_Shared_FacePlant_C.ExecuteUbergraph_AHitReact_PsychoMale_Shared_FacePlant");

	UAHitReact_PsychoMale_Shared_FacePlant_C_ExecuteUbergraph_AHitReact_PsychoMale_Shared_FacePlant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
