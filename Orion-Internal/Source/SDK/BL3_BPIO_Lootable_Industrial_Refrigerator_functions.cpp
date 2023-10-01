// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Industrial_Refrigerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_Industrial_Refrigerator.BPIO_Lootable_Industrial_Refrigerator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_Industrial_Refrigerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_Refrigerator.BPIO_Lootable_Industrial_Refrigerator_C.UserConstructionScript");

	ABPIO_Lootable_Industrial_Refrigerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Industrial_Refrigerator.BPIO_Lootable_Industrial_Refrigerator_C.OnEnabling
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_Industrial_Refrigerator_C::OnEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_Refrigerator.BPIO_Lootable_Industrial_Refrigerator_C.OnEnabling");

	ABPIO_Lootable_Industrial_Refrigerator_C_OnEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Industrial_Refrigerator.BPIO_Lootable_Industrial_Refrigerator_C.ExecuteUbergraph_BPIO_Lootable_Industrial_Refrigerator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_Industrial_Refrigerator_C::ExecuteUbergraph_BPIO_Lootable_Industrial_Refrigerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_Refrigerator.BPIO_Lootable_Industrial_Refrigerator_C.ExecuteUbergraph_BPIO_Lootable_Industrial_Refrigerator");

	ABPIO_Lootable_Industrial_Refrigerator_C_ExecuteUbergraph_BPIO_Lootable_Industrial_Refrigerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
