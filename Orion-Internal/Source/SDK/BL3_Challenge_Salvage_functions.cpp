// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Salvage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Salvage.Challenge_Salvage_C.GetClaptrapGFDialog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogTimeSlotReference Dialog_                        (Parm, OutParm)

void UChallenge_Salvage_C::GetClaptrapGFDialog(struct FDialogTimeSlotReference* Dialog_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Salvage.Challenge_Salvage_C.GetClaptrapGFDialog");

	UChallenge_Salvage_C_GetClaptrapGFDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dialog_ != nullptr)
		*Dialog_ = params.Dialog_;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
