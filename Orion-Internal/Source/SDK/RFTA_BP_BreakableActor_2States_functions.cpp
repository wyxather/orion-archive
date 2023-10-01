// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_BreakableActor_2States_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BreakableActor_2States.BP_BreakableActor_2States_C.EnableCollisionOn2ndState
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BreakableActor_2States_C::EnableCollisionOn2ndState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor_2States.BP_BreakableActor_2States_C.EnableCollisionOn2ndState");

	ABP_BreakableActor_2States_C_EnableCollisionOn2ndState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakableActor_2States.BP_BreakableActor_2States_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BreakableActor_2States_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor_2States.BP_BreakableActor_2States_C.UserConstructionScript");

	ABP_BreakableActor_2States_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakableActor_2States.BP_BreakableActor_2States_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_1_BreakableEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UBreakableComponent**    Breakable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BreakableActor_2States_C::BndEvt__Breakable_K2Node_ComponentBoundEvent_1_BreakableEvent__DelegateSignature(class UBreakableComponent** Breakable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor_2States.BP_BreakableActor_2States_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_1_BreakableEvent__DelegateSignature");

	ABP_BreakableActor_2States_C_BndEvt__Breakable_K2Node_ComponentBoundEvent_1_BreakableEvent__DelegateSignature_Params params;
	params.Breakable = Breakable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BreakableActor_2States.BP_BreakableActor_2States_C.ExecuteUbergraph_BP_BreakableActor_2States
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BreakableActor_2States_C::ExecuteUbergraph_BP_BreakableActor_2States(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor_2States.BP_BreakableActor_2States_C.ExecuteUbergraph_BP_BreakableActor_2States");

	ABP_BreakableActor_2States_C_ExecuteUbergraph_BP_BreakableActor_2States_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
