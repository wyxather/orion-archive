// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DestructibleGameplayOnlyRelevant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DestructibleGameplayOnlyRelevant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C.UserConstructionScript");

	ABP_DestructibleGameplayOnlyRelevant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DestructibleGameplayOnlyRelevant_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C.ReceiveBeginPlay");

	ABP_DestructibleGameplayOnlyRelevant_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_11_ComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayOnlyRelevant
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DestructibleGameplayOnlyRelevant_C::BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_11_ComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayOnlyRelevant(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_11_ComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayOnlyRelevant");

	ABP_DestructibleGameplayOnlyRelevant_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_11_ComponentFractureSignature__DelegateSignature_BP_DestructibleGameplayOnlyRelevant_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C.ExecuteUbergraph_BP_DestructibleGameplayOnlyRelevant
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestructibleGameplayOnlyRelevant_C::ExecuteUbergraph_BP_DestructibleGameplayOnlyRelevant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleGameplayOnlyRelevant.BP_DestructibleGameplayOnlyRelevant_C.ExecuteUbergraph_BP_DestructibleGameplayOnlyRelevant");

	ABP_DestructibleGameplayOnlyRelevant_C_ExecuteUbergraph_BP_DestructibleGameplayOnlyRelevant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
