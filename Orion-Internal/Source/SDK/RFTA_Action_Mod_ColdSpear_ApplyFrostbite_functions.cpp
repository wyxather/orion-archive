// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_ColdSpear_ApplyFrostbite_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.GetDamageCause
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_ColdSpear_ApplyFrostbite_C::GetDamageCause(class AActor** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.GetDamageCause");

	UAction_Mod_ColdSpear_ApplyFrostbite_C_GetDamageCause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.AddFrostbiteStack
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_ColdSpear_ApplyFrostbite_C::AddFrostbiteStack(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.AddFrostbiteStack");

	UAction_Mod_ColdSpear_ApplyFrostbite_C_AddFrostbiteStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_ColdSpear_ApplyFrostbite_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.OnActionStart");

	UAction_Mod_ColdSpear_ApplyFrostbite_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.ExecuteUbergraph_Action_Mod_ColdSpear_ApplyFrostbite
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_ColdSpear_ApplyFrostbite_C::ExecuteUbergraph_Action_Mod_ColdSpear_ApplyFrostbite(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C.ExecuteUbergraph_Action_Mod_ColdSpear_ApplyFrostbite");

	UAction_Mod_ColdSpear_ApplyFrostbite_C_ExecuteUbergraph_Action_Mod_ColdSpear_ApplyFrostbite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
