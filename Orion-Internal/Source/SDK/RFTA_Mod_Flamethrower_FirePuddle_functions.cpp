// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Flamethrower_FirePuddle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.AddFireStack
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Flamethrower_FirePuddle_C::AddFireStack(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.AddFireStack");

	AMod_Flamethrower_FirePuddle_C_AddFireStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionComponent**       ActionComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Flamethrower_FirePuddle_C::DoAction(class ACharacterGunfire** TargetCharacter, class UActionComponent** ActionComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.DoAction");

	AMod_Flamethrower_FirePuddle_C_DoAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.ActionComp = ActionComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.StopAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Flamethrower_FirePuddle_C::StopAction(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.StopAction");

	AMod_Flamethrower_FirePuddle_C_StopAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.MulticastFadeOut
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMod_Flamethrower_FirePuddle_C::MulticastFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.MulticastFadeOut");

	AMod_Flamethrower_FirePuddle_C_MulticastFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Start
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMod_Flamethrower_FirePuddle_C::FX_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Start");

	AMod_Flamethrower_FirePuddle_C_FX_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Stop
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AMod_Flamethrower_FirePuddle_C::FX_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.FX_Stop");

	AMod_Flamethrower_FirePuddle_C_FX_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AMod_Flamethrower_FirePuddle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveBeginPlay");

	AMod_Flamethrower_FirePuddle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Flamethrower_FirePuddle_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ReceiveTick");

	AMod_Flamethrower_FirePuddle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ExecuteUbergraph_Mod_Flamethrower_FirePuddle
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Flamethrower_FirePuddle_C::ExecuteUbergraph_Mod_Flamethrower_FirePuddle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower_FirePuddle.Mod_Flamethrower_FirePuddle_C.ExecuteUbergraph_Mod_Flamethrower_FirePuddle");

	AMod_Flamethrower_FirePuddle_C_ExecuteUbergraph_Mod_Flamethrower_FirePuddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
