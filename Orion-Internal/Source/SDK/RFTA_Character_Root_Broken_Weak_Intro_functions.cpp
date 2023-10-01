// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Broken_Weak_Intro_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Root_Broken_Weak_Intro.Character_Root_Broken_Weak_Intro_C.ExecuteUbergraph_Character_Root_Broken_Weak_Intro
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Broken_Weak_Intro_C::ExecuteUbergraph_Character_Root_Broken_Weak_Intro(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken_Weak_Intro.Character_Root_Broken_Weak_Intro_C.ExecuteUbergraph_Character_Root_Broken_Weak_Intro");

	ACharacter_Root_Broken_Weak_Intro_C_ExecuteUbergraph_Character_Root_Broken_Weak_Intro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
