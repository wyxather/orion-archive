// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LootableDestructible_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LootableDestructible.BP_LootableDestructible_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LootableDestructible_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootableDestructible.BP_LootableDestructible_C.UserConstructionScript");

	ABP_LootableDestructible_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootableDestructible.BP_LootableDestructible_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature_BP_LootableDestructible
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_LootableDestructible_C::BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature_BP_LootableDestructible(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootableDestructible.BP_LootableDestructible_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature_BP_LootableDestructible");

	ABP_LootableDestructible_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_ComponentFractureSignature__DelegateSignature_BP_LootableDestructible_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootableDestructible.BP_LootableDestructible_C.ExecuteUbergraph_BP_LootableDestructible
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootableDestructible_C::ExecuteUbergraph_BP_LootableDestructible(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootableDestructible.BP_LootableDestructible_C.ExecuteUbergraph_BP_LootableDestructible");

	ABP_LootableDestructible_C_ExecuteUbergraph_BP_LootableDestructible_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
