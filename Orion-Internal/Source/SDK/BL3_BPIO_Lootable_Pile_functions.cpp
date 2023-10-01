// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Pile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_Pile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.UserConstructionScript");

	ABPIO_Lootable_Pile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_BonePile
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPIO_Lootable_Pile_C::BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_BonePile(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_BonePile");

	ABPIO_Lootable_Pile_C_BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_BonePile_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.OnLootableTakeDamage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FLootableObjectDamageEventDetails* Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPIO_Lootable_Pile_C::OnLootableTakeDamage(struct FLootableObjectDamageEventDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.OnLootableTakeDamage");

	ABPIO_Lootable_Pile_C_OnLootableTakeDamage_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.OnEnabling
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_Pile_C::OnEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.OnEnabling");

	ABPIO_Lootable_Pile_C_OnEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.ExecuteUbergraph_BPIO_Lootable_Pile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_Pile_C::ExecuteUbergraph_BPIO_Lootable_Pile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.ExecuteUbergraph_BPIO_Lootable_Pile");

	ABPIO_Lootable_Pile_C_ExecuteUbergraph_BPIO_Lootable_Pile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.On_Damaged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_Pile_C::On_Damaged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Pile.BPIO_Lootable_Pile_C.On_Damaged__DelegateSignature");

	ABPIO_Lootable_Pile_C_On_Damaged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
