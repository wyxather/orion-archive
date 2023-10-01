// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OakAttributeComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ClearElementalAffinity
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_OakAttributeComponent_C::ClearElementalAffinity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ClearElementalAffinity");

	UBP_OakAttributeComponent_C_ClearElementalAffinity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.InitElementAffinity
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_OakAttributeComponent_C::InitElementAffinity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.InitElementAffinity");

	UBP_OakAttributeComponent_C_InitElementAffinity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.SetElementAffinity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_ElementalAffinity> Affinity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OakAttributeComponent_C::SetElementAffinity(EOakElementalType Element, TEnumAsByte<Enum_ElementalAffinity> Affinity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.SetElementAffinity");

	UBP_OakAttributeComponent_C_SetElementAffinity_Params params;
	params.Element = Element;
	params.Affinity = Affinity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_OakAttributeComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ReceiveBeginPlay");

	UBP_OakAttributeComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ExecuteUbergraph_BP_OakAttributeComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OakAttributeComponent_C::ExecuteUbergraph_BP_OakAttributeComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ExecuteUbergraph_BP_OakAttributeComponent");

	UBP_OakAttributeComponent_C_ExecuteUbergraph_BP_OakAttributeComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
