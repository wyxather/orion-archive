// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Web_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.CreateWebSphere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           GraspTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Web_C::CreateWebSphere(class AOakCharacter* GraspTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.CreateWebSphere");

	UAction_PhaseTrance_Web_C_CreateWebSphere_Params params;
	params.GraspTarget = GraspTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.AnimNotify_CreateGraspingSphere
// (BlueprintCallable, BlueprintEvent)

void UAction_PhaseTrance_Web_C::AnimNotify_CreateGraspingSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.AnimNotify_CreateGraspingSphere");

	UAction_PhaseTrance_Web_C_AnimNotify_CreateGraspingSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.HandleGraspTargetFound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter**          GraspTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Web_C::HandleGraspTargetFound(class AOakCharacter** GraspTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.HandleGraspTargetFound");

	UAction_PhaseTrance_Web_C_HandleGraspTargetFound_Params params;
	params.GraspTarget = GraspTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.ExecuteUbergraph_Action_PhaseTrance_Web
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PhaseTrance_Web_C::ExecuteUbergraph_Action_PhaseTrance_Web(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.ExecuteUbergraph_Action_PhaseTrance_Web");

	UAction_PhaseTrance_Web_C_ExecuteUbergraph_Action_PhaseTrance_Web_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
