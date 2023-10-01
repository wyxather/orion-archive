// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CharSelectStandInAuxiliaryActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_CharSelectStandInAuxiliaryActor.BPAnim_CharSelectStandInAuxiliaryActor_C.ExecuteUbergraph_BPAnim_CharSelectStandInAuxiliaryActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_CharSelectStandInAuxiliaryActor_C::ExecuteUbergraph_BPAnim_CharSelectStandInAuxiliaryActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_CharSelectStandInAuxiliaryActor.BPAnim_CharSelectStandInAuxiliaryActor_C.ExecuteUbergraph_BPAnim_CharSelectStandInAuxiliaryActor");

	UBPAnim_CharSelectStandInAuxiliaryActor_C_ExecuteUbergraph_BPAnim_CharSelectStandInAuxiliaryActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
