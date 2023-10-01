// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_BonePile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_BonePile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.UserConstructionScript");

	ABPIO_Lootable_BonePile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_BonePile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.ReceiveBeginPlay");

	ABPIO_Lootable_BonePile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.Pile Opened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALootableObject*         LootableObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_BonePile_C::Pile_Opened(class ALootableObject* LootableObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.Pile Opened");

	ABPIO_Lootable_BonePile_C_Pile_Opened_Params params;
	params.LootableObject = LootableObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.ExecuteUbergraph_BPIO_Lootable_BonePile
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_BonePile_C::ExecuteUbergraph_BPIO_Lootable_BonePile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_BonePile.BPIO_Lootable_BonePile_C.ExecuteUbergraph_BPIO_Lootable_BonePile");

	ABPIO_Lootable_BonePile_C_ExecuteUbergraph_BPIO_Lootable_BonePile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
