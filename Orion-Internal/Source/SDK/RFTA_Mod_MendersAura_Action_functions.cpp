// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_MendersAura_Action_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.GetSpawnLocation
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_MendersAura_Action_C::GetSpawnLocation(struct FVector* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.GetSpawnLocation");

	UMod_MendersAura_Action_C_GetSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UMod_MendersAura_Action_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.OnActionStart");

	UMod_MendersAura_Action_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UMod_MendersAura_Action_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.OnActionStop");

	UMod_MendersAura_Action_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_MendersAura_Action_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.OnDead_Event_1");

	UMod_MendersAura_Action_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.ExecuteUbergraph_Mod_MendersAura_Action
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_MendersAura_Action_C::ExecuteUbergraph_Mod_MendersAura_Action(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Action.Mod_MendersAura_Action_C.ExecuteUbergraph_Mod_MendersAura_Action");

	UMod_MendersAura_Action_C_ExecuteUbergraph_Mod_MendersAura_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
