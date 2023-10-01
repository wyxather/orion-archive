// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachine_Ammo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.RefillAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           ContextSource                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       Max                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       Current                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_Ammo_C::RefillAmmo(class AOakCharacter* ContextSource, class UGbxAttributeData* Max, class UGbxAttributeData* Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.RefillAmmo");

	ABP_VendingMachine_Ammo_C_RefillAmmo_Params params;
	params.ContextSource = ContextSource;
	params.Max = Max;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachine_Ammo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.UserConstructionScript");

	ABP_VendingMachine_Ammo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Ammo
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_VendingMachine_Ammo_C::BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Ammo(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Ammo");

	ABP_VendingMachine_Ammo_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_VendingMachine_Ammo_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.ExecuteUbergraph_BP_VendingMachine_Ammo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachine_Ammo_C::ExecuteUbergraph_BP_VendingMachine_Ammo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachine_Ammo.BP_VendingMachine_Ammo_C.ExecuteUbergraph_BP_VendingMachine_Ammo");

	ABP_VendingMachine_Ammo_C_ExecuteUbergraph_BP_VendingMachine_Ammo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
