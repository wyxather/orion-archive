// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Operative_Digiclone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStandIn_Operative_Digiclone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.UserConstructionScript");

	AStandIn_Operative_Digiclone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone
// (BlueprintEvent)
// Parameters:
// class UGbxCustomizationData*   Customization                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStandIn_Operative_Digiclone_C::BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone(class UGbxCustomizationData* Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone");

	AStandIn_Operative_Digiclone_C_BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone_Params params;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.OnReceivedClonedWeaponAppearance
// (Event, Public, BlueprintEvent)
// Parameters:
// class USceneComponent**        BaseComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AStandIn_Operative_Digiclone_C::OnReceivedClonedWeaponAppearance(class USceneComponent** BaseComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.OnReceivedClonedWeaponAppearance");

	AStandIn_Operative_Digiclone_C_OnReceivedClonedWeaponAppearance_Params params;
	params.BaseComponent = BaseComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.ExecuteUbergraph_StandIn_Operative_Digiclone
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStandIn_Operative_Digiclone_C::ExecuteUbergraph_StandIn_Operative_Digiclone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.ExecuteUbergraph_StandIn_Operative_Digiclone");

	AStandIn_Operative_Digiclone_C_ExecuteUbergraph_StandIn_Operative_Digiclone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
