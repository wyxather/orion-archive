// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Guard_Ward13_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Guard_Ward13.Character_Guard_Ward13_C.SetCustomLipFlap
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SetCustomLipFlap               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Guard_Ward13_C::SetCustomLipFlap(bool* SetCustomLipFlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Guard_Ward13.Character_Guard_Ward13_C.SetCustomLipFlap");

	ACharacter_Guard_Ward13_C_SetCustomLipFlap_Params params;
	params.SetCustomLipFlap = SetCustomLipFlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Guard_Ward13.Character_Guard_Ward13_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Guard_Ward13_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Guard_Ward13.Character_Guard_Ward13_C.ReceiveTick");

	ACharacter_Guard_Ward13_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Guard_Ward13.Character_Guard_Ward13_C.OnSetCustomFlap
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseCustomFlap                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Guard_Ward13_C::OnSetCustomFlap(bool* UseCustomFlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Guard_Ward13.Character_Guard_Ward13_C.OnSetCustomFlap");

	ACharacter_Guard_Ward13_C_OnSetCustomFlap_Params params;
	params.UseCustomFlap = UseCustomFlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Guard_Ward13.Character_Guard_Ward13_C.ExecuteUbergraph_Character_Guard_Ward13
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Guard_Ward13_C::ExecuteUbergraph_Character_Guard_Ward13(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Guard_Ward13.Character_Guard_Ward13_C.ExecuteUbergraph_Character_Guard_Ward13");

	ACharacter_Guard_Ward13_C_ExecuteUbergraph_Character_Guard_Ward13_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
