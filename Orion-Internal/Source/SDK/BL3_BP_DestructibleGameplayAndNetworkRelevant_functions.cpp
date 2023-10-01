// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DestructibleGameplayAndNetworkRelevant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.ForceTotalDestruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DestructibleGameplayAndNetworkRelevant_C::ForceTotalDestruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.ForceTotalDestruction");

	ABP_DestructibleGameplayAndNetworkRelevant_C_ForceTotalDestruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.TurnOffNavPaint
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DestructibleGameplayAndNetworkRelevant_C::TurnOffNavPaint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.TurnOffNavPaint");

	ABP_DestructibleGameplayAndNetworkRelevant_C_TurnOffNavPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.AttemptLootableScripting
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DestructibleGameplayAndNetworkRelevant_C::AttemptLootableScripting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.AttemptLootableScripting");

	ABP_DestructibleGameplayAndNetworkRelevant_C_AttemptLootableScripting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DestructibleGameplayAndNetworkRelevant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.UserConstructionScript");

	ABP_DestructibleGameplayAndNetworkRelevant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BPI_SkipToDestroyedState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DestructibleGameplayAndNetworkRelevant_C::BPI_SkipToDestroyedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BPI_SkipToDestroyedState");

	ABP_DestructibleGameplayAndNetworkRelevant_C_BPI_SkipToDestroyedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BPI_SetFracturable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fracturable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestructibleGameplayAndNetworkRelevant_C::BPI_SetFracturable(bool Fracturable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BPI_SetFracturable");

	ABP_DestructibleGameplayAndNetworkRelevant_C_BPI_SetFracturable_Params params;
	params.Fracturable = Fracturable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.CauseDamageToRandomChunk
// (BlueprintCallable, BlueprintEvent)

void ABP_DestructibleGameplayAndNetworkRelevant_C::CauseDamageToRandomChunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.CauseDamageToRandomChunk");

	ABP_DestructibleGameplayAndNetworkRelevant_C_CauseDamageToRandomChunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.ContinueSelfDamageLoop
// (BlueprintCallable, BlueprintEvent)

void ABP_DestructibleGameplayAndNetworkRelevant_C::ContinueSelfDamageLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.ContinueSelfDamageLoop");

	ABP_DestructibleGameplayAndNetworkRelevant_C_ContinueSelfDamageLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BPI_ScriptedTotalDestruction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageRadius                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestructibleGameplayAndNetworkRelevant_C::BPI_ScriptedTotalDestruction(float DamageRadius, float ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BPI_ScriptedTotalDestruction");

	ABP_DestructibleGameplayAndNetworkRelevant_C_BPI_ScriptedTotalDestruction_Params params;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_GbxComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayAndNetworkRelevant
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 FractureCentroid               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          FracturePercent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSilentFracture                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestructibleGameplayAndNetworkRelevant_C::BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_GbxComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayAndNetworkRelevant(const struct FVector& FractureCentroid, const struct FVector& HitDirection, float FracturePercent, bool bSilentFracture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_GbxComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayAndNetworkRelevant");

	ABP_DestructibleGameplayAndNetworkRelevant_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_GbxComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayAndNetworkRelevant_Params params;
	params.FractureCentroid = FractureCentroid;
	params.HitDirection = HitDirection;
	params.FracturePercent = FracturePercent;
	params.bSilentFracture = bSilentFracture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.ExecuteUbergraph_BP_DestructibleGameplayAndNetworkRelevant
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestructibleGameplayAndNetworkRelevant_C::ExecuteUbergraph_BP_DestructibleGameplayAndNetworkRelevant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayAndNetworkRelevant.BP_DestructibleGameplayAndNetworkRelevant_C.ExecuteUbergraph_BP_DestructibleGameplayAndNetworkRelevant");

	ABP_DestructibleGameplayAndNetworkRelevant_C_ExecuteUbergraph_BP_DestructibleGameplayAndNetworkRelevant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
