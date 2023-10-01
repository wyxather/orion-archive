// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Industrial_Lockbox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_Industrial_Lockbox.BPIO_Lootable_Industrial_Lockbox_C.MakeLockDisappear
// (Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_Industrial_Lockbox_C::MakeLockDisappear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_Lockbox.BPIO_Lootable_Industrial_Lockbox_C.MakeLockDisappear");

	ABPIO_Lootable_Industrial_Lockbox_C_MakeLockDisappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Industrial_Lockbox.BPIO_Lootable_Industrial_Lockbox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_Industrial_Lockbox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_Lockbox.BPIO_Lootable_Industrial_Lockbox_C.UserConstructionScript");

	ABPIO_Lootable_Industrial_Lockbox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Industrial_Lockbox.BPIO_Lootable_Industrial_Lockbox_C.OnEnabling
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_Industrial_Lockbox_C::OnEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_Lockbox.BPIO_Lootable_Industrial_Lockbox_C.OnEnabling");

	ABPIO_Lootable_Industrial_Lockbox_C_OnEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Industrial_Lockbox.BPIO_Lootable_Industrial_Lockbox_C.ExecuteUbergraph_BPIO_Lootable_Industrial_Lockbox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_Industrial_Lockbox_C::ExecuteUbergraph_BPIO_Lootable_Industrial_Lockbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_Lockbox.BPIO_Lootable_Industrial_Lockbox_C.ExecuteUbergraph_BPIO_Lootable_Industrial_Lockbox");

	ABPIO_Lootable_Industrial_Lockbox_C_ExecuteUbergraph_BPIO_Lootable_Industrial_Lockbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
