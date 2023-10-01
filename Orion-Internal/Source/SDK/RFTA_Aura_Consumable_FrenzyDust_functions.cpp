// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Aura_Consumable_FrenzyDust_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AAura_Consumable_FrenzyDust_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ReceiveBeginPlay");

	AAura_Consumable_FrenzyDust_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionComponent**       ActionComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Consumable_FrenzyDust_C::DoAction(class ACharacterGunfire** TargetCharacter, class UActionComponent** ActionComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.DoAction");

	AAura_Consumable_FrenzyDust_C_DoAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.ActionComp = ActionComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.FadeOut
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Consumable_FrenzyDust_C::FadeOut(float* FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.FadeOut");

	AAura_Consumable_FrenzyDust_C_FadeOut_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.StopAura
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AAura_Consumable_FrenzyDust_C::StopAura()
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.StopAura");

	AAura_Consumable_FrenzyDust_C_StopAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ExecuteUbergraph_Aura_Consumable_FrenzyDust
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Consumable_FrenzyDust_C::ExecuteUbergraph_Aura_Consumable_FrenzyDust(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C.ExecuteUbergraph_Aura_Consumable_FrenzyDust");

	AAura_Consumable_FrenzyDust_C_ExecuteUbergraph_Aura_Consumable_FrenzyDust_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
