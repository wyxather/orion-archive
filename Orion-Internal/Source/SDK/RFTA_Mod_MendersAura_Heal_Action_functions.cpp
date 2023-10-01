// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_MendersAura_Heal_Action_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.Get Owning Character
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       CharacterRef                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_MendersAura_Heal_Action_C::Get_Owning_Character(class AActor** Object, class ACharacterGunfire** CharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.Get Owning Character");

	UMod_MendersAura_Heal_Action_C_Get_Owning_Character_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterRef != nullptr)
		*CharacterRef = params.CharacterRef;
}


// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.Release
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UMod_MendersAura_Heal_Action_C::Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.Release");

	UMod_MendersAura_Heal_Action_C_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.AllowAction
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo*            InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMod_MendersAura_Heal_Action_C::AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.AllowAction");

	UMod_MendersAura_Heal_Action_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UMod_MendersAura_Heal_Action_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.OnActionStart");

	UMod_MendersAura_Heal_Action_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_MendersAura_Heal_Action_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.OnDead_Event_1");

	UMod_MendersAura_Heal_Action_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UMod_MendersAura_Heal_Action_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.OnComputeStats");

	UMod_MendersAura_Heal_Action_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.ExecuteUbergraph_Mod_MendersAura_Heal_Action
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMod_MendersAura_Heal_Action_C::ExecuteUbergraph_Mod_MendersAura_Heal_Action(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.ExecuteUbergraph_Mod_MendersAura_Heal_Action");

	UMod_MendersAura_Heal_Action_C_ExecuteUbergraph_Mod_MendersAura_Heal_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
