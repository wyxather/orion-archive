// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Aura_Mod_HiveShot_InsectCloud_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.AbrasiveAmuletAddCorrosiveStack
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Mod_HiveShot_InsectCloud_C::AbrasiveAmuletAddCorrosiveStack(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.AbrasiveAmuletAddCorrosiveStack");

	AAura_Mod_HiveShot_InsectCloud_C_AbrasiveAmuletAddCorrosiveStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.DoActionToCharacter
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Mod_HiveShot_InsectCloud_C::DoActionToCharacter(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.DoActionToCharacter");

	AAura_Mod_HiveShot_InsectCloud_C_DoActionToCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.AddCorrodedStack
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Mod_HiveShot_InsectCloud_C::AddCorrodedStack(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.AddCorrodedStack");

	AAura_Mod_HiveShot_InsectCloud_C_AddCorrodedStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.CanDoAction
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAura_Mod_HiveShot_InsectCloud_C::CanDoAction(class ACharacterGunfire** Character, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.CanDoAction");

	AAura_Mod_HiveShot_InsectCloud_C_CanDoAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.UpdateValidOverlaps
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAura_Mod_HiveShot_InsectCloud_C::UpdateValidOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.UpdateValidOverlaps");

	AAura_Mod_HiveShot_InsectCloud_C_UpdateValidOverlaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionComponent**       ActionComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Mod_HiveShot_InsectCloud_C::DoAction(class ACharacterGunfire** TargetCharacter, class UActionComponent** ActionComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.DoAction");

	AAura_Mod_HiveShot_InsectCloud_C_DoAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.ActionComp = ActionComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AAura_Mod_HiveShot_InsectCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ReceiveBeginPlay");

	AAura_Mod_HiveShot_InsectCloud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ReceiveEndPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Mod_HiveShot_InsectCloud_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ReceiveEndPlay");

	AAura_Mod_HiveShot_InsectCloud_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.StopAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Mod_HiveShot_InsectCloud_C::StopAction(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.StopAction");

	AAura_Mod_HiveShot_InsectCloud_C_StopAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Mod_HiveShot_InsectCloud_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ReceiveTick");

	AAura_Mod_HiveShot_InsectCloud_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ExecuteUbergraph_Aura_Mod_HiveShot_InsectCloud
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAura_Mod_HiveShot_InsectCloud_C::ExecuteUbergraph_Aura_Mod_HiveShot_InsectCloud(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C.ExecuteUbergraph_Aura_Mod_HiveShot_InsectCloud");

	AAura_Mod_HiveShot_InsectCloud_C_ExecuteUbergraph_Aura_Mod_HiveShot_InsectCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
