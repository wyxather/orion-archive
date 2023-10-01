// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_TinkLoot_Vault_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_TinkLoot_Vault_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C.OnBegin");

	UANav_TinkLoot_Vault_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_TinkLoot_Vault_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C.OnEnd");

	UANav_TinkLoot_Vault_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C.ExecuteUbergraph_ANav_TinkLoot_Vault
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANav_TinkLoot_Vault_C::ExecuteUbergraph_ANav_TinkLoot_Vault(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C.ExecuteUbergraph_ANav_TinkLoot_Vault");

	UANav_TinkLoot_Vault_C_ExecuteUbergraph_ANav_TinkLoot_Vault_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
