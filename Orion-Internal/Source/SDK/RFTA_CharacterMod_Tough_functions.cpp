// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_CharacterMod_Tough_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterMod_Tough.CharacterMod_Tough_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UCharacterMod_Tough_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Tough.CharacterMod_Tough_C.OnComputeStats");

	UCharacterMod_Tough_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterMod_Tough.CharacterMod_Tough_C.ExecuteUbergraph_CharacterMod_Tough
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterMod_Tough_C::ExecuteUbergraph_CharacterMod_Tough(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Tough.CharacterMod_Tough_C.ExecuteUbergraph_CharacterMod_Tough");

	UCharacterMod_Tough_C_ExecuteUbergraph_CharacterMod_Tough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
