// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_RedChest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_RedChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C.UserConstructionScript");

	ABPIO_Lootable_RedChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_RedChest
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPIO_Lootable_RedChest_C::BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_RedChest(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_RedChest");

	ABPIO_Lootable_RedChest_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_RedChest_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C.ExecuteUbergraph_BPIO_Lootable_RedChest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_RedChest_C::ExecuteUbergraph_BPIO_Lootable_RedChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C.ExecuteUbergraph_BPIO_Lootable_RedChest");

	ABPIO_Lootable_RedChest_C_ExecuteUbergraph_BPIO_Lootable_RedChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
