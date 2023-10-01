// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Broken_AnimsBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Root_Broken_AnimsBP.Character_Root_Broken_AnimsBP_C.BlueprintUpdateAnimation
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Root_Broken_AnimsBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken_AnimsBP.Character_Root_Broken_AnimsBP_C.BlueprintUpdateAnimation");

	UCharacter_Root_Broken_AnimsBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Broken_AnimsBP.Character_Root_Broken_AnimsBP_C.ExecuteUbergraph_Character_Root_Broken_AnimsBP
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacter_Root_Broken_AnimsBP_C::ExecuteUbergraph_Character_Root_Broken_AnimsBP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Broken_AnimsBP.Character_Root_Broken_AnimsBP_C.ExecuteUbergraph_Character_Root_Broken_AnimsBP");

	UCharacter_Root_Broken_AnimsBP_C_ExecuteUbergraph_Character_Root_Broken_AnimsBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
