// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Operative_Cannon_1st_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_Operative_Cannon_1st.BPAnim_Operative_Cannon_1st_C.ExecuteUbergraph_BPAnim_Operative_Cannon_1st
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_Operative_Cannon_1st_C::ExecuteUbergraph_BPAnim_Operative_Cannon_1st(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Operative_Cannon_1st.BPAnim_Operative_Cannon_1st_C.ExecuteUbergraph_BPAnim_Operative_Cannon_1st");

	UBPAnim_Operative_Cannon_1st_C_ExecuteUbergraph_BPAnim_Operative_Cannon_1st_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
