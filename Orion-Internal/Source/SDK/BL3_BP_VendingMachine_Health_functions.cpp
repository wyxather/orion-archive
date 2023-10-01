// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachine_Health_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VendingMachine_Health.BP_VendingMachine_Health_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_Health_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine_Health.BP_VendingMachine_Health_C.UserConstructionScript");

	ABP_VendingMachine_Health_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine_Health.BP_VendingMachine_Health_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Health
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_VendingMachine_Health_C::BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Health(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine_Health.BP_VendingMachine_Health_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Health");

	ABP_VendingMachine_Health_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Health_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine_Health.BP_VendingMachine_Health_C.ExecuteUbergraph_BP_VendingMachine_Health
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_Health_C::ExecuteUbergraph_BP_VendingMachine_Health(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine_Health.BP_VendingMachine_Health_C.ExecuteUbergraph_BP_VendingMachine_Health");

	ABP_VendingMachine_Health_C_ExecuteUbergraph_BP_VendingMachine_Health_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
