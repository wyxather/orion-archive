// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_UpgradeConfirm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_UpgradeConfirm.Dialog_UpgradeConfirm_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipeInfo*            RecipeInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ADialog_UpgradeConfirm_C::Init(int* ItemID, struct FRecipeInfo* RecipeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_UpgradeConfirm.Dialog_UpgradeConfirm_C.Init");

	ADialog_UpgradeConfirm_C_Init_Params params;
	params.ItemID = ItemID;
	params.RecipeInfo = RecipeInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
