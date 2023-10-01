// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ElementalPuddle_Mesh_Oil_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ElementalPuddle_Mesh_Oil.BP_ElementalPuddle_Mesh_Oil_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ElementalPuddle_Mesh_Oil_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalPuddle_Mesh_Oil.BP_ElementalPuddle_Mesh_Oil_C.UserConstructionScript");

	ABP_ElementalPuddle_Mesh_Oil_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ElementalPuddle_Mesh_Oil.BP_ElementalPuddle_Mesh_Oil_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil
// (BlueprintEvent)
// Parameters:
// class UElementalInteractionData* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInitialState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ElementalPuddle_Mesh_Oil_C::BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil(class UElementalInteractionData* State, bool bIsInitialState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalPuddle_Mesh_Oil.BP_ElementalPuddle_Mesh_Oil_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil");

	ABP_ElementalPuddle_Mesh_Oil_C_BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_0_ElementalInteractionStartedEvent__DelegateSignature_BP_ElementalPuddle_Decal_Oil_Params params;
	params.State = State;
	params.bIsInitialState = bIsInitialState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ElementalPuddle_Mesh_Oil.BP_ElementalPuddle_Mesh_Oil_C.ExecuteUbergraph_BP_ElementalPuddle_Mesh_Oil
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ElementalPuddle_Mesh_Oil_C::ExecuteUbergraph_BP_ElementalPuddle_Mesh_Oil(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalPuddle_Mesh_Oil.BP_ElementalPuddle_Mesh_Oil_C.ExecuteUbergraph_BP_ElementalPuddle_Mesh_Oil");

	ABP_ElementalPuddle_Mesh_Oil_C_ExecuteUbergraph_BP_ElementalPuddle_Mesh_Oil_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
