// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Industrial_PortaPotty_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_Industrial_PortaPotty.BPIO_Lootable_Industrial_PortaPotty_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_Industrial_PortaPotty_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_PortaPotty.BPIO_Lootable_Industrial_PortaPotty_C.UserConstructionScript");

	ABPIO_Lootable_Industrial_PortaPotty_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Industrial_PortaPotty.BPIO_Lootable_Industrial_PortaPotty_C.OnEnabling
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_Industrial_PortaPotty_C::OnEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_PortaPotty.BPIO_Lootable_Industrial_PortaPotty_C.OnEnabling");

	ABPIO_Lootable_Industrial_PortaPotty_C_OnEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Industrial_PortaPotty.BPIO_Lootable_Industrial_PortaPotty_C.ExecuteUbergraph_BPIO_Lootable_Industrial_PortaPotty
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_Industrial_PortaPotty_C::ExecuteUbergraph_BPIO_Lootable_Industrial_PortaPotty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_PortaPotty.BPIO_Lootable_Industrial_PortaPotty_C.ExecuteUbergraph_BPIO_Lootable_Industrial_PortaPotty");

	ABPIO_Lootable_Industrial_PortaPotty_C_ExecuteUbergraph_BPIO_Lootable_Industrial_PortaPotty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
