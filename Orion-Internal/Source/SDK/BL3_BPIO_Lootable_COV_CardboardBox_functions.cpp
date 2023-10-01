// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_COV_CardboardBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_COV_CardboardBox.BPIO_Lootable_COV_CardboardBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_COV_CardboardBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_COV_CardboardBox.BPIO_Lootable_COV_CardboardBox_C.UserConstructionScript");

	ABPIO_Lootable_COV_CardboardBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_COV_CardboardBox.BPIO_Lootable_COV_CardboardBox_C.OnEnabling
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_COV_CardboardBox_C::OnEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_COV_CardboardBox.BPIO_Lootable_COV_CardboardBox_C.OnEnabling");

	ABPIO_Lootable_COV_CardboardBox_C_OnEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_COV_CardboardBox.BPIO_Lootable_COV_CardboardBox_C.ExecuteUbergraph_BPIO_Lootable_COV_CardboardBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_COV_CardboardBox_C::ExecuteUbergraph_BPIO_Lootable_COV_CardboardBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_COV_CardboardBox.BPIO_Lootable_COV_CardboardBox_C.ExecuteUbergraph_BPIO_Lootable_COV_CardboardBox");

	ABPIO_Lootable_COV_CardboardBox_C_ExecuteUbergraph_BPIO_Lootable_COV_CardboardBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
