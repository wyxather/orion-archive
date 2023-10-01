// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RangedWeapon_Mod_Action_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARangedWeapon_Mod_Action_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ModifyDamage");

	ARangedWeapon_Mod_Action_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoAction");

	ARangedWeapon_Mod_Action_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnActivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnActivate");

	ARangedWeapon_Mod_Action_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnStartCustomIdle
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_C::OnStartCustomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnStartCustomIdle");

	ARangedWeapon_Mod_Action_C_OnStartCustomIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnEndCustomIdle
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_C::OnEndCustomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnEndCustomIdle");

	ARangedWeapon_Mod_Action_C_OnEndCustomIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnDetached
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ARangedWeapon_Mod_Action_C::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnDetached");

	ARangedWeapon_Mod_Action_C_OnDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoBlowback
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ARangedWeapon_Mod_Action_C::DoBlowback()
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoBlowback");

	ARangedWeapon_Mod_Action_C_DoBlowback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ExecuteUbergraph_RangedWeapon_Mod_Action
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedWeapon_Mod_Action_C::ExecuteUbergraph_RangedWeapon_Mod_Action(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ExecuteUbergraph_RangedWeapon_Mod_Action");

	ARangedWeapon_Mod_Action_C_ExecuteUbergraph_RangedWeapon_Mod_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
