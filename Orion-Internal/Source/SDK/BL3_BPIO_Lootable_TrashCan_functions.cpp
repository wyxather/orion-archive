// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_TrashCan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_TrashCan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.UserConstructionScript");

	ABPIO_Lootable_TrashCan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.OnEnabling
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_TrashCan_C::OnEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.OnEnabling");

	ABPIO_Lootable_TrashCan_C_OnEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.BndEvt__Mesh_Chest_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_BPIO_Lootable_TrashCan
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_TrashCan_C::BndEvt__Mesh_Chest_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_BPIO_Lootable_TrashCan(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.BndEvt__Mesh_Chest_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_BPIO_Lootable_TrashCan");

	ABPIO_Lootable_TrashCan_C_BndEvt__Mesh_Chest_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature_BPIO_Lootable_TrashCan_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.CE_CheckToSeeIfLidDisappears
// (BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_TrashCan_C::CE_CheckToSeeIfLidDisappears()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.CE_CheckToSeeIfLidDisappears");

	ABPIO_Lootable_TrashCan_C_CE_CheckToSeeIfLidDisappears_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.ExecuteUbergraph_BPIO_Lootable_TrashCan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_TrashCan_C::ExecuteUbergraph_BPIO_Lootable_TrashCan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_TrashCan.BPIO_Lootable_TrashCan_C.ExecuteUbergraph_BPIO_Lootable_TrashCan");

	ABPIO_Lootable_TrashCan_C_ExecuteUbergraph_BPIO_Lootable_TrashCan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
