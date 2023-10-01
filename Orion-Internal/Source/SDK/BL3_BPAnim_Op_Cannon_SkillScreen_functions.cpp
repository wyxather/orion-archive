// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_Op_Cannon_SkillScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_Op_Cannon_SkillScreen.BPAnim_Op_Cannon_SkillScreen_C.ExecuteUbergraph_BPAnim_Op_Cannon_SkillScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_Op_Cannon_SkillScreen_C::ExecuteUbergraph_BPAnim_Op_Cannon_SkillScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_Op_Cannon_SkillScreen.BPAnim_Op_Cannon_SkillScreen_C.ExecuteUbergraph_BPAnim_Op_Cannon_SkillScreen");

	UBPAnim_Op_Cannon_SkillScreen_C_ExecuteUbergraph_BPAnim_Op_Cannon_SkillScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
