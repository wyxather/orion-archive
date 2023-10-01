// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_SwoopMelee_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_SwoopMelee_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.OnBegin");

	UA_Rakk_SwoopMelee_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.MeleeAttack
// (BlueprintCallable, BlueprintEvent)

void UA_Rakk_SwoopMelee_C::MeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.MeleeAttack");

	UA_Rakk_SwoopMelee_C_MeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_SwoopMelee_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.OnEnd");

	UA_Rakk_SwoopMelee_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.ExecuteUbergraph_A_Rakk_SwoopMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Rakk_SwoopMelee_C::ExecuteUbergraph_A_Rakk_SwoopMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Rakk_SwoopMelee.A_Rakk_SwoopMelee_C.ExecuteUbergraph_A_Rakk_SwoopMelee");

	UA_Rakk_SwoopMelee_C_ExecuteUbergraph_A_Rakk_SwoopMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
