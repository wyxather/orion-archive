// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_CraftConfirm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_CraftConfirm.Dialog_CraftConfirm_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo*            RecipeInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ADialog_CraftConfirm_C::Init(struct FRecipeInfo* RecipeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_CraftConfirm.Dialog_CraftConfirm_C.Init");

	ADialog_CraftConfirm_C_Init_Params params;
	params.RecipeInfo = RecipeInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
