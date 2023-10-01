// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_FrozenMist_ApplyFrostbite_MultiStack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_FrozenMist_ApplyFrostbite_MultiStack.Action_Mod_FrozenMist_ApplyFrostbite_MultiStack_C.AddFrostbiteStack
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Mod_FrozenMist_ApplyFrostbite_MultiStack_C::AddFrostbiteStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_FrozenMist_ApplyFrostbite_MultiStack.Action_Mod_FrozenMist_ApplyFrostbite_MultiStack_C.AddFrostbiteStack");

	UAction_Mod_FrozenMist_ApplyFrostbite_MultiStack_C_AddFrostbiteStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_FrozenMist_ApplyFrostbite_MultiStack.Action_Mod_FrozenMist_ApplyFrostbite_MultiStack_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_FrozenMist_ApplyFrostbite_MultiStack_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_FrozenMist_ApplyFrostbite_MultiStack.Action_Mod_FrozenMist_ApplyFrostbite_MultiStack_C.OnActionStart");

	UAction_Mod_FrozenMist_ApplyFrostbite_MultiStack_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_FrozenMist_ApplyFrostbite_MultiStack.Action_Mod_FrozenMist_ApplyFrostbite_MultiStack_C.ExecuteUbergraph_Action_Mod_FrozenMist_ApplyFrostbite_MultiStack
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_FrozenMist_ApplyFrostbite_MultiStack_C::ExecuteUbergraph_Action_Mod_FrozenMist_ApplyFrostbite_MultiStack(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_FrozenMist_ApplyFrostbite_MultiStack.Action_Mod_FrozenMist_ApplyFrostbite_MultiStack_C.ExecuteUbergraph_Action_Mod_FrozenMist_ApplyFrostbite_MultiStack");

	UAction_Mod_FrozenMist_ApplyFrostbite_MultiStack_C_ExecuteUbergraph_Action_Mod_FrozenMist_ApplyFrostbite_MultiStack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
