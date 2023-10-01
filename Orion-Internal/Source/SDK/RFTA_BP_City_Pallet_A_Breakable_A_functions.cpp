// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_City_Pallet_A_Breakable_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_City_Pallet_A_Breakable_A.BP_City_Pallet_A_Breakable_A_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UBreakableComponent**    Breakable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_City_Pallet_A_Breakable_A_C::BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature(class UBreakableComponent** Breakable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_City_Pallet_A_Breakable_A.BP_City_Pallet_A_Breakable_A_C.BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature");

	ABP_City_Pallet_A_Breakable_A_C_BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature_Params params;
	params.Breakable = Breakable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_City_Pallet_A_Breakable_A.BP_City_Pallet_A_Breakable_A_C.ExecuteUbergraph_BP_City_Pallet_A_Breakable_A
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_City_Pallet_A_Breakable_A_C::ExecuteUbergraph_BP_City_Pallet_A_Breakable_A(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_City_Pallet_A_Breakable_A.BP_City_Pallet_A_Breakable_A_C.ExecuteUbergraph_BP_City_Pallet_A_Breakable_A");

	ABP_City_Pallet_A_Breakable_A_C_ExecuteUbergraph_BP_City_Pallet_A_Breakable_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
