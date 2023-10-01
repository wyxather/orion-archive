// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_FocusWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_FocusWidget.Widget_FocusWidget_C.GetCrafting
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingComponent*      Crafting                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_FocusWidget_C::GetCrafting(class UCraftingComponent** Crafting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FocusWidget.Widget_FocusWidget_C.GetCrafting");

	UWidget_FocusWidget_C_GetCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Crafting != nullptr)
		*Crafting = params.Crafting;
}


// Function Widget_FocusWidget.Widget_FocusWidget_C.GetInventory
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_FocusWidget_C::GetInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FocusWidget.Widget_FocusWidget_C.GetInventory");

	UWidget_FocusWidget_C_GetInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function Widget_FocusWidget.Widget_FocusWidget_C.GetContextActor
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_FocusWidget_C::GetContextActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FocusWidget.Widget_FocusWidget_C.GetContextActor");

	UWidget_FocusWidget_C_GetContextActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
