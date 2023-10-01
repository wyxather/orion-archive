// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Debuff_Frozen_OnEnemy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.Stop_FrozenFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Debuff_Frozen_OnEnemy_C::Stop_FrozenFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.Stop_FrozenFX");

	UAction_Debuff_Frozen_OnEnemy_C_Stop_FrozenFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.Start_FrozenFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Debuff_Frozen_OnEnemy_C::Start_FrozenFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.Start_FrozenFX");

	UAction_Debuff_Frozen_OnEnemy_C_Start_FrozenFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Debuff_Frozen_OnEnemy_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.OnActionStop");

	UAction_Debuff_Frozen_OnEnemy_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Debuff_Frozen_OnEnemy_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.OnActionStart");

	UAction_Debuff_Frozen_OnEnemy_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.ExecuteUbergraph_Action_Debuff_Frozen_OnEnemy
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_Frozen_OnEnemy_C::ExecuteUbergraph_Action_Debuff_Frozen_OnEnemy(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Frozen_OnEnemy.Action_Debuff_Frozen_OnEnemy_C.ExecuteUbergraph_Action_Debuff_Frozen_OnEnemy");

	UAction_Debuff_Frozen_OnEnemy_C_ExecuteUbergraph_Action_Debuff_Frozen_OnEnemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
