// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_PhaseCast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandIn_PhaseCast.StandIn_PhaseCast_C.SetGhostMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void AStandIn_PhaseCast_C::SetGhostMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_PhaseCast.StandIn_PhaseCast_C.SetGhostMaterials");

	AStandIn_PhaseCast_C_SetGhostMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_PhaseCast.StandIn_PhaseCast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStandIn_PhaseCast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_PhaseCast.StandIn_PhaseCast_C.UserConstructionScript");

	AStandIn_PhaseCast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_PhaseCast.StandIn_PhaseCast_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStandIn_PhaseCast_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_PhaseCast.StandIn_PhaseCast_C.ReceiveBeginPlay");

	AStandIn_PhaseCast_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_PhaseCast.StandIn_PhaseCast_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_PhaseCast
// (BlueprintEvent)
// Parameters:
// class UGbxCustomizationData*   Customization                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStandIn_PhaseCast_C::BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_PhaseCast(class UGbxCustomizationData* Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_PhaseCast.StandIn_PhaseCast_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_PhaseCast");

	AStandIn_PhaseCast_C_BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_PhaseCast_Params params;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_PhaseCast.StandIn_PhaseCast_C.ExecuteUbergraph_StandIn_PhaseCast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStandIn_PhaseCast_C::ExecuteUbergraph_StandIn_PhaseCast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_PhaseCast.StandIn_PhaseCast_C.ExecuteUbergraph_StandIn_PhaseCast");

	AStandIn_PhaseCast_C_ExecuteUbergraph_StandIn_PhaseCast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
