// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Wraith_Screamer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Root_Wraith_Screamer.Character_Root_Wraith_Screamer_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Root_Wraith_Screamer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Wraith_Screamer.Character_Root_Wraith_Screamer_C.ReceiveBeginPlay");

	ACharacter_Root_Wraith_Screamer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Wraith_Screamer.Character_Root_Wraith_Screamer_C.OnTeleportOut
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Wraith_Screamer_C::OnTeleportOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Wraith_Screamer.Character_Root_Wraith_Screamer_C.OnTeleportOut");

	ACharacter_Root_Wraith_Screamer_C_OnTeleportOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Wraith_Screamer.Character_Root_Wraith_Screamer_C.OnTeleportIn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Wraith_Screamer_C::OnTeleportIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Wraith_Screamer.Character_Root_Wraith_Screamer_C.OnTeleportIn");

	ACharacter_Root_Wraith_Screamer_C_OnTeleportIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Wraith_Screamer.Character_Root_Wraith_Screamer_C.ExecuteUbergraph_Character_Root_Wraith_Screamer
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Wraith_Screamer_C::ExecuteUbergraph_Character_Root_Wraith_Screamer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Wraith_Screamer.Character_Root_Wraith_Screamer_C.ExecuteUbergraph_Character_Root_Wraith_Screamer");

	ACharacter_Root_Wraith_Screamer_C_ExecuteUbergraph_Character_Root_Wraith_Screamer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
