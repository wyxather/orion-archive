// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rock_Formation_Pile_Eridian_Small_B_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PD_Rock_Formation_Pile_Eridian_Small_B.PD_Rock_Formation_Pile_Eridian_Small_B_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APD_Rock_Formation_Pile_Eridian_Small_B_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Small_B.PD_Rock_Formation_Pile_Eridian_Small_B_C.UserConstructionScript");

	APD_Rock_Formation_Pile_Eridian_Small_B_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Small_B.PD_Rock_Formation_Pile_Eridian_Small_B_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature_PD_Rock_Formation_Pile_Eridian_Small_A
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APD_Rock_Formation_Pile_Eridian_Small_B_C::BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature_PD_Rock_Formation_Pile_Eridian_Small_A(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Small_B.PD_Rock_Formation_Pile_Eridian_Small_B_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature_PD_Rock_Formation_Pile_Eridian_Small_A");

	APD_Rock_Formation_Pile_Eridian_Small_B_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature_PD_Rock_Formation_Pile_Eridian_Small_A_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PD_Rock_Formation_Pile_Eridian_Small_B.PD_Rock_Formation_Pile_Eridian_Small_B_C.ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small_B
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APD_Rock_Formation_Pile_Eridian_Small_B_C::ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small_B(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Rock_Formation_Pile_Eridian_Small_B.PD_Rock_Formation_Pile_Eridian_Small_B_C.ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small_B");

	APD_Rock_Formation_Pile_Eridian_Small_B_C_ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
