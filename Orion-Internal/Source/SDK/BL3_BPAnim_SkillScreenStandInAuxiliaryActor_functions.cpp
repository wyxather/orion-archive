// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_SkillScreenStandInAuxiliaryActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_SkillScreenStandInAuxiliaryActor.BPAnim_SkillScreenStandInAuxiliaryActor_C.ExecuteUbergraph_BPAnim_SkillScreenStandInAuxiliaryActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_SkillScreenStandInAuxiliaryActor_C::ExecuteUbergraph_BPAnim_SkillScreenStandInAuxiliaryActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_SkillScreenStandInAuxiliaryActor.BPAnim_SkillScreenStandInAuxiliaryActor_C.ExecuteUbergraph_BPAnim_SkillScreenStandInAuxiliaryActor");

	UBPAnim_SkillScreenStandInAuxiliaryActor_C_ExecuteUbergraph_BPAnim_SkillScreenStandInAuxiliaryActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
