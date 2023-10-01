// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_GrenadeToss_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_GrenadeToss_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.OnBegin");

	UAction_PetLoader_GrenadeToss_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_GrenadeToss_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.OnEnd");

	UAction_PetLoader_GrenadeToss_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.Notify_Throw
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_GrenadeToss_C::Notify_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.Notify_Throw");

	UAction_PetLoader_GrenadeToss_C_Notify_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.ExecuteUbergraph_Action_PetLoader_GrenadeToss
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_GrenadeToss_C::ExecuteUbergraph_Action_PetLoader_GrenadeToss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_GrenadeToss.Action_PetLoader_GrenadeToss_C.ExecuteUbergraph_Action_PetLoader_GrenadeToss");

	UAction_PetLoader_GrenadeToss_C_ExecuteUbergraph_Action_PetLoader_GrenadeToss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
