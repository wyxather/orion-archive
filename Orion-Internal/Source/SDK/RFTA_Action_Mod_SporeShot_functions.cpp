// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_SporeShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetPlayerAsCause
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Cause                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_SporeShot_C::GetPlayerAsCause(class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetPlayerAsCause");

	UAction_Mod_SporeShot_C_GetPlayerAsCause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cause != nullptr)
		*Cause = params.Cause;
}


// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_SporeShot_C::GetDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetDamage");

	UAction_Mod_SporeShot_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_SporeShot_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.OnActionStart");

	UAction_Mod_SporeShot_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.ExecuteUbergraph_Action_Mod_SporeShot
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_SporeShot_C::ExecuteUbergraph_Action_Mod_SporeShot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.ExecuteUbergraph_Action_Mod_SporeShot");

	UAction_Mod_SporeShot_C_ExecuteUbergraph_Action_Mod_SporeShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
