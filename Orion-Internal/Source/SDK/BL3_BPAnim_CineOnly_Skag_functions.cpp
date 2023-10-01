// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CineOnly_Skag_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_CineOnly_Skag.BPAnim_CineOnly_Skag_C.ExecuteUbergraph_BPAnim_CineOnly_Skag
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_CineOnly_Skag_C::ExecuteUbergraph_BPAnim_CineOnly_Skag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_CineOnly_Skag.BPAnim_CineOnly_Skag_C.ExecuteUbergraph_BPAnim_CineOnly_Skag");

	UBPAnim_CineOnly_Skag_C_ExecuteUbergraph_BPAnim_CineOnly_Skag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
