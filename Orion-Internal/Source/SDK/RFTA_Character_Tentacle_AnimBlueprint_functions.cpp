// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Tentacle_AnimBlueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Tentacle_AnimBlueprint.Character_Tentacle_AnimBlueprint_C.ExecuteUbergraph_Character_Tentacle_AnimBlueprint
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Tentacle_AnimBlueprint_C::ExecuteUbergraph_Character_Tentacle_AnimBlueprint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle_AnimBlueprint.Character_Tentacle_AnimBlueprint_C.ExecuteUbergraph_Character_Tentacle_AnimBlueprint");

	UCharacter_Tentacle_AnimBlueprint_C_ExecuteUbergraph_Character_Tentacle_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
