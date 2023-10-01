// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Immolator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Root_Immolator.Character_Root_Immolator_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Root_Immolator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Immolator.Character_Root_Immolator_C.ReceiveBeginPlay");

	ACharacter_Root_Immolator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Immolator.Character_Root_Immolator_C.OnBurnEffect
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Immolator_C::OnBurnEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Immolator.Character_Root_Immolator_C.OnBurnEffect");

	ACharacter_Root_Immolator_C_OnBurnEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Immolator.Character_Root_Immolator_C.ExecuteUbergraph_Character_Root_Immolator
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Immolator_C::ExecuteUbergraph_Character_Root_Immolator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Immolator.Character_Root_Immolator_C.ExecuteUbergraph_Character_Root_Immolator");

	ACharacter_Root_Immolator_C_ExecuteUbergraph_Character_Root_Immolator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
