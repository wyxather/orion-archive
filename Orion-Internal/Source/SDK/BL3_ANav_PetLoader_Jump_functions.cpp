// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_PetLoader_Jump_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_PetLoader_Jump_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.OnEnd");

	UANav_PetLoader_Jump_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_PetLoader_Jump_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.OnBegin");

	UANav_PetLoader_Jump_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.Loader_JumpEnd
// (BlueprintCallable, BlueprintEvent)

void UANav_PetLoader_Jump_C::Loader_JumpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.Loader_JumpEnd");

	UANav_PetLoader_Jump_C_Loader_JumpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.Loader_JumpStart
// (BlueprintCallable, BlueprintEvent)

void UANav_PetLoader_Jump_C::Loader_JumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.Loader_JumpStart");

	UANav_PetLoader_Jump_C_Loader_JumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.ExecuteUbergraph_ANav_PetLoader_Jump
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_PetLoader_Jump_C::ExecuteUbergraph_ANav_PetLoader_Jump(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_PetLoader_Jump.ANav_PetLoader_Jump_C.ExecuteUbergraph_ANav_PetLoader_Jump");

	UANav_PetLoader_Jump_C_ExecuteUbergraph_ANav_PetLoader_Jump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
