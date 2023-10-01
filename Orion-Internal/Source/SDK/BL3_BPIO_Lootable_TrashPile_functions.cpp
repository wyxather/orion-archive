// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_TrashPile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_TrashPile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.UserConstructionScript");

	ABPIO_Lootable_TrashPile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_TrashPile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.ReceiveBeginPlay");

	ABPIO_Lootable_TrashPile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.Pile Opened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALootableObject*         LootableObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_TrashPile_C::Pile_Opened(class ALootableObject* LootableObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.Pile Opened");

	ABPIO_Lootable_TrashPile_C_Pile_Opened_Params params;
	params.LootableObject = LootableObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.ExecuteUbergraph_BPIO_Lootable_TrashPile
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_TrashPile_C::ExecuteUbergraph_BPIO_Lootable_TrashPile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_TrashPile.BPIO_Lootable_TrashPile_C.ExecuteUbergraph_BPIO_Lootable_TrashPile");

	ABPIO_Lootable_TrashPile_C_ExecuteUbergraph_BPIO_Lootable_TrashPile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
