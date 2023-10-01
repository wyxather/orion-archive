// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LightDestructible_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LightDestructible.BP_LightDestructible_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightDestructible_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightDestructible.BP_LightDestructible_C.UserConstructionScript");

	ABP_LightDestructible_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightDestructible.BP_LightDestructible_C.BndEvt__RigidBodyComponent_K2Node_ComponentBoundEvent_0_RigidBodyComponentImpulseAdded__DelegateSignature_PO_LightDestructible
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 Impulse                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_LightDestructible_C::BndEvt__RigidBodyComponent_K2Node_ComponentBoundEvent_0_RigidBodyComponentImpulseAdded__DelegateSignature_PO_LightDestructible(const struct FVector& Impulse, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightDestructible.BP_LightDestructible_C.BndEvt__RigidBodyComponent_K2Node_ComponentBoundEvent_0_RigidBodyComponentImpulseAdded__DelegateSignature_PO_LightDestructible");

	ABP_LightDestructible_C_BndEvt__RigidBodyComponent_K2Node_ComponentBoundEvent_0_RigidBodyComponentImpulseAdded__DelegateSignature_PO_LightDestructible_Params params;
	params.Impulse = Impulse;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightDestructible.BP_LightDestructible_C.ExecuteUbergraph_BP_LightDestructible
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightDestructible_C::ExecuteUbergraph_BP_LightDestructible(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightDestructible.BP_LightDestructible_C.ExecuteUbergraph_BP_LightDestructible");

	ABP_LightDestructible_C_ExecuteUbergraph_BP_LightDestructible_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
