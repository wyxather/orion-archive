// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_HuntersMark_Aura_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.OnActionRemoved
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_HuntersMark_Aura_C::OnActionRemoved(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.OnActionRemoved");

	UMod_HuntersMark_Aura_C_OnActionRemoved_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.Bind and add action id to map
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       Action_Component               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Action_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_HuntersMark_Aura_C::Bind_and_add_action_id_to_map(class UActionComponent** Action_Component, int* Action_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.Bind and add action id to map");

	UMod_HuntersMark_Aura_C_Bind_and_add_action_id_to_map_Params params;
	params.Action_Component = Action_Component;
	params.Action_ID = Action_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UMod_HuntersMark_Aura_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.OnActionStart");

	UMod_HuntersMark_Aura_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UMod_HuntersMark_Aura_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.OnActionStop");

	UMod_HuntersMark_Aura_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.ExecuteUbergraph_Mod_HuntersMark_Aura
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_HuntersMark_Aura_C::ExecuteUbergraph_Mod_HuntersMark_Aura(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Aura.Mod_HuntersMark_Aura_C.ExecuteUbergraph_Mod_HuntersMark_Aura");

	UMod_HuntersMark_Aura_C_ExecuteUbergraph_Mod_HuntersMark_Aura_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
