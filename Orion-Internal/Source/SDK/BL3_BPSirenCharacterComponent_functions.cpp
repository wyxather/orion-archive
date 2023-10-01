// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPSirenCharacterComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.GetPhaseFlareSpawnLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 res                            (Parm, OutParm, IsPlainOldData)

void UBPSirenCharacterComponent_C::GetPhaseFlareSpawnLocation(struct FVector* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.GetPhaseFlareSpawnLocation");

	UBPSirenCharacterComponent_C_GetPhaseFlareSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseFlareSpawnLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPSirenCharacterComponent_C::SetPhaseFlareSpawnLocation(const struct FVector& Loc, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseFlareSpawnLocation");

	UBPSirenCharacterComponent_C_SetPhaseFlareSpawnLocation_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.Start3rdPersonArmFade
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInstant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPSirenCharacterComponent_C::Start3rdPersonArmFade(bool* bVisible, bool* bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.Start3rdPersonArmFade");

	UBPSirenCharacterComponent_C_Start3rdPersonArmFade_Params params;
	params.bVisible = bVisible;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartTattoFade
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPSirenCharacterComponent_C::StartTattoFade(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartTattoFade");

	UBPSirenCharacterComponent_C_StartTattoFade_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetArmElement
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPhaseTranceElementalType*     NewElement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPSirenCharacterComponent_C::SetArmElement(EPhaseTranceElementalType* NewElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetArmElement");

	UBPSirenCharacterComponent_C_SetArmElement_Params params;
	params.NewElement = NewElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartArmMaterialInstanceFade
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstance**      NewInstance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPSirenCharacterComponent_C::StartArmMaterialInstanceFade(class UMaterialInstance** NewInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.StartArmMaterialInstanceFade");

	UBPSirenCharacterComponent_C_StartArmMaterialInstanceFade_Params params;
	params.NewInstance = NewInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPSirenCharacterComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ReceiveBeginPlay");

	UBPSirenCharacterComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPSirenCharacterComponent_C::OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnActionSkillActivated");

	UBPSirenCharacterComponent_C_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnRushEventHappened
// (BlueprintCallable, BlueprintEvent)

void UBPSirenCharacterComponent_C::OnRushEventHappened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.OnRushEventHappened");

	UBPSirenCharacterComponent_C_OnRushEventHappened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseCastMeshActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPSirenCharacterComponent_C::SetPhaseCastMeshActive(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.SetPhaseCastMeshActive");

	UBPSirenCharacterComponent_C_SetPhaseCastMeshActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ExecuteUbergraph_BPSirenCharacterComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPSirenCharacterComponent_C::ExecuteUbergraph_BPSirenCharacterComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSirenCharacterComponent.BPSirenCharacterComponent_C.ExecuteUbergraph_BPSirenCharacterComponent");

	UBPSirenCharacterComponent_C_ExecuteUbergraph_BPSirenCharacterComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
