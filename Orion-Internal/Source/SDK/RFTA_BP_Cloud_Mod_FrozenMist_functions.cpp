// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Cloud_Mod_FrozenMist_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.TestDriftstone
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cloud_Mod_FrozenMist_C::TestDriftstone(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.TestDriftstone");

	ABP_Cloud_Mod_FrozenMist_C_TestDriftstone_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopActionOnCharacter
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cloud_Mod_FrozenMist_C::StopActionOnCharacter(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopActionOnCharacter");

	ABP_Cloud_Mod_FrozenMist_C_StopActionOnCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoActionToCharacter
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cloud_Mod_FrozenMist_C::DoActionToCharacter(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoActionToCharacter");

	ABP_Cloud_Mod_FrozenMist_C_DoActionToCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.AddFrostbiteStack
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cloud_Mod_FrozenMist_C::AddFrostbiteStack(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.AddFrostbiteStack");

	ABP_Cloud_Mod_FrozenMist_C_AddFrostbiteStack_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Start
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Cloud_Mod_FrozenMist_C::SFX_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Start");

	ABP_Cloud_Mod_FrozenMist_C_SFX_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Stop
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_Cloud_Mod_FrozenMist_C::SFX_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.SFX_Stop");

	ABP_Cloud_Mod_FrozenMist_C_SFX_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_Cloud_Mod_FrozenMist_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveBeginPlay");

	ABP_Cloud_Mod_FrozenMist_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionComponent**       ActionComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cloud_Mod_FrozenMist_C::DoAction(class ACharacterGunfire** TargetCharacter, class UActionComponent** ActionComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.DoAction");

	ABP_Cloud_Mod_FrozenMist_C_DoAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.ActionComp = ActionComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cloud_Mod_FrozenMist_C::StopAction(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.StopAction");

	ABP_Cloud_Mod_FrozenMist_C_StopAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.MulticastFadeOut
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Cloud_Mod_FrozenMist_C::MulticastFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.MulticastFadeOut");

	ABP_Cloud_Mod_FrozenMist_C_MulticastFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cloud_Mod_FrozenMist_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ReceiveTick");

	ABP_Cloud_Mod_FrozenMist_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ExecuteUbergraph_BP_Cloud_Mod_FrozenMist
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cloud_Mod_FrozenMist_C::ExecuteUbergraph_BP_Cloud_Mod_FrozenMist(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C.ExecuteUbergraph_BP_Cloud_Mod_FrozenMist");

	ABP_Cloud_Mod_FrozenMist_C_ExecuteUbergraph_BP_Cloud_Mod_FrozenMist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
