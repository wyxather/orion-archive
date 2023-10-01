// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DestructibleAesthetic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DestructibleAesthetic.BP_DestructibleAesthetic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DestructibleAesthetic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleAesthetic.BP_DestructibleAesthetic_C.UserConstructionScript");

	ABP_DestructibleAesthetic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleAesthetic.BP_DestructibleAesthetic_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_10_ComponentFractureSignature__DelegateSignature_BP_DestructibleAesthetic
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DestructibleAesthetic_C::BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_10_ComponentFractureSignature__DelegateSignature_BP_DestructibleAesthetic(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleAesthetic.BP_DestructibleAesthetic_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_10_ComponentFractureSignature__DelegateSignature_BP_DestructibleAesthetic");

	ABP_DestructibleAesthetic_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_10_ComponentFractureSignature__DelegateSignature_BP_DestructibleAesthetic_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestructibleAesthetic.BP_DestructibleAesthetic_C.ExecuteUbergraph_BP_DestructibleAesthetic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestructibleAesthetic_C::ExecuteUbergraph_BP_DestructibleAesthetic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestructibleAesthetic.BP_DestructibleAesthetic_C.ExecuteUbergraph_BP_DestructibleAesthetic");

	ABP_DestructibleAesthetic_C_ExecuteUbergraph_BP_DestructibleAesthetic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
