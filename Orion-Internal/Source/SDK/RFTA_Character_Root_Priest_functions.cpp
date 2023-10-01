// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Priest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Root_Priest.Character_Root_Priest_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Root_Priest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.ReceiveBeginPlay");

	ACharacter_Root_Priest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest.Character_Root_Priest_C.OnBuffStart
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Priest_C::OnBuffStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.OnBuffStart");

	ACharacter_Root_Priest_C_OnBuffStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest.Character_Root_Priest_C.OnBuffEnd
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Priest_C::OnBuffEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.OnBuffEnd");

	ACharacter_Root_Priest_C_OnBuffEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest.Character_Root_Priest_C.SFX_Buff_On
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Priest_C::SFX_Buff_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.SFX_Buff_On");

	ACharacter_Root_Priest_C_SFX_Buff_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest.Character_Root_Priest_C.SFX_Buff_Off
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Priest_C::SFX_Buff_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.SFX_Buff_Off");

	ACharacter_Root_Priest_C_SFX_Buff_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest.Character_Root_Priest_C.OnBuffHollows
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Priest_C::OnBuffHollows()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.OnBuffHollows");

	ACharacter_Root_Priest_C_OnBuffHollows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest.Character_Root_Priest_C.OnAlert
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Priest_C::OnAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.OnAlert");

	ACharacter_Root_Priest_C_OnAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest.Character_Root_Priest_C.CombatExit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Priest_C::CombatExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.CombatExit");

	ACharacter_Root_Priest_C_CombatExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest.Character_Root_Priest_C.OnSeedCallerThrow
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Priest_C::OnSeedCallerThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.OnSeedCallerThrow");

	ACharacter_Root_Priest_C_OnSeedCallerThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest.Character_Root_Priest_C.ExecuteUbergraph_Character_Root_Priest
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Priest_C::ExecuteUbergraph_Character_Root_Priest(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest.Character_Root_Priest_C.ExecuteUbergraph_Character_Root_Priest");

	ACharacter_Root_Priest_C_ExecuteUbergraph_Character_Root_Priest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
