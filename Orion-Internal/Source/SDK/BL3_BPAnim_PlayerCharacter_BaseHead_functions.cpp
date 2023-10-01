// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_PlayerCharacter_BaseHead_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_PlayerCharacter_BaseHead.BPAnim_PlayerCharacter_BaseHead_C.ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_PlayerCharacter_BaseHead_C::ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_PlayerCharacter_BaseHead.BPAnim_PlayerCharacter_BaseHead_C.ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead");

	UBPAnim_PlayerCharacter_BaseHead_C_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
