// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Blizzard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetWeapon
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Blizzard_C::GetWeapon(class AActor** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetWeapon");

	UAction_Mod_Blizzard_C_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetDamageCause
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Blizzard_C::GetDamageCause(class AActor** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetDamageCause");

	UAction_Mod_Blizzard_C_GetDamageCause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_Blizzard_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnActionStart");

	UAction_Mod_Blizzard_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnDurationExpired
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Mod_Blizzard_C::OnDurationExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnDurationExpired");

	UAction_Mod_Blizzard_C_OnDurationExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.ExecuteUbergraph_Action_Mod_Blizzard
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Blizzard_C::ExecuteUbergraph_Action_Mod_Blizzard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.ExecuteUbergraph_Action_Mod_Blizzard");

	UAction_Mod_Blizzard_C_ExecuteUbergraph_Action_Mod_Blizzard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
