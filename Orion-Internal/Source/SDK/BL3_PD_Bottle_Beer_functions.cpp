// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Bottle_Beer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PD_Bottle_Beer.PD_Bottle_Beer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APD_Bottle_Beer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Bottle_Beer.PD_Bottle_Beer_C.UserConstructionScript");

	APD_Bottle_Beer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Bottle_Beer.PD_Bottle_Beer_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_5_ComponentFractureSignature__DelegateSignature_PD_Bottle_Beer
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APD_Bottle_Beer_C::BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_5_ComponentFractureSignature__DelegateSignature_PD_Bottle_Beer(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Bottle_Beer.PD_Bottle_Beer_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_5_ComponentFractureSignature__DelegateSignature_PD_Bottle_Beer");

	APD_Bottle_Beer_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_5_ComponentFractureSignature__DelegateSignature_PD_Bottle_Beer_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Bottle_Beer.PD_Bottle_Beer_C.ExecuteUbergraph_PD_Bottle_Beer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APD_Bottle_Beer_C::ExecuteUbergraph_PD_Bottle_Beer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Bottle_Beer.PD_Bottle_Beer_C.ExecuteUbergraph_PD_Bottle_Beer");

	APD_Bottle_Beer_C_ExecuteUbergraph_PD_Bottle_Beer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
